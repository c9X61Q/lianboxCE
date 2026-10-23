# lian86.exe 壳已破 —— 完整解包结果

## 1. 壳结构（IDA Pro 9.4 + Wine 动态验证）

```
lian86.exe (PE32, base 0x400000, .rsrc 12.8MB, 34 个 RCDATA)
  └─ 启动 → 枚举 RT_RCDATA (EnumResourceTypesW→EnumResourceNamesW)
       └─ 每个资源: LoadResource → 整块 RC4 解密 → 16 字节头 + zlib → 解压 → 落盘
```

关键函数（模块地址）：

| 地址 | 作用 |
|---|---|
| `0x401BA0` | 资源遍历入口（EnumResourceTypesW / LoadLibraryExW） |
| `0x402033` | `EnumFunc`：只处理 type=10 (RT_RCDATA) |
| `0x402E03` | 资源名回调 |
| `0x402664` | LoadResource + SizeofResource + 拷贝 |
| `0x4011EF` | **RC4**（KSA + PRGA，key 长度固定 32） |
| `0x40B9C7` | **SHA-1** 压缩函数（`0x5A827999` K0、Ch、ROL5/ROR2） |
| `0x40CCB6` | SHA-1 update（流式） |
| `0x40EE60` | zlib inflate 包装 |
| `0x4026C7` | `StartAddress`：主工作线程（FindResource→解密→解压→写文件→启动） |
| `0x409A1F` | CreateProcessW 拉起子进程 |

## 2. 解密参数（动态断点取得）

- **RC4 key（32 字节 ASCII）**：`034E320527074386435FEB4BE077281E`
- 断点：`winedbg --gdb` → `break *0x401320`（KSA 结束后），读 key 数组
- 另一处 RC4 用**不同** key（`HQRIQPHSPUHUR38TR3Sfif4fi07728Ii`，32 字符），
  只用于 9 字节小串 —— 是干扰项/次要路径，不是资源密钥

### 数据布局（解密后）

```
+0x00  u64  压缩长度/原始长度字段（未参与解压）
+0x08  u64  解压后长度
+0x10  ...  zlib 流（78 9C 开头）
```

Python 复现：

```python
imp = rc4(key, blob)                 # key = b"034E320527074386435FEB4BE077281E"
out = zlib.decompress(imp[16:])      # 完整明文
```

## 3. 解包清单（34 个资源 → 投放树）

清单本身来自资源 `B35A2601…`（UTF-16 "path:type:*size*" 序列）。

