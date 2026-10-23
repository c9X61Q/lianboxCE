#!/usr/bin/env python3
"""统计每个函数的编译通过率：把 error 行号映射回函数区间。"""
import re, subprocess, sys, os, collections
CFLAGS=['-fsyntax-only','-std=gnu11','-w','-Wno-int-conversion','-Wno-incompatible-pointer-types',
        '-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast']
d=sys.argv[1]
src=open(os.path.join(d,'funcs.c'),encoding='utf-8',errors='replace').read().splitlines()
funcs=[]; cur=None
for i,l in enumerate(src, start=1):
    m=re.match(r'/\* ---- (\w+) ---- \*/', l)
    if m:
        if cur: funcs.append((cur, start, i-1)); 
        cur, start = m.group(1), i
if cur: funcs.append((cur,start,len(src)))
r=subprocess.run(['gcc']+CFLAGS+['funcs.c','globals.c'],cwd=d,capture_output=True,text=True)
bad=set()
for m in re.finditer(r'funcs\.c:(\d+):\d+: error:', r.stderr):
    ln=int(m.group(1))
    for name,a,b in funcs:
        if a<=ln<=b: bad.add(name); break
total=len(funcs); ok=total-len(bad)
print(f"{os.path.basename(d):16s} 函数 {total:5d}  无错 {ok:5d}  ({ok/total*100:.1f}%)  总错误 {r.stderr.count('error:')}")
