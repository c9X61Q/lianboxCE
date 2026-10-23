# 全部反编译产物的「可编译化」结果

方法：`tools/ida2c.py`（伪代码→C 工程）+ `tools/repair.py`（编译错误驱动的类型/全局补全）
+ `tools/compile_fix.py`（返回类型/K&R/存根 三类文本修正，带回滚）
+ `tools/endecode.py`（把错误行号映射回函数，算真实通过率）。

## 结果

| 二进制 | 语言 | 函数 | 无错函数 | 通过率 | 残余错误 |
|---|---|---:|---:|---:|---:|
| `lian86.exe` | C | 352 | 298 | **84.7%** | 162 |
| `ECHOC.exe` | C | 1 | 1 | **100%** | 0 |
| `numcomp.exe` | C | 24 | 17 | 70.8% | 15 |
| `gettime.exe` | C++ | 1,188 | 1,022 | **86.0%** | 596 |
| `resizecmdwindow.exe` | C++ | 287 | 183 | 63.8% | 427 |
| `busybox.exe` | C++ | 1,845 | 124 | 6.7% | 1,763 |
| **合计** | | **3,697** | **1,645** | **44.5%** | 2,963 |

## 各工程结构（`build/<名字>/`）

```
compat.h    IDA 类型 + 内建宏 + Win32 typedef（自动补全，含 bool/stdbool）
globals.h/c 130~500 个匿名全局，按使用形态推断标量/指针
funcs.h     函数原型（部分已退化为 K&R）
stubs.h     未定义外部调用（Win32 API/libc）的 K&R 声明
funcs.c     全部函数体，按地址顺序
extra_types.txt / extra_globals.txt   编译驱动发现并固化的补全清单
```

编译检查：

```bash
gcc -fsyntax-only -std=gnu11 -w -Wno-int-conversion -Wno-incompatible-pointer-types \
    funcs.c globals.c
```

## 为什么 busybox 只有 6.7%

`busybox.exe` / `resizecmdwindow.exe` / `gettime.exe` 是 **C++**（MSVC STL）编译的，
伪代码里带 `std::`、`::`、模板实例化名。统计 `::` 出现次数：

| 二进制 | `::` 次数 | 语言判定 |
|---|---:|---|
| `lian86.exe` | 0 | **C** |
| `busybox.exe` | 40 | C++ |
| `resizecmdwindow.exe` | 202 | C++ |
| `gettime.exe` | 934 | C++ |

C 前端无法表达命名空间与模板，`busybox` 的 1,713 条错误里全是
`expected '=', ',', ';', 'asm' or '__attribute__' before ...`——即 C++ 作用域符。
要让它们过编译，需要走 **C++ 重建路径**（类声明 + 命名空间 + 模板存根），
而不是继续在 C 上打补丁。`gettime` 能到 86%，是因为它大部分函数其实是 C 风格的 CRT。

## 残余错误分类（全是语义类，非机械类）

| 类别 | 数量级 | 性质 |
|---|---:|---|
| C++ 作用域/模板 | 1,713 | 语言不匹配，需 C++ 前端 |
| `x->f` 但 x 为整型 | ~24 | 反编译器把指针降级成 int 的**局部变量**，需按使用点改类型 |
| 一元 `*` 作用于 int | ~19 | 同上 |
| 左值/表达式形态异常 | ~27 | `*(_DWORD*)(a+b) = ...` 之类被拆散 |
| 其余零散 | ~60 | 单点问题 |

前 1,713 条是**结构性**的（换前端可解），后 ~130 条是**逐点**的（需人工看一眼）。
