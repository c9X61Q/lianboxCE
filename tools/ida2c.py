#!/usr/bin/env python3
"""把 IDA Hex-Rays 逐函数伪代码机械转成可编译 C 工程。

修的是「反编译破坏」里可机械化的那部分：
  · 匿名全局        → 按名字前缀恢复类型并统一声明
  · IDA 类型        → compat.h 里的 typedef
  · 编译器内建宏    → compat.h 里的等价宏
  · __userpurge 等  → 剥掉调用约定噪声
  · 未定义的外部调用 → 自动生成 extern 声明
"""
import os, re, sys, glob, collections

IDA_TYPES = {
    '_BYTE':'unsigned char', '_WORD':'unsigned short', '_DWORD':'unsigned int',
    '_QWORD':'unsigned long long', '_OWORD':'struct { unsigned long long a,b; }',
    '_UNKNOWN':'unsigned char',
}

MACROS = r'''
/* ---- IDA 内建 ---- */
#define LODWORD(x)  (*(unsigned int *)&(x))
#define HIDWORD(x)  (*((unsigned int *)&(x) + 1))
#define SLOBYTE(x)  (*(signed char *)&(x))
#define SLODWORD(x) (*(int *)&(x))
#define SHIDWORD(x) (*((int *)&(x) + 1))
#define LOBYTE(x)   (*(unsigned char *)&(x))
#define HIBYTE(x)   (*((unsigned char *)&(x) + 1))
#define LOWORD(x)   (*(unsigned short *)&(x))
#define HIWORD(x)   (*((unsigned short *)&(x) + 1))
#define BYTEn(x,n)  (*((unsigned char *)&(x) + (n)))
#define WORDn(x,n)  (*((unsigned short *)&(x) + (n)))
#define BYTE1(x)    BYTEn(x,1)
#define BYTE2(x)    BYTEn(x,2)
#define BYTE3(x)    BYTEn(x,3)
#define WORD1(x)    WORDn(x,1)
#define __ROL1__(x,n) ((unsigned char)(((x)<<((n)&7))  | ((x)>>(8 -((n)&7)))))
#define __ROR1__(x,n) ((unsigned char)(((x)>>((n)&7))  | ((x)<<(8 -((n)&7)))))
#define __ROL2__(x,n) ((unsigned short)(((x)<<((n)&15))| ((x)>>(16-((n)&15)))))
#define __ROR2__(x,n) ((unsigned short)(((x)>>((n)&15))| ((x)<<(16-((n)&15)))))
#define __ROL4__(x,n) ((unsigned int)(((x)<<((n)&31)) | ((x)>>(32-((n)&31)))))
#define __ROR4__(x,n) ((unsigned int)(((x)>>((n)&31)) | ((x)<<(32-((n)&31)))))
#define __ROL8__(x,n) ((unsigned long long)(((x)<<((n)&63)) | ((x)>>(64-((n)&63)))))
#define __ROR8__(x,n) ((unsigned long long)(((x)>>((n)&63)) | ((x)<<(64-((n)&63)))))
/* 溢出/进位标志内建：仅用于控制流的编译期占位（语义在源码注释中保留） */
#define __OFADD__(a,b) (0)
#define __OFSUB__(a,b) (0)
#define __CFADD__(a,b) (0)
#define __CFSUB__(a,b) (0)
#define __PAIR__(hi,lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define __SPAIR__(hi,lo) (((long long)(hi) << 32) | (unsigned int)(lo))
#define __PAIR64__(hi,lo) __PAIR__(hi,lo)
'''

