// lian86.exe @ 0x0040478d  size=241  name=write_file
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall write_file(wchar_t *String, LPCVOID lpBuffer, __int64 nNumberOfBytesToWrite)
{
  LPVOID lpMem; // [esp+0h] [ebp-1Ch] BYREF
  int v6; // [esp+4h] [ebp-18h]
  __int64 v7; // [esp+8h] [ebp-14h]
  BOOL v8; // [esp+10h] [ebp-Ch]

  v8 = false;
  v7 = 0;
  v6 = 0;
  lpMem = nullptr;
  mutex_enter();
  str_init((int)&lpMem, String);
  if ( dword_4180A4 == 1 || file_exists((wchar_t *)lpMem) == 0 )
  {
    v6 = sub_40B350(-1, (LPCWSTR)lpMem);
    if ( v6 != 0 )
    {
      if ( nNumberOfBytesToWrite > 0 )
        v7 = sub_40B630(v6, lpBuffer, nNumberOfBytesToWrite);
      sub_40B050(v6);
      v8 = v7 == nNumberOfBytesToWrite;
    }
  }
  return sub_40E5F0(lpMem);
}

