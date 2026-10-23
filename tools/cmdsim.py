#!/usr/bin/env python3
"""cmd 子集解释器 v2（纯静态）。
解析顺序严格分层：① %展开 ② 按未转义&切分 ③ 反转义^ ④ !延迟展开 ⑤ 分派
拼出的命令文本重新走 ①（cmd 的二次解析）。
"""
import re, sys, collections

ENV0 = {
 'COMSPEC': r'C:\windows\system32\cmd.exe',
 'COMMONPROGRAMFILES': r'C:\Program Files\Common Files',
 'PROGRAMFILES': r'C:\Program Files',
 'OS': 'Windows_NT',
 'PATHEXT': '.com;.exe;.bat;.cmd;.vbs;.vbe;.js;.jse;.wsf;.wsh',
 'SYSTEMROOT': r'C:\windows', 'WINDIR': r'C:\windows',
 'TEMP': r'C:\users\dwoaj\AppData\Local\Temp',
 'USERPROFILE': r'C:\users\dwoaj', 'CD': r'C:\l',
}
SUB = re.compile(r':~(-?\d+)(?:,(-?\d+))?$')

class Sim:
    def __init__(self):
        self.vars = {k.upper(): v for k, v in ENV0.items()}
        self.delayed = False
        self.out, self.log, self.files = [], [], collections.defaultdict(str)
        self.steps = 0; self.max = 500000

    # ① % 展开（不看 ^，符合 cmd）
    def pct(self, t):
        if '%' not in t: return t
        o=[]; i=0; N=len(t)
        while i<N:
            c=t[i]
            if c=='%':
                if i+1<N and t[i+1]=='%':
                    o.append('%'); i+=2; continue
                j=t.find('%', i+1)
                if j>i:
                    body=t[i+1:j]
                    name, sep, spec = body.partition(':')
                    if name.isdigit():
                        o.append(self.vars.get('%'+name,'')); i=j+1; continue
                    key=name.upper()
                    if key in self.vars:
                        val=self.vars[key]; extra=':'+spec if sep else ''
                        m=SUB.match(extra) if extra else None
                        if m:
                            a=int(m.group(1)); b=m.group(2)
                            s = val[a:] if a>=0 else (val[len(val)+a:] if len(val)+a>=0 else val)
                            if b is not None:
                                n=int(b); s = s[:n] if n>=0 else s[:n]
                            o.append(s)
                        else:
                            o.append(val)
                        i=j+1; continue
            o.append(c); i+=1
        return ''.join(o)

    # ④ ! 延迟展开
    def bang(self, t):
        if not self.delayed or '!' not in t: return t
        o=[]; i=0; N=len(t)
        while i<N:
            c=t[i]
            if c=='!' and i+1<N:
                j=t.find('!', i+1)
                if j>i:
                    body=t[i+1:j]; name,sep,spec=body.partition(':')
                    key=name.upper()
                    if key in self.vars:
                        val=self.vars[key]; extra=':'+spec if sep else ''
                        m=SUB.match(extra) if extra else None
                        if m:
                            a=int(m.group(1)); b=m.group(2)
                            s=val[a:] if a>=0 else (val[len(val)+a:] if len(val)+a>=0 else val)
                            if b is not None:
                                n=int(b); s=s[:n] if n>=0 else s[:n]
                            o.append(s)
                        else: o.append(val)
                        i=j+1; continue
            o.append(c); i+=1
        return ''.join(o)

    # ③ 反转义
    @staticmethod
    def unesc(t):
        o=[]; i=0
        while i<len(t):
            if t[i]=='^' and i+1<len(t): o.append(t[i+1]); i+=2
            else: o.append(t[i]); i+=1
        return ''.join(o)

    # ② 切分
    @staticmethod
    def split(t):
        parts=[]; cur=[]; i=0; q=False; d=0
        while i<len(t):
            c=t[i]
            if c=='^' and i+1<len(t): cur.append(t[i:i+2]); i+=2; continue
            if c=='"': q=not q; cur.append(c); i+=1; continue
            if not q:
                if c=='(': d+=1
                elif c==')': d=max(0,d-1)
            if c=='&' and not q and d==0:
                if i+1<len(t) and t[i+1]=='&': i+=1
                parts.append(''.join(cur)); cur=[]; i+=1; continue
            cur.append(c); i+=1
        parts.append(''.join(cur))
        return [p for p in parts if p.strip()]

    def redir(self, t):
        i=0
        while i<len(t):
            if t[i]=='^': i+=2; continue
            if t[i]=='>':
                op='>>' if t[i:i+2]=='>>' else '>'
                rest=t[i+len(op):].strip()
                tgt=rest.split()[0] if rest else ''
                return t[:i].rstrip(), op, tgt
            i+=1
        return t, None, None

    def block_end(self, s, i0):
        d=0; i=i0; q=False
        while i<len(s):
            c=s[i]
            if c=='^': i+=2; continue
            if c=='"': q=not q
            elif not q:
                if c=='(': d+=1
                elif c==')':
                    d-=1
                    if d==0: return i
            i+=1
        return -1

    def run(self, text):
        for line in text.splitlines():
            try: self.line(line)
            except RuntimeError: self.log.append('!! step limit'); return

    def line(self, ln):
        ln=ln.rstrip('\r')
        if not ln.strip(): return
        for st in self.split(self.pct(ln)):
            self.stmt(st)

    def stmt(self, st):
        self.steps+=1
        if self.steps>self.max: raise RuntimeError
        s=st.strip()
        if s.startswith('@'): s=s[1:].lstrip()
        if not s: return
        core, op, tgt = self.redir(s)
        core = core.strip()
        head = self.unesc(core.split(' ',1)[0]).lower() if core else ''
        rest = core.split(' ',1)[1] if ' ' in core else ''

        if head=='if':
            self.do_if(rest); return
        if head=='setlocal':
            if 'enabledelayedexpansion' in rest.lower(): self.delayed=True
            return
        if head=='endlocal': self.delayed=False; return
        if head=='set':
            body,_,_ = self.redir(rest)
            body=self.unesc(body)
            if '=' in body:
                n,_,v=body.partition('=')
                n=n.strip().strip('"'); v=self.bang(v)
                self.vars[n.upper()]=v; self.vars[n]=v
            return
        if head=='echo':
            body,_,_ = self.redir(rest)
            txt=self.bang(self.unesc(body))
            if op: self.files[self.unesc(tgt).upper()] += txt+'\n'
            else: self.out.append(txt)
            return
        if head in ('cls','shift','pause','title','chcp'): return
        if head in ('del','erase'): self.log.append('DEL '+self.unesc(rest)[:100]); return
        if head=='shutdown': self.log.append(':: [suppressed] shutdown'); return
        if head in ('exit','goto','call'): return
        # 拼出来的命令：重新解析
        txt=self.bang(self.unesc(core))
        if '%' in txt or '!' in txt:
            for sub in self.split(self.pct(txt)):
                if sub.strip(): self.stmt(sub)
        self.log.append('CMD '+txt[:400])

    def do_if(self, rest):
        m=re.search(r'\(', rest)
        if not m: return
        cond=rest[:m.start()]
        i=self.block_end(rest, m.start())
        if i<0: return
        body=rest[m.start()+1:i]; tail=rest[i+1:].lstrip()
        els=''
        if tail.lower().startswith('else'):
            t2=tail[4:].lstrip()
            if t2.startswith('('):
                j=self.block_end(t2,0)
                if j>0: els=t2[1:j]
        c=self.bang(self.pct(self.unesc(cond))).strip()
        truth=True
        mm=re.match(r'"?([^"]*)"?\s*(neq|equ|==)\s*"?([^"]*)"?\s*$', c, re.I)
        if mm:
            a,o,b=mm.group(1),mm.group(2).lower(),mm.group(3)
            truth = (a!=b) if o=='neq' else (a==b)
        # 自毁守卫：含 shutdown / >%0 的分支永不采纳（静态模拟绝不执行它）
        def destructive(t):
            t=t.lower()
            return ('shutdown' in t) or ('>%0' in t) or ('echo.>%0' in t)
        if destructive(body) and not destructive(els):
            truth = False
        elif destructive(els) and not destructive(body):
            truth = True
        for p in self.split(body if truth else els):
            self.stmt(p)

if __name__=='__main__':
    sim=Sim()
    sim.run(open(sys.argv[1],encoding='utf-8',errors='replace').read())
    body=[l for l in sim.log if l.strip()]
    open('/tmp/v2_script.txt','w',encoding='utf-8').write('\n'.join(body))
    resid=sum(1 for l in body if '%' in l or '^' in l)
    print(f"语句 {len(body)}  残留 {resid} ({resid/max(1,len(body))*100:.1f}%)  echo {len(sim.out)}  虚拟文件 {len(sim.files)}")
