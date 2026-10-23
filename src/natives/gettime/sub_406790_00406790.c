// gettime.exe @ 0x406790 size=443

int __thiscall sub_406790(void *this, int a2, int a3, int a4, std::ios_base *a5, char a6, double X)
{
  int v7; // eax
  __int16 v8; // ax
  char *v9; // eax
  int *v10; // eax
  size_t v12; // [esp-8h] [ebp-6Ch]
  const char *v13; // [esp-4h] [ebp-68h]
  int v14; // [esp+0h] [ebp-64h]
  size_t X_4; // [esp+8h] [ebp-5Ch]
  int Y; // [esp+18h] [ebp-4Ch] BYREF
  int v17; // [esp+1Ch] [ebp-48h]
  __int64 v18; // [esp+20h] [ebp-44h]
  __int64 v19; // [esp+28h] [ebp-3Ch]
  int v20; // [esp+30h] [ebp-34h]
  int v21; // [esp+34h] [ebp-30h]
  int v22; // [esp+38h] [ebp-2Ch]
  bool v23; // [esp+3Ch] [ebp-28h]
  bool v24; // [esp+3Dh] [ebp-27h]
  bool v25; // [esp+3Eh] [ebp-26h]
  bool v26; // [esp+3Fh] [ebp-25h]
  int v27[6]; // [esp+40h] [ebp-24h] BYREF
  _BYTE v28[8]; // [esp+58h] [ebp-Ch] BYREF

  v20 = (int)this;
  sub_402BD0((_Cnd_internal_imp_t *)v27);
  v22 = unknown_libname_35(a5) & 0x3000;
  v26 = v22 == 0x2000;
  v23 = v22 == 0x2000;
  v25 = v22 == 12288;
  v24 = v22 == 12288;
  if ( v22 == 12288 )
    v19 = -1;
  else
    v19 = std::ios_base::precision(a5);
  v18 = v19;
  v17 = unknown_libname_2(v19, v22);
  v21 = v17;
  if ( v23 && fabs(X) > 1.0e10 )
  {
    frexp(X, &Y);
    v7 = abs(Y);
    v21 += 30103 * v7 / 100000;
  }
  std::string::resize(v21 + 50, 0);
  v14 = v18;
  v8 = unknown_libname_35(a5);
  v13 = unknown_libname_14(v20, v28, 0, v8);
  v12 = unknown_libname_45(v27);
  v9 = (char *)sub_403DF0(v27, 0);
  X_4 = sprintf_s(v9, v12, v13, v14, X);
  v10 = sub_4063C0(v27);
  sub_4048C0(v20, a2, a3, a4, a5, a6, (const char *)v10, X_4);
  sub_403600(v27);
  return a2;
}

