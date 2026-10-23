#!/usr/bin/env python3
"""每轮：重新生成 → 编译 → 解析 → 扩充类型/全局清单。干净重生成，避免追加冲突。"""
import re, subprocess, sys, os, collections

GEN = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'ida2c.py')

def build(src, out, name, st, types_f, globs_f):
    subprocess.run([sys.executable, GEN, src, out, name, st or '-', types_f, globs_f],
                   check=True, capture_output=True)

def compile_errs(d):
    r = subprocess.run(['gcc','-fsyntax-only','-std=gnu11','-w',
                        '-Wno-int-conversion','-Wno-incompatible-pointer-types',
                        '-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast',
                        'funcs.c','globals.c'], cwd=d, capture_output=True, text=True)
    return r.stderr

def main(src, out, name, st=None, rounds=6):
    os.makedirs(out, exist_ok=True)
    tf = os.path.join(out, 'extra_types.txt'); gf = os.path.join(out, 'extra_globals.txt')
    open(tf,'a').close(); open(gf,'a').close()
    types = set(l.strip() for l in open(tf) if l.strip())
    globs = set(l.strip() for l in open(gf) if l.strip())
    def load(n):
        f = os.path.join(out, n); return set(l.strip() for l in open(f) if l.strip()) if os.path.exists(f) else set()
    def save(n, st):
        open(os.path.join(out, n), 'w').write('\n'.join(sorted(st)) + '\n')
    ret_int = load('ret_int.txt'); kr = load('kr.txt'); xstub = load('stubs_extra.txt')
    for i in range(1, rounds+1):
        open(tf,'w').write('\n'.join(sorted(types))+'\n')
        open(gf,'w').write('\n'.join(sorted(globs))+'\n')
        build(src, out, name, st, tf, gf)
        err = compile_errs(out); n = err.count('error:')
        newt = (set(re.findall(r"未知的类型名[‘'\u2018](\w+)", err))
                | set(re.findall(r"unknown type name [‘'\u2018](\w+)", err))) - types
        newg = (set(re.findall(r"[‘'\u2018](\w+)[’'\u2019]未声明", err))
                | set(re.findall(r"[‘'\u2018](\w+)[’'\u2019] undeclared", err))) - globs - types
        print(f"轮 {i}: 错误 {n:5d}  新类型 {len(newt):3d}  新全局 {len(newg):3d}")
        if n == 0: print("✔ 编译通过"); return True
        before = (len(ret_int), len(kr), len(xstub))
        # 错误驱动的第二轮修正
        for m in re.finditer(r"隐式声明函数[‘'\u2018](\w+)|implicit declaration of function [‘'\u2018](\w+)", err):
            xstub.add(m.group(1) or m.group(2))
        for m in re.finditer(r"too few arguments to function [‘'\u2018](\w+)|函数[‘'\u2018](\w+)[’'\u2019]的参数太少", err):
            kr.add(m.group(1) or m.group(2))
        # void 值被使用 → 该调用改 int 返回
        for m in re.finditer(r"funcs\.c:(\d+):\d+: error: (?:void 值未如预期地被忽略|void value not ignored)", err):
            ln = int(m.group(1))
            line = open(os.path.join(out,'funcs.c'), encoding='utf-8', errors='replace').read().splitlines()[ln-1]
            mm = re.search(r'=\s*(\w+)\s*\(', line)
            if mm: ret_int.add(mm.group(1))
        save('ret_int.txt', ret_int); save('kr.txt', kr); save('stubs_extra.txt', xstub)
        changed = (len(ret_int), len(kr), len(xstub)) != before
        print('   [debug] ret_int=%d kr=%d stubs=%d changed=%s' % (len(ret_int), len(kr), len(xstub), changed))
        if not newt and not newg and not changed:
            print("无新增修正 → 收敛"); break
        types |= newt; globs |= newg
    err = compile_errs(out)
    cls = collections.Counter(re.sub(r"[‘’'].*", '', e).strip() for e in re.findall(r'error: ([^\n]*)', err))
    print("剩余错误分类:")
    for k,v in cls.most_common(8): print(f"  {v:4d}  {k[:70]}")
    return False

if __name__ == '__main__':
    a = sys.argv[1:]
    sys.exit(0 if main(a[0], a[1], a[2], a[3] if len(a)>3 else None) else 1)
