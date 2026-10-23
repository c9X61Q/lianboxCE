# LianboxCE

**LianBox Community Edition**

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

需要我为你提供更详细的介绍吗？

26.10.24
