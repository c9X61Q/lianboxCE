# lianboxCE

`lian86` / `Lian-Payload-Flash-Tool` 投递链的**静态逆向工程**结果。

仓库只包含**还原出来的源码、伪代码与文档**，不包含任何原始样本二进制。

> 目的：研究与学习 Android 刷机工具的打包/混淆手法，便于做取证、教学与防护分析。
> 请勿用于任何未经授权的用途。

---

## 这条链是什么

```
Lian-Payload-Flash-Tool.exe            授权/投递器（Nuitka onefile，Python 3.7）
  ├─ 卡密登录 + 校时 + 更新检查 + 公告
  ├─ 下载依赖 payload.exe  →  %WINDIR%\System32 & SysWOW64
  └─ 下载主程序（RAR SFX）
        └─ 解出 lian86.exe + 1.bat
              └─ lian86.exe           自研壳：34 个 RT_RCDATA 资源（RC4 + zlib）
                    └─ bin\ 投放树   box.exe / lian.exe / 10 个 bat / 工具 / 镜像
                          └─ 运行时生成一份 647 KB 混淆 bat（菜单 + 刷机流程）
```

## 关键结论

| 项 | 结论 |
|---|---|
| 外壳算法 | 资源整块 **RC4**（32 字节密钥）+ 16 字节头 + **zlib** |
| RC4 密钥 | `034E320527074386435FEB4BE077281E`（运行期拼装，静态为 0） |
| 容器头 | `+0x00 u64 保留` / `+0x08 u64 解压长度` / `+0x10 zlib 流` |
| API 解析 | 动态 `GetProcAddress`，名字表在 `.rdata`（不是加密串） |
| box.exe | **PyInstaller 6** 打包的 Python 3.7（非 Nuitka），`.pyc` 可完整反编译 |
| 菜单 | **不在任何静态资源里**，由 lian86.exe 运行时生成 647 KB 混淆 bat |
| 混淆结构 | 多层引导：`set '=<160 字符表>` + `%':~N,1%` / `!':~N,1!` 逐字符拼装 |
| 自毁链 | `if !'! neq " ( @echo.>%0 & @shutdown /s /f /t 0 & @exit ) else ( @cls )` |

## 仓库结构

```
docs/          逆向报告（壳结构、菜单脚本、payload 算法、可编译性统计）
src/python/    box.exe 的完整 Python 源码（uncompyle6 还原，375 行）
src/batch/     资源里的 10 个批处理源码（UTF-8；原件 GBK）
src/dotnet/    gap / strtofile / filedialog 的 C# 反编译源码
src/reconstructed/  按反编译重建、可编译并可自检的核心（rc4 / sha1 / unpack）
src/lian86x86/      主程序 352 个函数的 Hex-Rays 伪代码 + 字符串表
src/natives/        5 个原生工具的 3,490 个函数伪代码
runtime/       运行期生成的脚本与菜单文本（recovered_source.bat 可直接阅读）
tools/         还原工具链（伪代码→C、编译修复、cmd 子集解释器）
```

## 复现要点

### 1. 解包（已验证可逐字节复现）

```bash
cd src/reconstructed
gcc -O2 -o unpack unpack.c rc4.c -lz
./unpack <lian86.exe> /tmp/out          # 输出 29 个文件
./unpack --verify <lian86.exe> <参考树>  # 逐字节比对
./unpack --selftest                     # SHA-1 标准向量
```

### 2. 运行期脚本

```bash
python3 tools/cmdsim.py runtime/generated.bat.utf8   # 纯静态，零外部调用
```

### 3. 伪代码 → 可编译工程

```bash
python3 tools/ida2c.py src/lian86x86 build/lian86 lian86 src/lian86x86/_strings.txt
python3 tools/compile_fix.py build/lian86
```

## 还原方法与可信度

| 部分 | 手段 | 可信度 |
|---|---|---|
| Python 源码 | PyInstaller 抽取 `.pyc` → uncompyle6 | 原始源码级 |
| 批处理 | 资源里本就是文本 | 原文 |
| C# | ILSpy 反编译 | 可编译还原 |
| C 伪代码 | IDA Pro 9.4 Hex-Rays | 语义等价，非原始源码 |
| 运行期脚本 | 自写 cmd 子集解释器静态求值 | 语句级，逐层标定验证 |

解包器已用真实样本验证：**29 个文件与运行时产出逐字节一致**。

## 许可

本仓库中**由本项目产出的部分**（工具、文档、重建代码）以 **GPL-3.0** 发布，见 `LICENSE`。

还原出的第三方代码（`box.py`、批处理、C#）版权归原作者；此处仅作为**互操作与安全研究**的
派生作品收录，遵循 GPL-3.0 的相应义务。样本二进制不在本仓库内。
