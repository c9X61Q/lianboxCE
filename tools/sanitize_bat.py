#!/usr/bin/env python3
"""把还原出的批处理中的「防篡改陷阱」中和掉，产出可安全阅读/运行的版本。

被中和的三类语句（原始脚本里各出现 44 次）：
  1. @echo.>%0          —— 把自身文件清空（自毁）
  2. @shutdown /s /f /t 0 —— 立即关机
  3. @exit              —— 提前退出（配合上面两条形成"改动即惩罚"）

用法：
    python3 tools/sanitize_bat.py runtime/recovered_source.bat runtime/recovered_source.sanitized.bat

注意：本工具只做文本替换，不做语义验证。净化后的脚本仍可能包含
删除文件（del /q）等正常刷机逻辑，运行前请自行审阅。
"""
import re, sys

RULES = [
    # 自毁：把自身清空。注意 ^ 转义形式也要覆盖。
    (r'@?\s*echo\.\s*>\s*%0',        '@rem [SANITIZED: self-wipe removed]'),
    (r'@?\s*echo\s*>\s*%0',          '@rem [SANITIZED: self-wipe removed]'),
    # 关机
    (r'@?\s*shutdown(?:\.exe)?\s+/s\s+/f\s+/t\s+0', '@rem [SANITIZED: shutdown removed]'),
    (r'@?\s*shutdown(?:\.exe)?\s+/[a-z]\s*',        '@rem [SANITIZED: shutdown removed] '),
    # 配合自毁的强制退出（保留 ) 以维持括号平衡）
    (r'@\s*exit\b',                  '@rem exit'),
    (r'(?<![\w-])exit\s*/b\s*\)',    'rem exit /b )'),
]

def sanitize(text: str) -> tuple[str, dict]:
    stats = {}
    out = text
    for pat, rep in RULES:
        out, n = re.subn(pat, rep, out, flags=re.I)
        if n: stats[pat] = n
    return out, stats

def main():
    if len(sys.argv) != 3:
        print(__doc__); sys.exit(1)
    src, dst = sys.argv[1], sys.argv[2]
    raw = open(src, 'rb').read()
    enc = 'gbk'
    try:
        text = raw.decode('utf-8')
    except UnicodeDecodeError:
        text = raw.decode('gbk', errors='replace')
    clean, stats = sanitize(text)

    banner = (
        "@rem ============================================================\r\n"
        "@rem  已中和防篡改陷阱的版本（由 tools/sanitize_bat.py 生成）\r\n"
        "@rem  原始脚本含：@echo.>%0（自毁）+ shutdown /s /f /t 0（关机）\r\n"
        "@rem  本文件仅用于阅读与调试，仍可能执行刷机/删除类操作，请审阅后再运行\r\n"
        "@rem ============================================================\r\n"
    )
    open(dst, 'w', encoding='utf-8', newline='').write(banner + clean.replace('\n', '\r\n'))
    print(f"写出 {dst}")
    for k, v in stats.items():
        print(f"  中和 {v:3d} 处  {k}")

if __name__ == '__main__':
    main()
