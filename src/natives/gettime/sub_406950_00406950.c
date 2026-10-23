// gettime.exe @ 0x406950 size=443

int __userpurge sub_406950@<eax>(
        int a1@<ecx>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        std::ios_base *a6,
        char a7,
        double a8)
{
  int v8; // eax
  __int16 v9; // ax
  char *v10; // eax
  int *v11; // eax
  size_t v13; // [esp-8h] [ebp-6Ch]
  const char *v14; // [esp-4h] [ebp-68h]
  int v15; // [esp+0h] [ebp-64h]
  size_t v16; // [esp+8h] [ebp-5Ch]
  int Number; // [esp+18h] [ebp-4Ch] BYREF
  int v18; // [esp+1Ch] [ebp-48h]
  __int64 v19; // [esp+20h] [ebp-44h]
  __int64 v20; // [esp+28h] [ebp-3Ch]
  int v21; // [esp+30h] [ebp-34h]
  int v22; // [esp+34h] [ebp-30h]
  int v23; // [esp+38h] [ebp-2Ch]
  bool v24; // [esp+3Ch] [ebp-28h]
  bool v25; // [esp+3Dh] [ebp-27h]
  bool v26; // [esp+3Eh] [ebp-26h]
  bool v27; // [esp+3Fh] [ebp-25h]
  int v28[6]; // [esp+40h] [ebp-24h] BYREF
  _BYTE v29[8]; // [esp+58h] [ebp-Ch] BYREF

  v21 = a1;
  sub_402BD0((_Cnd_internal_imp_t *)v28);
  v23 = unknown_libname_35(a6) & 0x3000;
  v27 = v23 == 0x2000;
  v24 = v23 == 0x2000;
  v26 = v23 == 12288;
  v25 = v23 == 12288;
  if ( v23 == 12288 )
    v20 = -1;
  else
    v20 = std::ios_base::precision(a6);
  v19 = v20;
  v18 = unknown_libname_2(v20, v23);
  v22 = v18;
  if ( v24 )
  {
    sub_4088E0(a8);
    if ( a2 > 1.0e10 )
    {
      sub_408900(a8, &Number);
      v8 = abs(Number);
      v22 += 30103 * v8 / 100000;
    }
  }
  std::string::resize(v22 + 50, 0);
  v15 = v19;
  v9 = unknown_libname_35(a6);
  v14 = unknown_libname_14(v21, v29, 76, v9);
  v13 = unknown_libname_45(v28);
  v10 = (char *)sub_403DF0(v28, 0);
  v16 = sprintf_s(v10, v13, v14, v15, a8);
  v11 = sub_4063C0(v28);
  sub_4048C0(v21, a3, a4, a5, a6, a7, (const char *)v11, v16);
  sub_403600(v28);
  return a3;
}

