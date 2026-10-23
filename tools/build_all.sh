#!/bin/bash
cd /home/dwoaj/Documents/lianbox/rea_out
report=build/SUMMARY.txt; : > $report
run() {  # $1=src $2=out $3=name $4=strings
  echo "== $3 ==" | tee -a $report
  python3 tools/repair.py "$1" "$2" "$3" "${4:--}" 2>&1 | grep -E '轮|收敛|编译通过' | tail -3 | tee -a $report
  python3 tools/compile_fix.py "$2" 2>&1 | tail -8 | tee -a $report
  echo | tee -a $report
}
run src/lian86x86 build/lian86 lian86 src/lian86x86/_strings.txt
for n in ECHOC numcomp gettime resizecmdwindow busybox; do
  run "src/natives/$n" "build/$n" "$n" -
done
