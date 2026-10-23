# Lian-Payload-Flash-Tool 载荷刷写算法 — 完整还原

样本：`dep_payload_x86.exe`（8,909,312 B，sha256 `7a511205…`）
来源：Lian-Box 运行时从 `wy.llua.cn` 下载的依赖包，解压后写入
`%WINDIR%\System32\payload.exe` 与 `%WINDIR%\SysWOW64\payload.exe`。

---

## 0. 这是什么

这是 **Android OTA `payload.bin` 的解析/提取/构建工具**，即 A/B 分区镜像处理引擎。
底层是 Google `update_engine` 的 `update_metadata.proto` 格式。

二进制自证：
- PDB 路径 `D:\source\CSharp\payload_tools\src\payload_tools_aot\bin\Release\net10.0-windows\win-x86\native\payload_tools_aot.pdb`
- 程序名 `payload_tools_aot`，CLI 类 `PayloadConsole`
- 使用 `Google.Protobuf` / `SharpCompress` / `BrotliSharpLib` / `ZstdSharp.Port` / `BsDiff`
- `.NET NativeAOT` 编译（无 CLI 目录，元数据以字符串形式保留）

**边界说明**：本工具处理的是 **payload.bin 镜像**（解析/解压/重建/拆分），
不是通过 USB/EDL 与设备握手的刷写器。设备侧交互在 `lian86.exe` 里，
该文件加壳（`.rsrc` 熵 7.996，37 个 hex 命名 RCDATA），静态无法取出。

---

## 1. payload.bin 文件格式（已验证）

```
┌─────────────────────────────────────────┐
│ 魔数 "CrAU"                4 bytes      │
│ 版本 (uint64 BE)           8 bytes  = 2 │
│ manifest 长度 (uint64 BE)  8 bytes      │
│ metadata 签名长度 (uint32) 4 bytes      │
├─────────────────────────────────────────┤
│ DeltaArchiveManifest (protobuf)         │
├─────────────────────────────────────────┤
│ metadata 签名                            │
├─────────────────────────────────────────┤
│ 各分区的数据块（按 InstallOperation 定位）│
├─────────────────────────────────────────┤
│ 整体签名（signatures_offset 处）         │
└─────────────────────────────────────────┘
```

源码位置：`FirmwareKit.Payload.Reader/Core/PayloadHeader.cs:87-118`
（`PayloadConstants.PayloadMagic` = `"CrAU"`，`BrilloMajorPayloadVersion` = 2）

---

## 2. DeltaArchiveManifest 结构

完整 proto：`FirmwareKit.Payload.Reader/Protos/update_metadata.proto`

```protobuf
message Extent {
  optional uint64 start_block = 1;
  optional uint64 num_blocks  = 2;
  optional HashTreeData hash_tree_data = 3;
}

message PartitionInfo {
  optional uint64 size = 1;
  optional bytes  hash = 2;
}

message InstallOperation {
  enum Type {
    REPLACE = 0;        // 原始数据
    REPLACE_BZ = 1;     // BZip2
    MOVE = 2;
    BSDIFF = 3;
    SOURCE_COPY = 4;
    SOURCE_BSDIFF = 5;
    ZERO = 6;           // 全零填充
    DISCARD = 7;
    REPLACE_XZ = 8;     // XZ/LZMA2
    PUFFDIFF = 9;       // 未实现
    BROTLI_BSDIFF = 10; // Brotli + bsdiff
    ZUCCHINI = 11;
  }
  optional Type   type          = 1;
  optional uint64 data_offset   = 2;
  optional uint64 data_length   = 3;
  repeated Extent src_extents   = 4;
  optional uint64 src_length    = 5;
  repeated Extent dst_extents   = 6;
  optional uint64 dst_length    = 7;
  optional bytes  data_sha256_hash = 8;
  optional bytes  src_sha256_hash  = 9;
}

message PartitionUpdate {
  optional string    partition_name         = 1;
  optional bool      run_postinstall        = 2;
  optional string    postinstall_path       = 3;
  optional string    filesystem_type        = 4;
  optional bytes     new_partition_signature= 5;
  optional PartitionInfo old_partition_info = 6;
  optional PartitionInfo new_partition_info = 7;
  repeated InstallOperation operations      = 8;
  optional Extent    hash_tree_data_extent  = 10;
  optional Extent    hash_tree_extent       = 11;
  optional string    hash_tree_algorithm    = 12;
  optional bytes     hash_tree_salt         = 13;
  optional Extent    fec_data_extent        = 14;
  optional Extent    fec_extent             = 15;
  optional uint32    fec_roots              = 16;
}

message DynamicPartitionGroup {
  optional string name = 1;
  optional uint64 size = 2;
  repeated string partition_names = 3;
}

message DynamicPartitionMetadata {
  repeated DynamicPartitionGroup groups = 1;
  optional bool   snapshot_enabled = 2;
  optional bool   vabc_enabled     = 3;
  optional string vabc_compression_param = 4;
  optional uint32 cow_version      = 5;
  optional VABCFeatureSet vabc_feature_set = 6;
}

message DeltaArchiveManifest {
  repeated InstallOperation install_operations = 1;  // 旧版全量
  repeated InstallOperation kernel_install_operations = 2;
  optional uint64 block_size        = 3;
  optional uint64 signatures_offset = 4;
  optional uint64 signatures_size   = 5;
  repeated PartitionUpdate partitions = 13;
  optional uint32 max_timestamp     = 14;
  optional DynamicPartitionMetadata dynamic_partition_metadata = 15;
  optional bool   partial_update    = 16;
  optional string security_patch_level = 17;
}
```