| path (投放路径) | type | 解出大小 | 资源名 (RCDATA) | sha256(解出) |
|---|---|---|---|---|
| `bin\?\` | dir | – | – | – |
| `bin\calc.bat` | file | 8042 | `A3B88F03CA4CA948C22A0CB098B6F3F77518EEC2` | `c71625eea9fcdb6e…` |
| `bin\chkdev.bat` | file | 12909 | `69889736386E1D164517AF2EB684B01E708679EC` | `28cc289834e81cee…` |
| `bin\cmd.bat` | file | 2919 | `655E533641EF5FC728044480F32C2DE1790C3670` | `59d4bcfd7c2b14ae…` |
| `bin\conf\?\` | dir | – | – | – |
| `bin\conf\fixed.bat` | file | 21 | `43E7FD8FC079865327523CA98112D79EFB979598` | `aa59a7060a89a7af…` |
| `bin\conf\user.bat` | file | 121 | `4A1469FF7455F329E233C205BD077AF79778C5DA` | `18a0c7b560f7beee…` |
| `bin\framework.bat` | file | 24673 | `0AA580DB768ABA69B6F0BD65B1115056CCC892F3` | `46daedc0ed2801b2…` |
| `bin\input.bat` | file | 2314 | `B864158A38593DABA3916034B344020A4AACAAE5` | `45f2c3a9db5b4b20…` |
| `bin\log.bat` | file | 623 | `0444DC399D093EED0BCB0DF13262879667A2892F` | `12b35e3b6352697b…` |
| `bin\reboot.bat` | file | 7636 | `05CC4C168649F8B4E05038B1D96A8B4AF39605B7` | `771d953c8443354e…` |
| `bin\res\?\` | dir | – | – | – |
| `bin\sel.bat` | file | 4592 | `59CBA561A3B5BBFC9C848E286E0218180198C61D` | `f766c0f970b9430f…` |
| `bin\tmp\?\` | dir | – | – | – |
| `bin\tool\?\` | dir | – | – | – |
| `bin\tool\Android\?\` | dir | – | – | – |
| `bin\tool\Android\common.img` | file | 8192 | `83687E838B9E53CED82227E11D8808DCE78E4328` | `2405f481ea68cd76…` |
| `bin\tool\Android\file.jpg` | file | 429912 | `E67155BC7D60D6B2DF5B55BEC4E000CA0A26D08C` | `aeeeb740168cea74…` |
| `bin\tool\Android\my\?\` | dir | – | – | – |
| `bin\tool\Android\my\my_company.img` | file | 335872 | `C6FEE14A5F108719DA7DCFB18CBB7E8B396ADA9F` | `84f4ca8f46ddb044…` |
| `bin\tool\Android\my\my_preload.img` | file | 2150400 | `68CF3D4A391656C35FF62BA548045E2D70389660` | `a720c55e6a3708f0…` |
| `bin\tool\Android\oneplus.img` | file | 8192 | `83687E838B9E53CED82227E11D8808DCE78E4328` | `2405f481ea68cd76…` |
| `bin\tool\logo.txt` | file | 784 | `B99D52E0C589054C7500B711CDEF8CE3E2F5C13B` | `9892190c7d2b5135…` |
| `bin\tool\Win\?\` | dir | – | – | – |
| `bin\tool\Win\box.exe` | file | 8170591 | `012CC8A83E4FAEFB24BCB5F265188F6F7D7D695F` | `ec06a8939301db03…` |
| `bin\tool\Win\busybox-bfflogviewer.exe` | file | 579072 | `1A3E563B87F21BC807DD79DA0C416221E9A193EB` | `38d74863786cfdf5…` |
| `bin\tool\Win\busybox.exe` | file | 579072 | `1A3E563B87F21BC807DD79DA0C416221E9A193EB` | `38d74863786cfdf5…` |
| `bin\tool\Win\devcon.exe` | file | 76288 | `F18355B57B5383F86AE03D90A5D06BD527BA055D` | `d7a1b51efd2bba2e…` |
| `bin\tool\Win\ECHOC.exe` | file | 26112 | `C90842B5649931B7D89BED72DFFC8DF9C0B8CA46` | `5c1211559dda1059…` |
| `bin\tool\Win\filedialog.exe` | file | 256512 | `A1B794DCD6D53ABC65BFB4407ECF6FE1DD1A9D47` | `b4fce116381a93b1…` |
| `bin\tool\Win\gap.exe` | file | 10240 | `C4AB2718DBDD282FDBB5BEFE00B91AD9471C111F` | `bd03754a034e3367…` |
| `bin\tool\Win\gettime.exe` | file | 230912 | `671AB197839CB4DFE85E77D2A1A1B72D4A2BA14C` | `914777bd87a94009…` |
| `bin\tool\Win\lian.exe` | file | 692736 | `99AACB1953C9F317B2013B7CFFC67085F9BBF951` | `05e711e7570516d0…` |
| `bin\tool\Win\numcomp.exe` | file | 184320 | `A04C1DFFFE3C86A25E4DD31E162FD763757748DD` | `4981cd29c1fba694…` |
| `bin\tool\Win\resizecmdwindow.exe` | file | 63488 | `A38A31A3526821593D76AE6C05B5299DF6B991DE` | `25e3de28ec6767a0…` |
| `bin\tool\Win\stop.vbs` | file | 1664 | `0026C8DB9DA96D51EB800232E4F62F6BECE154B3` | `a5bac39eae5b8818…` |
| `bin\tool\Win\strtofile.exe` | file | 5632 | `1EA4FBCFEDA263E0860CCE6FB5B74025AA8031AB` | `67a2e3eaccc330c2…` |

## 4. 组件身份

| 组件 | 大小 | 身份 |
|---|---|---|
| `bin\tool\Win\box.exe` | 8,170,591 | **super 分区刷写工具**（程序集名 `box`）：**PyInstaller 6** 打包的 Python 3.7 x64（引 python37.dll / libssl-1_1-x64 / charset_normalizer），可反编译出完整源码 |
| `bin\tool\Win\lian.exe` | 692,736 | x64，几乎无明文串（疑似再打包）——刷机执行体 |
| `bin\tool\Win\busybox.exe` / `busybox-bfflogviewer.exe` | 579,072 ×2 | 同一文件双份（busybox 类） |
| `bin\tool\Win\devcon.exe` | 76,288 | 微软 SETUPAPI.DLL 改名（驱动安装） |
| `bin\tool\Win\gap.exe` | 10,240 | C#，"申请管理员权限 by 酷安@某贼" |
| `bin\tool\Win\strtofile.exe` | 5,632 | C#，字符串写文件 |
| `bin\tool\Win\filedialog.exe` | 256,512 | C#，文件选择框 |
| `bin\tool\Win\gettime.exe` | 230,912 | 取时间 |
| `bin\tool\Win\numcomp.exe` | 184,320 | 数值比较 |
| `bin\tool\Win\ECHOC.exe` | 26,112 | 控制台输出 |
| `bin\tool\Win\resizecmdwindow.exe` | 63,488 | 调整控制台窗口 |
| `bin\tool\Win\stop.vbs` | 1,664 | VBS |
| `bin\tool\Android\common.img` / `oneplus.img` | 8,192 ×2 | 小镜像（启动引导类） |
| `bin\tool\Android\my\my_company.img` | 335,872 | 定制镜像 |
| `bin\tool\Android\my\my_preload.img` | 2,150,400 | 预置镜像（大片 0） |
| `bin\tool\Android\file.jpg` | 429,912 | PNG 实际内容（89504E47） |
| `bin\*.bat` | 21–24,673 | calc / chkdev / cmd / framework / input / log / reboot / sel / conf\fixed / conf\user |

## 5. 与先前结论的关系

- `main_downloaded.exe` 的 12.4MB overlay = **RAR5 SFX**（`Rar!`，熵 8.0000），
  解出 `sfx/lian86.exe` + `1.bat`（`reg add HKCU\Console QuickEdit`）—— 二者是同一套件的两层。
- 本报告解除的是 `lian86.exe` 这一层的壳；`box.exe` 的 Python 逻辑尚未展开
  （下一步：按 Lian-Payload-Flash-Tool 的方法抽 `.__main__` 常量池）。

## 6. 产出

```
rea_out/unpacked/
├── box.exe  lian.exe  busybox*.exe  devcon.exe  gap.exe  strtofile.exe
├── filedialog.exe  gettime.exe  numcomp.exe  ECHOC.exe  resizecmdwindow.exe
├── setupapi.dll  image.png  <34 个 .bin（按 RCDATA 名）>
└── UNPACKED.md  本文件
```
