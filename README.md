# LianboxCE

**LianBox Community Edition**

> [!WARNING]
> **`runtime/` 下的批处理带有防篡改陷阱，请勿直接运行。**
>
> 原始脚本（`recovered_source.bat` / `generated.bat.*`）内含：
> - `@echo.>%0` —— 把自身文件清空（**自毁**）
> - `@shutdown /s /f /t 0` —— **立即关机**
> - `@exit` —— 配合上两条的强制退出
>
> 三者各出现 **44 次**，包在形如 `if !'! neq " ( ...自毁... ) else ( @cls )` 的守卫里：
> 变量被改动、经过杀软改写、或被文本编辑器转换编码，就会判定"被篡改"并触发。
>
> **阅读请用 `runtime/recovered_source.sanitized.bat`**（已中和，见下方教程）。
> 需要运行请在隔离环境，并先屏蔽 `shutdown`。

---

通过针对 lianbox 的逆向，重写。还原了接近可用的伪源码/源码。

所用到的工具包括 **IDA Pro** / **REA**。

尽管名为社区开源版，但逆向的目标直接是 lianbox 的闭源程序，且未经过原作者任何授权。

如果原作者要求下架，请提交 issue / DMCA / DMCA warning —— 虽然提了也不会理你。

---

## 结构如下

```
src/python/         box.exe 的完整 Python 源码（uncompyle6 还原，375 行）
src/batch/          资源里的 10 个批处理源码（UTF-8；原件 GBK）
src/dotnet/         gap / strtofile / filedialog 的 C# 反编译源码
src/reconstructed/  按反编译重建、可编译并可自检的核心（rc4 / sha1 / unpack）
src/lian86x86/      主程序 352 个函数的 Hex-Rays 伪代码 + 字符串表
src/natives/        5 个原生工具的 3,490 个函数伪代码
runtime/            运行期生成的脚本与菜单文本（recovered_source.bat 可直接阅读）
tools/              还原工具链（伪代码→C、编译修复、cmd 子集解释器）
```

---

## ⚠️ 危险语句与中和教程

### 陷阱长什么样

```bat
@set '=">nul
@if !'! neq " (
    @echo.>%0                 & rem ← 把自己清空，文件变 0 字节
    @shutdown /s /f /t 0      & rem ← 立刻关机，未保存的工作全丢
    @exit
) else (
    @cls
)
```

`%0` 是脚本自身路径。这条守卫的本意是"不许改我"：**你改一个字节，它就清空自己并关机。**

### 方法一：用净化版（推荐，零门槛）

仓库里已经给了一份中和过的：

```
runtime/recovered_source.sanitized.bat
```

它是 `tools/sanitize_bat.py` 自动生成的，把上述三类语句替换成 `@rem [SANITIZED: ...]`，
**括号结构保持平衡**，可以直接当普通批处理阅读或调试。

自己重新生成：

```bash
python3 tools/sanitize_bat.py runtime/recovered_source.bat /tmp/safe.bat
# 中和 84 处  @?\s*echo\.\s*>\s*%0
# 中和 84 处  @?\s*shutdown(?:\.exe)?\s+/s\s+/f\s+/t\s+0
# 中和 84 处  @\s*exit
```

### 方法二：手工中和（不信任脚本时）

用编辑器打开，做全局替换（注意保持 `)` 数量不变）：

| 查找 | 替换为 |
|---|---|
| `@echo.>%0` | `@rem` |
| `shutdown /s /f /t 0` | `rem` |
| `@exit)` | `@rem)` |

替换后可用下面一行自查，输出应为 0：

```bash
grep -cE 'echo\.>%0|shutdown[^ ]* /s' file.bat
```

### 方法三：隔离环境里跑（真要动态分析时）

```bash
# 1) 虚拟机 / 容器，无宿主目录映射
# 2) 让 shutdown 无法生效：准备一个同名占位程序放在 PATH 更前面
mkdir -p /tmp/fakebin && printf '#!/bin/sh
echo "[blocked] shutdown $*"
' > /tmp/fakebin/shutdown
chmod +x /tmp/fakebin/shutdown
export PATH=/tmp/fakebin:$PATH
# 3) 把 %0 指向副本，绝不动原件
cp file.bat /tmp/work.bat && cd /tmp && cmd /c work.bat
```

### 还要注意：混淆原件会"重建"陷阱

`generated.bat.raw` / `generated.bat.utf8` 是**未解码的混淆原件**，它们运行时会
现场拼出上面那段自毁代码。也就是说：

- 这三个文件（`generated.bat.raw`、`generated.bat.utf8`、`recovered_source.bat`）
  **都不可直接运行**；
- 只有 `recovered_source.sanitized.bat` 是中和过的。

### 其它仍有破坏力的语句

即便中和了自毁，`recovered_source.bat` 里还有正常刷机流程会执行的操作：

```
del /q ...        93 处   删除镜像/临时文件
taskkill /f /im   4 处    强杀"搞机助手.exe"
fastboot flash … 167 处   真机刷写
```

这些是工具的正常功能，不是陷阱——但**在没有对应设备时运行，同样可能误删本地文件**。
阅读时建议只看，不执行。

---

需要我为你提供更详细的介绍吗？

26.10.24
