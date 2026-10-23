// lian86.exe @ 0x00408dee  size=57  name=sub_408DEE
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

HRESULT sub_408DEE()
{
  INITCOMMONCONTROLSEX picce; // [esp+0h] [ebp-8h] BYREF

  picce.dwSize = 8;
  picce.dwICC = 2888;
  InitCommonControlsEx(&picce);
  return CoInitialize(nullptr);
}

