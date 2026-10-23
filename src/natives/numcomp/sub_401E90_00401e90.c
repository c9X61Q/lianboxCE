// numcomp.exe @ 0x401e90 size=100

unsigned int __cdecl sub_401E90(unsigned int a1)
{
  int v2; // [esp+8h] [ebp-4h]

  if ( a1 + 35 < a1 )
    sub_4040E0();
  v2 = unknown_libname_41(a1 + 35);
  if ( v2 == 0 )
    _invalid_parameter_noinfo_noreturn();
  *(_DWORD *)(((v2 + 35) & 0xFFFFFFE0) - 4) = v2;
  return (v2 + 35) & 0xFFFFFFE0;
}

