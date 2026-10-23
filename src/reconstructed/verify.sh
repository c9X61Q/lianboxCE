#!/bin/bash
# 用重建出来的解包器复现 lian86.exe 的投放树，并与既有还原结果逐字节比对
set -e
TARGET="${1:?用法: ./verify.sh /path/to/lian86.exe}"
REF="${2:-/home/dwoaj/Documents/lianbox/rea_out/recovered/tree}"
OUT=$(mktemp -d)
gcc -O2 -o /tmp/unpack_rebuild unpack.c rc4.c -lz
/tmp/unpack_rebuild "$TARGET" "$OUT"
echo "--- 比对 ---"
diff -r "$OUT" "$REF" && echo "✔ 全部文件逐字节一致（$(find "$OUT" -type f | wc -l) 个）"
rm -rf "$OUT"
