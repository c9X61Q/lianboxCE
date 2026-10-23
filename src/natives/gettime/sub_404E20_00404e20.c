// gettime.exe @ 0x404e20 size=127

int __cdecl sub_404E20(_DWORD *a1, int a2)
{
  char *v2; // eax
  std::_Locinfo *v3; // eax
  _BYTE v5[52]; // [esp+0h] [ebp-40h] BYREF
  _DWORD *v6; // [esp+34h] [ebp-Ch]
  _DWORD *v7; // [esp+38h] [ebp-8h]
  int v8; // [esp+3Ch] [ebp-4h]

  v8 = 0;
  if ( a1 != nullptr && *a1 == 0 )
  {
    v7 = operator new(0x18u);
    if ( v7 != nullptr )
    {
      v2 = (char *)unknown_libname_23(a2);
      v3 = (std::_Locinfo *)sub_402DF0((int)v5, v2);
      v8 |= 1u;
      v6 = sub_402C60(v7, v3, 0);
    }
    else
    {
      v6 = nullptr;
    }
    *a1 = v6;
    if ( (v8 & 1) != 0 )
    {
      v8 &= ~1u;
      sub_403730((int)v5);
    }
  }
  return 2;
}

