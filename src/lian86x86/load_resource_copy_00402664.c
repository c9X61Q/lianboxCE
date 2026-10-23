// lian86.exe @ 0x00402664  size=99  name=load_resource_copy
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LPVOID __stdcall load_resource_copy(HMODULE hModule, HRSRC hResInfo)
{
  HGLOBAL hResData; // [esp+0h] [ebp-8h]
  LPVOID v4; // [esp+4h] [ebp-4h]

  mutex_enter();
  hResData = LoadResource(hModule, hResInfo);
  nNumberOfBytesToWrite = SizeofResource(hModule, hResInfo);
  v4 = xmalloc(nNumberOfBytesToWrite);
  xmemcpy(hResData, v4, nNumberOfBytesToWrite);
  FreeResource(hResData);
  return v4;
}

