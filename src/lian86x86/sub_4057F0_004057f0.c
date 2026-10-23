// lian86.exe @ 0x004057f0  size=301  name=sub_4057F0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_4057F0(wchar_t *String1, int a2, wchar_t *String2, int a4)
{
  size_t v4; // ebp
  wchar_t *v5; // esi
  wchar_t *v6; // ecx
  int v7; // edi
  wchar_t *v8; // ebx
  size_t v9; // ebx
  wchar_t v10; // ax
  int v11; // edi
  void *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // esi
  wchar_t *String1a; // [esp+Ch] [ebp+4h]

  v4 = 0;
  if ( a2 < 1 )
    return sub_40E9E0(a4);
  v5 = String1;
  if ( String1 == nullptr )
    v5 = (wchar_t *)&unk_413024;
  v6 = String2;
  if ( String2 == nullptr )
  {
    v6 = (wchar_t *)&unk_413024;
    String2 = (wchar_t *)&unk_413024;
  }
  v7 = 0;
  v8 = v5;
  String1a = v5;
  if ( *v6 == 0 || v6[1] == 0 )
  {
    while ( 1 )
    {
      v10 = *v5;
      if ( *v5 == *v6 || v10 == 0 )
      {
        if ( ++v7 == a2 )
        {
          v4 = v5 - v8;
          goto LABEL_24;
        }
        if ( v10 == 0 )
          goto LABEL_24;
        v8 = v5 + 1;
      }
      ++v5;
    }
  }
  v9 = wcslen(v6);
  while ( 1 )
  {
    while ( wcsncmp(v5, v6, v9) != 0 && *v5 != 0 )
    {
      v6 = String2;
      ++v5;
    }
    if ( ++v7 == a2 )
    {
      v8 = String1a;
      v4 = v5 - String1a;
      goto LABEL_24;
    }
    if ( *v5 == 0 )
      break;
    v6 = String2;
    v5 += v9;
    String1a = v5;
  }
  v8 = String1a;
LABEL_24:
  v11 = sub_40E880(v5);
  if ( v11 != 0 )
  {
    v12 = (void *)sub_40E8D0(a4);
    memmove(v12, v8, 2 * v4);
  }
  v13 = (wchar_t *)sub_40E900(v4, a4);
  v14 = v13;
  if ( v11 == 0 )
    wcsncpy(v13, v8, v4);
  v14[v4] = 0;
  return 0;
}

