// lian86.exe @ 0x004099a5  size=34  name=sub_4099A5
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_4099A5(LPCWSTR lpName, LPCWSTR lpValue)
{
  const WCHAR *v2; // eax

  if ( lpName != nullptr )
  {
    v2 = lpValue;
    if ( lpValue == nullptr )
      v2 = (const WCHAR *)&unk_413024;
    SetEnvironmentVariableW(lpName, v2);
  }
}

