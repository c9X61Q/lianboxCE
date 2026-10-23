// lian86.exe @ 0x0040d700  size=119  name=sub_40D700
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40D700(LPCWCH lpWideCharStr, int a2, int a3, int a4)
{
  const WCHAR *v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  char *v8; // ebx
  int result; // eax

  v4 = lpWideCharStr;
  v5 = 0;
  v6 = sub_40D7F0(a2);
  v7 = v6;
  if ( v6 != 0 )
  {
    if ( lpWideCharStr == nullptr )
      v4 = (const WCHAR *)&unk_413024;
    v5 = (*(int (__stdcall **)(int, int))(v6 + 4))(a3, 1);
    if ( v5 != 0 )
    {
      v8 = (char *)sub_412840(v4);
      (*(void (__stdcall **)(int, char *, unsigned int))(v7 + 8))(v5, v8, strlen(v8));
      (*(void (__stdcall **)(int))(v7 + 12))(v5);
      sub_412830(v8);
    }
  }
  result = sub_40D8A0(v5, a4);
  if ( v5 != 0 )
    return (*(int (__stdcall **)(int))(v7 + 16))(v5);
  return result;
}

