// gettime.exe @ 0x406ca0 size=472

_DWORD *__thiscall sub_406CA0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        std::ios_base *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  std::locale *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int *v13; // eax
  int *v14; // eax
  int *v15; // eax
  int v16; // [esp-4h] [ebp-80h]
  int v17; // [esp+4h] [ebp-78h] BYREF
  int v18; // [esp+Ch] [ebp-70h] BYREF
  _DWORD *v19[2]; // [esp+14h] [ebp-68h] BYREF
  __int64 v20; // [esp+1Ch] [ebp-60h]
  const struct std::locale::facet *v21; // [esp+24h] [ebp-58h]
  int v22; // [esp+28h] [ebp-54h]
  void *v23; // [esp+2Ch] [ebp-50h]
  _BYTE v24[24]; // [esp+30h] [ebp-4Ch] BYREF
  _BYTE v25[24]; // [esp+48h] [ebp-34h] BYREF
  int v26[6]; // [esp+60h] [ebp-1Ch] BYREF
  int v27; // [esp+88h] [ebp+Ch]
  int v28; // [esp+8Ch] [ebp+10h]

  v23 = this;
  if ( (unknown_libname_35(a5) & 0x4000) != 0 )
  {
    v8 = (std::locale *)std::ios_base::getloc(a5, v19);
    v21 = sub_4026C0(v8);
    sub_4038D0(v19);
    sub_402BD0((_Cnd_internal_imp_t *)v26);
    if ( a7 != 0 )
    {
      v9 = sub_4083A0(v25);
      sub_406230(v26, v9);
      sub_403600(v25);
    }
    else
    {
      v10 = sub_4071B0(v24);
      sub_406230(v26, v10);
      sub_403600(v24);
    }
    v20 = std::ios_base::width(a5);
    if ( v20 > 0 && (v11 = std::ios_base::width(a5)) > (unsigned int)unknown_libname_45(v26) )
    {
      v12 = std::ios_base::width(a5);
      v22 = v12 - unknown_libname_45(v26);
    }
    else
    {
      v22 = 0;
    }
    if ( (unknown_libname_35(a5) & 0x1C0) != 0x40 )
    {
      v13 = std::num_put<char,std::ostreambuf_iterator<char>>::_Rep((int)v23, &v18, a3, a4, a6, v22);
      a3 = *v13;
      a4 = v13[1];
      v22 = 0;
    }
    v16 = unknown_libname_45(v26);
    v14 = sub_4063C0(v26);
    v15 = std::num_put<char,std::ostreambuf_iterator<char>>::_Put((int)v23, &v17, a3, a4, (char *)v14, v16);
    v27 = *v15;
    v28 = v15[1];
    std::ios_base::width(a5, 0);
    std::num_put<char,std::ostreambuf_iterator<char>>::_Rep((int)v23, a2, v27, v28, a6, v22);
    sub_403600(v26);
    return a2;
  }
  else
  {
    (*(void (__thiscall **)(void *, _DWORD *, int, int, std::ios_base *, _DWORD, _DWORD))(*(_DWORD *)v23 + 36))(
      v23,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
    return a2;
  }
}

