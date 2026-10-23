// gettime.exe @ 0x4044e0 size=101

int __cdecl sub_4044E0(_DWORD *a1, _DWORD *a2)
{
  int v3; // [esp+8h] [ebp-8h]
  unsigned int v4; // [esp+Ch] [ebp-4h]

  *a2 += 35;
  v3 = *(_DWORD *)(*a1 - 4);
  v4 = *a1 - v3;
  if ( v4 < 4 || v4 > 0x23 )
    _invalid_parameter_noinfo_noreturn();
  *a1 = v3;
  return 0;
}

