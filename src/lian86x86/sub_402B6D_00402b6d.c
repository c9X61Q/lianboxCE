// lian86.exe @ 0x00402b6d  size=57  name=sub_402B6D
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL sub_402B6D()
{
  struct _SYSTEM_INFO SystemInfo; // [esp+0h] [ebp-28h] BYREF

  mutex_enter();
  GetNativeSystemInfo(&SystemInfo);
  return SystemInfo.wProcessorArchitecture != 0;
}

