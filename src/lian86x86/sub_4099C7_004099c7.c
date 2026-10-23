// lian86.exe @ 0x004099c7  size=62  name=sub_4099C7
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

HANDLE __cdecl sub_4099C7(HANDLE *a1)
{
  HANDLE v1; // eax
  HANDLE result; // eax
  HANDLE v3; // [esp-18h] [ebp-20h]
  HANDLE CurrentProcess; // [esp-14h] [ebp-1Ch]
  HANDLE TargetHandle; // [esp+4h] [ebp-4h] BYREF

  CurrentProcess = GetCurrentProcess();
  v3 = *a1;
  v1 = GetCurrentProcess();
  result = (HANDLE)DuplicateHandle(v1, v3, CurrentProcess, &TargetHandle, 0, false, 2u);
  if ( result != nullptr )
  {
    CloseHandle(*a1);
    result = TargetHandle;
    *a1 = TargetHandle;
  }
  return result;
}