### 与样本二进制的一致性

从 `dep_payload_x86.exe` 提取的 NativeAOT 反射字符串（地址为 VA）：

| 二进制字符串 | VA | 对应 proto |
|---|---|---|
| `PartitionInfo` | 0x008ca624 | PartitionInfo |
| `PartitionUpdate` | 0x008cac62 | PartitionUpdate |
| `DynamicPartitionGroup` | 0x008cb232 | DynamicPartitionGroup |
| `DynamicPartitionMetadata` | 0x008cb48b | DynamicPartitionMetadata |
| `get_PartitionName`…`set_NewPartitionInfo` | 0x008d6135 | PartitionUpdate 全部 setter/getter |
| `get_Partitions` | 0x008d713e | `repeated PartitionUpdate partitions` |
| `ProcessPartitionMode` | 0x0092cec5 | 分区处理主循环 |
| `GetPartitionCount` / `GetMaxArraysPerPartition` | 0x009184a7 | 并发分区处理 |

抽样核对 `PartitionName` / `RunPostinstall` / `FilesystemType` / `HashTreeSalt` / `FecRoots`
均在二进制常量池中命中 → **schema 与官方 `update_metadata.proto` 完全一致**。

---

## 3. 核心算法：分区提取

```
1. 读 payload 头，校验魔数 "CrAU" 与版本 2
2. 读 manifest 长度 → protobuf 解析 DeltaArchiveManifest
3. 对每个 PartitionUpdate:
     a. 建目标文件，长度 = new_partition_info.size
     b. 遍历 operations:
          REPLACE / REPLACE_BZ / REPLACE_XZ / REPLACE_ZSTD
              → 读 data[data_offset, data_length] → 解压 → 写 dst_extents
          ZERO / DISCARD
              → 目标区间写零
          MOVE
              → 从输出文件自身读 src_extents（带重叠缓冲）→ 写 dst_extents
          SOURCE_COPY
              → 从旧镜像读 src_extents → 写 dst_extents
          SOURCE_BSDIFF / BROTLI_BSDIFF
              → 旧数据 + bsdiff 补丁 → 新数据
          PUFFDIFF
              → 抛 UnsupportedOperation（本项目未实现）
     c. 校验 data_sha256_hash / src_sha256_hash
     d. 校验整分区 hash = new_partition_info.hash
4. 可选：校验整体签名（signatures_offset）
```

源码：
- `Core/PayloadParser.cs` — 头与 manifest 解析
- `Core/PayloadExtractor.cs` — 分区落盘
- `Core/OperationProcessor.cs` — 各 op 类型实现（第 76-520 行）
- `Core/HashVerificationHelper.cs` — SHA256 校验
- `Core/BigEndianReader.cs` — 大端读取（protobuf 内为 BE）

