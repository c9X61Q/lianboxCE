// lian86.exe @ 0x0040ad45  size=128  name=sub_40AD45
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_40AD45(wchar_t *Source)
{
  wchar_t *i; // eax
  int v2; // ecx
  wchar_t Destination[262]; // [esp+0h] [ebp-20Ch] BYREF

  if ( Source == nullptr )
    return false;
  wcsncpy(Destination, Source, 0x104u);
  Destination[260] = 0;
  for ( i = &Destination[wcslen(Destination)]; i > Destination; --i )
  {
    v2 = *(i - 1);
    if ( v2 != 32 && v2 != 92 && v2 != 47 )
      break;
  }
  *i = 0;
  return CreateDirectoryW(Destination, nullptr);
}