WIN32_TYPES = [
 'void','char','short','int','long','float','double',
 'BYTE','WORD','DWORD','QWORD','BOOL','BOOLEAN','WCHAR','CHAR','UCHAR','USHORT','UINT','INT',
 'ULONG','LONG','LONGLONG','ULONGLONG','SIZE_T','SSIZE_T','LONG_PTR','ULONG_PTR','DWORD_PTR',
 'HANDLE','HMODULE','HINSTANCE','HRSRC','HGLOBAL','HLOCAL','HWND','HMENU','HICON','HCURSOR',
 'HBRUSH','HDC','HFONT','HBITMAP','HKEY','HDESK','HWINSTA','HHOOK','HKL','HMONITOR','HPEN',
 'LPVOID','LPCVOID','LPBYTE','LPWORD','LPDWORD','LPSTR','LPCSTR','LPWSTR','LPCWSTR','PSTR','PCSTR',
 'PWSTR','PCWSTR','PVOID','PCVOID','BSTR','LPBOOL','PBOOL','LPLONG','PULONG','PUINT','PINT',
 'ATOM','COLORREF','HRESULT','NTSTATUS','LPARAM','WPARAM','LRESULT','MSG','POINT','RECT','SIZE',
 'FILETIME','SYSTEMTIME','LARGE_INTEGER','ULARGE_INTEGER','OVERLAPPED','SECURITY_ATTRIBUTES',
 'STARTUPINFOW','STARTUPINFOA','PROCESS_INFORMATION','WNDCLASSEXW','WNDCLASSA','WNDPROC',
 'CREATESTRUCTW','MENUITEMINFOW','LOGFONTW','LOGFONTA','LOGPALETTE','PALETTEENTRY','BITMAPINFO',
 'BITMAPFILEHEADER','BITMAPINFOHEADER','ICONINFO','TPMPARAMS','TRACKMOUSEEVENT','DRAWITEMSTRUCT',
 'MEASUREITEMSTRUCT','COMPAREITEMSTRUCT','DELETEITEMSTRUCT','NMHDR','NMTTDISPINFOW',
 'LPTRACKMOUSEEVENT','HDROP','HGLOBAL','HRSRC','LANGID','LCID','LCID','TCHAR',
]

def sanitize(text):
    """剥掉反编译器专有语法"""
    text = re.sub(r'@<[^>]*>', '', text)                     # sub_405110@<eax>
    text = re.sub(r'\b(__userpurge|__usercall|__high|__return_ptr|__struct_ptr)\b\s*', '', text)
    text = re.sub(r'\b__noreturn\b', '', text)
    text = re.sub(r'\b(__fastcall|__stdcall|__cdecl|__thiscall)\b', '', text)
    text = text.replace('__int128', 'long double')
    return text

def collect(files):
    globals_used = collections.Counter()
    calls = set()
    defs = {}       # name -> signature
    bodies = []
    for f in files:
        txt = open(f, encoding='utf-8', errors='replace').read()
        lines = txt.splitlines()
        # 去掉工具写的两行头注释
        while lines and lines[0].startswith('//'):
            lines.pop(0)
        body = sanitize('\n'.join(lines))
        m = re.search(r'^([A-Za-z_][^\n;{}]*?\([^;{}]*?\))\s*\n?\s*\{', body, re.M)
        if not m:
            m2 = re.search(r'^([A-Za-z_].*?\(.*?\))\s*$', body, re.M)
            if not m2: continue
            sig = m2.group(1)
        else:
            sig = m.group(1)
        name_m = re.search(r'\b(\w+)\s*\(', sig.split('(')[0] + '(') or re.search(r'(\w+)\s*\(', sig)
        mname = None
        for cand in re.finditer(r'(\w+)\s*\(', sig):
            mname = cand.group(1)
        if not mname: continue
        if not re.match(r'^[A-Za-z_]\w*$', mname):
            continue      # C++ 修饰名，C 前端无法声明，单独统计
        defs[mname] = sig.strip()
        bodies.append((mname, body.strip()))
        for g in re.finditer(r'\b(dword|byte|word|qword|off|unk|asc|a|Str|flt|dbl|xmmword|ymmword)_([0-9A-Fa-f]{4,})\b', body):
            globals_used[g.group(0)] += 1
        for c in re.finditer(r'\b([A-Za-z_]\w*)\s*\(', body):
            calls.add(c.group(1))
    return globals_used, calls, defs, bodies

def gtype(name, body_hint=None):
    if body_hint is None: body_hint = {}
    if body_hint.get('arr'): return 'int *'      # 被下标访问 → 需可解引用
    if body_hint.get('ptr'): return 'void *'
    return gtype_scalar(name)

def gtype_scalar(name):
    p = name.split('_')[0]
    return {'dword':'int','byte':'unsigned char','word':'unsigned short','qword':'unsigned long long',
            'off':'void *','flt':'float','dbl':'double',
            'xmmword':'struct { unsigned long long a,b; }',
            'ymmword':'struct { unsigned long long a,b,c,d; }'}.get(p, 'unsigned char')