---

## 4. 支持的算法矩阵

| 操作 | 实现 | 依赖 |
|---|---|---|
| REPLACE | ✅ 直写 | — |
| REPLACE_BZ | ✅ BZip2 | SharpCompress |
| REPLACE_XZ | ✅ XZ/LZMA2 | SharpCompress |
| REPLACE_ZSTD | ✅ Zstd | ZstdSharp.Port |
| ZERO / DISCARD | ✅ 填零 | — |
| MOVE | ✅ 带重叠缓冲 | — |
| SOURCE_COPY | ✅ | — |
| SOURCE_BSDIFF | ✅ | BsDiff |
| BROTLI_BSDIFF | ✅ Brotli+bsdiff | BrotliSharpLib |
| PUFFDIFF | ❌ 未实现 | — |
| ZUCCHINI | ❌ 未实现 | — |

---

## 5. 工程结构（51 个源文件，1.3 MB）

```
payload_tools_src/
├── FirmwareKit.Payload.Reader/          ← 核心：解析与提取
│   ├── Core/
│   │   ├── PayloadHeader.cs             payload 头（CrAU + 版本）
│   │   ├── PayloadParser.cs             manifest 解析
│   │   ├── PayloadExtractor.cs          分区提取主流程
│   │   ├── OperationProcessor.cs        ★ 各压缩/补丁算法
│   │   ├── HashVerificationHelper.cs    SHA256 校验
│   │   ├── BigEndianReader.cs           大端读取
│   │   ├── PayloadPropertiesParser.cs    properties 解析
│   │   └── TempFileHelper.cs            临时文件
│   ├── Protos/update_metadata.proto     ★ 格式规范
│   ├── Models/UpdateMetadata.cs         生成的消息类
│   ├── Remote/                          HTTP Range 远程读取
│   └── IO/HttpRangeStream.cs            断点续传
├── FirmwareKit.Payload.Creator/         ← 构建 payload（打包）
│   ├── PayloadBuilder.cs
│   └── XzCompressor.cs
├── FirmwareKit.Payload.Modifier/        ← 修改/拆分/合并
│   ├── PayloadModifier.cs
│   ├── PayloadSplitter.cs
│   └── PayloadMerger.cs
├── FirmwareKit.Payload.Cli/             ← 命令行入口
└── FirmwareKit.Payload.Tests/           ← 单元/集成测试
```

编译：

```bash
cd payload_tools_src
dotnet build -c Release
dotnet run --project FirmwareKit.Payload.Cli -- extract payload.bin boot,system ./out
```

---

## 6. 样本 CLI 用法（从二进制还原）

```
PayloadConsole -p system payload.bin                 # 提取指定分区
PayloadConsole -p boot,system -o ./output payload.bin
PayloadConsole -p boot -f payload.bin                # 完整校验
PayloadConsole -p system --old ./custom_old payload.bin   # 增量
PayloadConsole -p system -t 4 payload.bin            # 4 线程
PayloadConsole -m payload.bin                        # 打印 manifest
PayloadConsole -l http://example.com/payload.bin     # 远程直读
```

---

## 7. 仍未取得的部分

| 项 | 状态 |
|---|---|
| payload.bin 格式与解析算法 | ✅ 完整源码 |
| 压缩/补丁算法实现 | ✅ 完整源码 |
| 构建/拆分/合并 | ✅ 完整源码 |
| 设备侧刷写（USB/EDL/adb 交互） | ❌ 在 `lian86.exe`，加壳 |
| `lian86.exe` 的 37 个加密资源 | ❌ 商业壳保护，静态不可解 |

`lian86.exe` 特征：PE32，`.code` 14,848 B（熵 5.53），`.text` 55,808 B（熵 6.56），
`.rsrc` 12,833,280 B（**熵 7.996**，满值加密）。资源名为 40 位十六进制，
是 Enigma Protector / VMProtect 一类壳的数据块布局。

要处理那部分只有两条路：
1. 动态脱壳（wine 下运行到代码解密后再 dump 内存）
2. 拿到未加壳的原始构建
