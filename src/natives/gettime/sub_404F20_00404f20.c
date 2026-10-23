// gettime.exe @ 0x404f20 size=129

int __cdecl sub_404F20(std::locale::facet **a1, int a2)
{
  char *v2; // eax
  std::_Locinfo *v3; // eax
  _BYTE v5[52]; // [esp+0h] [ebp-40h] BYREF
  std::locale::facet *v6; // [esp+34h] [ebp-Ch]
  std::locale::facet *v7; // [esp+38h] [ebp-8h]
  int v8; // [esp+3Ch] [ebp-4h]

  v8 = 0;
  if ( a1 != nullptr && *a1 == nullptr )
  {
    v7 = (std::locale::facet *)operator new(0x18u);
    if ( v7 != nullptr )
    {
      v2 = (char *)unknown_libname_23(a2);
      v3 = (std::_Locinfo *)sub_402DF0((int)v5, v2);
      v8 |= 1u;
      v6 = sub_402D20(v7, v3, 0, 1);
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
  return 4;
}