def emit(src_dir, out_dir, binname, strings_txt=None, extra_types=None, extra_globals=None,
         ret_int=None, kr=None, extra_stubs=None):
    os.makedirs(out_dir, exist_ok=True)
    files = sorted(glob.glob(os.path.join(src_dir, '*.c')))
    g, calls, defs, bodies = collect(files)

    # 每个全局的使用形态（是否被下标/解引用/取地址）
    usage = collections.defaultdict(lambda: {'arr':False,'ptr':False,'addr':False})
    for name, body in bodies:
        for m in re.finditer(r'\b(\w+)\s*\[', body): usage[m.group(1)]['arr'] = True
        for m in re.finditer(r'\*\s*(\w+)\b', body):   usage[m.group(1)]['ptr'] = True

    # 字符串初值（若有 _strings.txt）
    sinit = {}
    if strings_txt and os.path.exists(strings_txt):
        for line in open(strings_txt, encoding='utf-8'):
            m = re.match(r'0x([0-9A-Fa-f]+)\s+\S+\s+(.*)$', line.strip())
            if not m: continue
            addr = int(m.group(1), 16); lit = m.group(2)
            try: s = eval(lit)
            except Exception: continue
            if isinstance(s, str):
                esc = s.encode('unicode_escape').decode('ascii').replace('"','\\"')
                sinit['%x' % addr] = esc

    compat = ['/* 自动生成：IDA 伪代码 → C 的类型与内建兼容层 */',
              '#ifndef IDA_COMPAT_H', '#define IDA_COMPAT_H',
              '#include <stdint.h>', '#include <stdbool.h>', '#include <string.h>', '#include <stdlib.h>', '#include <stdio.h>']
    for k, v in IDA_TYPES.items(): compat.append(f'typedef {v} {k};')
    # __intN 用宏而不是 typedef：源码里存在 `unsigned __int8` 组合
    compat += ['#define __int8  char', '#define __int16 short', '#define __int32 int',
               '#define __int64 long long', '#define __uint8  unsigned char',
               '#define __uint16 unsigned short', '#define __uint32 unsigned int',
               '#define __uint64 unsigned long long']
    compat += ['typedef void *PVOID_;', MACROS]
    seen = set(WIN32_TYPES) | set(IDA_TYPES) | {'void','char','short','int','long','float','double'}
    for t in WIN32_TYPES:
        if t in ('void','char','short','int','long','float','double'): continue
        compat.append(f'typedef unsigned int {t};')
    _KW = {'bool','true','false','int','char','long','short','void','float','double','signed','unsigned'}
    for t in (extra_types or []):
        if t in seen or t in _KW: continue
        seen.add(t)
        if re.match(r'^(LP|P)[A-Z]', t) or re.match(r'^H[A-Z]', t):
            compat.append(f'typedef void *{t};')
        else:
            compat.append(f'typedef unsigned int {t};')
    compat += ['#define TRUE 1', '#define FALSE 0', '#endif']
    open(os.path.join(out_dir,'compat.h'),'w').write('\n'.join(compat)+'\n')

    gh = ['/* 自动生成：匿名全局的声明（原 dword_/byte_/asc_ ...） */', '#ifndef IDA_GLOBALS_H', '#define IDA_GLOBALS_H']
    gc = ['#include "compat.h"', '#include "globals.h"']
    for name, cnt in sorted(g.items()):
        p = name.split('_')[0]
        if p in ('asc','a','Str'):
            addr = name.split('_')[-1].lower()
            if addr in sinit:
                gh.append(f'extern const char {name}[];')
                gc.append(f'const char {name}[] = "{sinit[addr]}";')
            else:
                gh.append(f'extern const char {name}[];')
                gc.append(f'const char {name}[64];')
        elif p == 'unk':
            gh.append(f'extern unsigned char {name}[512];')
            gc.append(f'unsigned char {name}[512];')
        else:
            t = gtype(name, usage.get(name))
            if t == 'void *':
                gh.append(f'extern void *{name};'); gc.append(f'void *{name};')
            else:
                gh.append(f'extern {t} {name};'); gc.append(f'{t} {name};')
    _TYPELIKE = re.compile(r'^(LP|P|H)[A-Z]|^[A-Z0-9_]{3,}$')
    for gname in (extra_globals or []):
        if gname in g or gname in defs: continue
        if gname in seen or _TYPELIKE.match(gname): continue   # 类型名不能当变量
        if usage.get(gname,{}).get('arr') or usage.get(gname,{}).get('ptr'):
            gh.append(f'extern void *{gname};'); gc.append(f'void *{gname};')
        else:
            gh.append(f'extern int {gname};'); gc.append(f'int {gname};')
    gh.append('#endif')
    open(os.path.join(out_dir,'globals.h'),'w').write('\n'.join(gh)+'\n')
    open(os.path.join(out_dir,'globals.c'),'w').write('\n'.join(gc)+'\n')

    ret_int = set(ret_int or []); kr = set(kr or [])
    # 原型
    fh = ['/* 自动生成：函数原型 */', '#ifndef IDA_FUNCS_H', '#define IDA_FUNCS_H', '#include "compat.h"']
    for name, sig in defs.items():
        sig = sig.strip()
        if name in kr:
            fh.append(f'int {name}();'); continue
        if name in ret_int:
            sig = re.sub(r'^[A-Za-z_][\w \*]*?(?=\b' + re.escape(name) + r'\s*\()', 'int ', sig)
            if not sig.startswith('int '): sig = 'int ' + re.sub(r'^\S+\s+', '', sig)
        fh.append(sig.rstrip('{').strip() + ';')
    fh.append('#endif')
    open(os.path.join(out_dir,'funcs.h'),'w').write('\n'.join(fh)+'\n')

    # 未定义外部调用 → extern 存根
    keywords = set('''if else while for do return switch case break continue sizeof void char short int long
        float double unsigned signed const struct union enum typedef static extern goto default'''.split())
    stubs = ['/* 自动生成：未定义的调用按 K&R 方式声明，仅保证可编译 */',
             '#ifndef IDA_STUBS_H', '#define IDA_STUBS_H']
    LIBC = set("""strlen strcmp strncmp strcpy strncpy strcat strncat strstr strchr strrchr memcpy
        memmove memset memcmp malloc calloc realloc free printf sprintf snprintf vprintf puts putchar
        getchar fgets fputs fopen fclose fread fwrite fflush qsort bsearch rand srand time exit abort
        atoi atol toupper tolower isspace isdigit isalpha isalnum isupper islower abs labs""".split())
    SKIP_MACRO = {'LODWORD','HIDWORD','BYTEn','WORDn','LOBYTE','HIBYTE','LOWORD','HIWORD',
                  'BYTE1','BYTE2','BYTE3','WORD1','SLODWORD','SHIDWORD','SLOBYTE'}
    for c in sorted(calls):
        if (c in defs or c in keywords or c.startswith('__') or c in IDA_TYPES
                or c in seen or c in LIBC or c in SKIP_MACRO):
            continue
        stubs.append(f'int {c}();')
    for c in sorted(set(extra_stubs or [])):
        if c not in defs and c not in seen:
            stubs.append(f'int {c}();')
    stubs.append('#endif')
    open(os.path.join(out_dir,'stubs.h'),'w').write('\n'.join(stubs)+'\n')

    # 主文件：按地址顺序拼接
    out = ['/* 自动生成：由 IDA Hex-Rays 逐函数伪代码机械还原 —— %s */' % binname,
           '#include "compat.h"', '#include "globals.h"', '#include "funcs.h"', '#include "stubs.h"', '']
    for name, body in sorted(bodies, key=lambda t: t[0]):
        if name in ret_int:
            # 定义前可能有 // 注释行，用 (?m) 且锚定"行首到函数名之前"的返回类型段
            body2 = re.sub(r'(?m)^[A-Za-z_][^;\n{}]*?(?=\b' + re.escape(name) + r'\s*\()',
                           'int ', body, count=1)
            if body2 == body:  # 兜底：直接替换 void/其它返回类型
                body2 = re.sub(r'(?m)^([A-Za-z_][\w \*]*?)\s*\b' + re.escape(name) + r'\s*\(',
                               r'int \g<0>'.replace('int \g<0>', 'int ' + name + '('), body, count=1)
            body = body2
        out.append(f'/* ---- {name} ---- */')
        out.append(body)
        out.append('')
    open(os.path.join(out_dir,'funcs.c'),'w').write('\n'.join(out)+'\n')
    print(f'{binname}: {len(bodies)} 函数(可C化), {len(g)} 全局, {len(defs)} 原型, {len(calls)} 调用名')

if __name__ == '__main__':
    src, out, name = sys.argv[1], sys.argv[2], sys.argv[3]
    st = sys.argv[4] if len(sys.argv) > 4 and sys.argv[4] != '-' else None
    et = []
    eg = []
    if len(sys.argv) > 5 and os.path.exists(sys.argv[5]):
        et = [l.strip() for l in open(sys.argv[5]) if l.strip()]
    if len(sys.argv) > 6 and os.path.exists(sys.argv[6]):
        eg = [l.strip() for l in open(sys.argv[6]) if l.strip()]
    ri = [l.strip() for l in open(os.path.join(out,'ret_int.txt')) if l.strip()] if os.path.exists(os.path.join(out,'ret_int.txt')) else []
    kk = [l.strip() for l in open(os.path.join(out,'kr.txt')) if l.strip()] if os.path.exists(os.path.join(out,'kr.txt')) else []
    es = [l.strip() for l in open(os.path.join(out,'stubs_extra.txt')) if l.strip()] if os.path.exists(os.path.join(out,'stubs_extra.txt')) else []
    emit(src, out, name, st, et, eg, ri, kk, es)
