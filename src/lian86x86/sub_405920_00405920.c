// lian86.exe @ 0x00405920  size=146  name=sub_405920
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405920(_WORD *a1, wchar_t *SubStr, int a3, char a4)
{
  _WORD *v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // ecx
  wchar_t *v8; // eax
  const wchar_t *v10; // [esp-10h] [ebp-10h]

  v4 = a1;
  if ( a1 == nullptr )
    return 0;
  if ( SubStr == nullptr || *a1 == 0 || *SubStr == 0 )
    return 0;
  v5 = a3 - 1;
  if ( a3 - 1 > 0 )
  {
    v6 = 0;
    do
    {
      if ( *v4 == 0 )
        break;
      v6 += 2;
      ++v4;
    }
    while ( v6 >> 1 < v5 );
  }
  v7 = v4 - a1;
  if ( v5 >= 0 )
  {
    if ( v5 > v7 )
      v5 = v7;
  }
  else
  {
    v5 = 0;
  }
  v10 = &a1[v5];
  if ( (a4 & 1) != 0 )
    v8 = (wchar_t *)sub_406670(v10, SubStr);
  else
    v8 = wcsstr(v10, SubStr);
  if ( v8 != nullptr )
    return v8 - a1 + 1;
  else
    return 0;
}

