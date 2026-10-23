#!/usr/bin/env python3
"""对已生成的 C 工程做编译错误驱动的原地文本修正，直到稳定。

修正三类可机械化的问题：
  1. void 返回值被使用        → 该函数返回类型改 int（定义与原型同步）
  2. 隐式声明函数             → 补 extern 存根
  3. 参数个数不足             → 原型退化为 K&R 形式 int f();
"""
import re, subprocess, sys, os

CFLAGS = ['-fsyntax-only','-std=gnu11','-w','-Wno-int-conversion',
          '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast']

def cc(d):
    r = subprocess.run(['gcc'] + CFLAGS + ['funcs.c','globals.c'], cwd=d, capture_output=True, text=True)
    return r.stderr

def retype(path, name):
    s = open(path, encoding='utf-8', errors='replace').read()
    n = re.sub(r'(?m)^[A-Za-z_][^;\n{}]*?(?=\b' + re.escape(name) + r'\s*\()', 'int ', s, count=1)
    if n != s:
        open(path,'w',encoding='utf-8').write(n); return True
    return False

def snapshot(d):
    return {f: open(os.path.join(d,f),encoding='utf-8',errors='replace').read()
            for f in ('funcs.c','funcs.h','stubs.h','globals.c','globals.h','compat.h')}

def restore(d, snap):
    for f, t in snap.items():
        open(os.path.join(d,f),'w',encoding='utf-8').write(t)

def main(d, rounds=8):
    best = None
    for i in range(1, rounds+1):
        err = cc(d); n = err.count('error:')
        if best is None or n < best[0]:
            best = (n, snapshot(d))
        elif n > best[0]:
            restore(d, best[1]); print(f"轮 {i}: 错误 {n} 变多 → 回滚到 {best[0]}"); break
        print(f"轮 {i}: 错误 {n}")
        if n == 0: print("✔ 编译通过"); return True
        act = 0
        # 1) void 值被使用
        for m in re.finditer(r"funcs\.c:(\d+):\d+: error: (?:void 值未如预期地被忽略|void value not ignored)", err):
            ln = int(m.group(1))
            lines = open(os.path.join(d,'funcs.c'), encoding='utf-8', errors='replace').read().splitlines()
            if ln-1 < len(lines):
                mm = re.search(r'=\s*(\w+)\s*\(', lines[ln-1])
                if mm and retype(os.path.join(d,'funcs.c'), mm.group(1)) \
                        and retype(os.path.join(d,'funcs.h'), mm.group(1)):
                    act += 1
        # 2) 隐式声明
        stubs = open(os.path.join(d,'stubs.h'), encoding='utf-8').read()
        for m in re.finditer(r"(?:隐式声明函数|implicit declaration of function)\s*[‘'\u2018](\w+)", err):
            name = m.group(1)
            if f'int {name}();' not in stubs:
                stubs = stubs.replace('#endif', f'int {name}();\n#endif'); act += 1
        open(os.path.join(d,'stubs.h'),'w',encoding='utf-8').write(stubs)
        # 3) 参数不足 → K&R 原型
        fh = open(os.path.join(d,'funcs.h'), encoding='utf-8').read()
        for m in re.finditer(r"(?:too few arguments to function|函数)\s*[‘'\u2018](\w+)", err):
            name = m.group(1)
            new, k = re.subn(r'(?m)^[A-Za-z_][^;\n]*?\b' + re.escape(name) + r'\s*\([^;\n]*\);',
                             f'int {name}();', fh, count=1)
            if k:
                fh = new; act += 1
                retype(os.path.join(d,'funcs.c'), name)   # 定义同步改 int
        open(os.path.join(d,'funcs.h'),'w',encoding='utf-8').write(fh)
        if act == 0:
            print("无更多可机械修正项"); break
    err = cc(d)
    import collections
    cls = collections.Counter(re.sub(r"[‘’'].*", '', e).strip() for e in re.findall(r'error: ([^\n]*)', err))
    print("剩余错误:", err.count('error:'))
    for k,v in cls.most_common(6): print(f"  {v:4d}  {k[:66]}")
    return False

if __name__ == '__main__':
    sys.exit(0 if main(sys.argv[1]) else 1)
