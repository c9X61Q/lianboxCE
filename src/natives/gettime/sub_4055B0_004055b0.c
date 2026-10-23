// gettime.exe @ 0x4055b0 size=937

int __cdecl sub_4055B0(int a1, int a2, int a3, int a4, std::ios_base *a5, char a6, _BYTE *a7, size_t Size)
{
  std::locale *v8; // eax
  int v9; // eax
  std::locale *v10; // eax
  int *v11; // eax
  int v12; // eax
  int *v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  int *v16; // eax
  int v17; // eax
  int *v18; // eax
  int v19; // eax
  int *v20; // eax
  int v22; // [esp-4h] [ebp-A0h]
  int v23; // [esp-4h] [ebp-A0h]
  size_t v24; // [esp-4h] [ebp-A0h]
  _BYTE v25[8]; // [esp+0h] [ebp-9Ch] BYREF
  _BYTE v26[8]; // [esp+8h] [ebp-94h] BYREF
  _BYTE v27[8]; // [esp+10h] [ebp-8Ch] BYREF
  _BYTE v28[8]; // [esp+18h] [ebp-84h] BYREF
  _BYTE v29[8]; // [esp+20h] [ebp-7Ch] BYREF
  _BYTE v30[8]; // [esp+28h] [ebp-74h] BYREF
  _DWORD *v31[2]; // [esp+30h] [ebp-6Ch] BYREF
  _DWORD *v32[2]; // [esp+38h] [ebp-64h] BYREF
  __int64 v33; // [esp+40h] [ebp-5Ch]
  const struct std::locale::facet *v34; // [esp+48h] [ebp-54h]
  const struct std::locale::facet *v35; // [esp+4Ch] [ebp-50h]
  BOOL v36; // [esp+50h] [ebp-4Ch]
  int v37; // [esp+54h] [ebp-48h]
  int v38; // [esp+58h] [ebp-44h]
  char v39; // [esp+5Fh] [ebp-3Dh]
  char *v40; // [esp+60h] [ebp-3Ch]
  int v41; // [esp+64h] [ebp-38h]
  _BYTE v42[24]; // [esp+68h] [ebp-34h] BYREF
  _BYTE v43[24]; // [esp+80h] [ebp-1Ch] BYREF
  int v44; // [esp+ACh] [ebp+10h]
  int v45; // [esp+ACh] [ebp+10h]
  int v46; // [esp+ACh] [ebp+10h]
  int v47; // [esp+B0h] [ebp+14h]
  int v48; // [esp+B0h] [ebp+14h]
  int v49; // [esp+B0h] [ebp+14h]
  size_t Sizea; // [esp+C0h] [ebp+24h]

  v36 = Size != 0 && (*a7 == 43 || *a7 == 45);
  v41 = v36;
  if ( (unknown_libname_35(a5) & 0xE00) == 0x800
    && v41 + 2 <= Size
    && a7[v41] == 48
    && (a7[v41 + 1] == 120 || a7[v41 + 1] == 88) )
  {
    v41 += 2;
  }
  v8 = (std::locale *)std::ios_base::getloc(a5, v32);
  v34 = sub_402520(v8);
  sub_4038D0(v32);
  sub_402AB0((_Cnd_internal_imp_t *)v43, Size, 0);
  v9 = sub_403DF0(v43, 0);
  sub_4085B0(a7, &a7[Size], v9);
  v10 = (std::locale *)std::ios_base::getloc(a5, v31);
  v35 = sub_4026C0(v10);
  sub_4038D0(v31);
  sub_407370(v42);
  v40 = (char *)sub_403DF0(v42, 0);
  if ( *v40 != 127 && *v40 > 0 )
  {
    v39 = sub_4082F0(v35);
    while ( *v40 != 127 && *v40 > 0 && *v40 < Size - v41 )
    {
      Size -= *v40;
      sub_407410(Size, 1u, v39);
      if ( v40[1] > 0 )
        ++v40;
    }
  }
  Sizea = unknown_libname_45(v43);
  v33 = std::ios_base::width(a5);
  if ( v33 > 0 && (unsigned int)std::ios_base::width(a5) > Sizea )
    v38 = std::ios_base::width(a5) - Sizea;
  else
    v38 = 0;
  v37 = unknown_libname_35(a5) & 0x1C0;
  if ( v37 == 64 || v37 == 256 )
  {
    v23 = v41;
    if ( v37 == 256 )
    {
      v14 = sub_403DF0(v43, 0);
      v15 = (_DWORD *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v28, a3, a4, v14, v23);
      v16 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Rep(a1, v27, *v15, v15[1], a6, v38);
      v45 = *v16;
      v48 = v16[1];
      v38 = 0;
    }
    else
    {
      v17 = sub_403DF0(v43, 0);
      v18 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v26, a3, a4, v17, v23);
      v45 = *v18;
      v48 = v18[1];
    }
  }
  else
  {
    v11 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Rep(a1, v30, a3, a4, a6, v38);
    v44 = *v11;
    v47 = v11[1];
    v38 = 0;
    v22 = v41;
    v12 = sub_403DF0(v43, 0);
    v13 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v29, v44, v47, v12, v22);
    v45 = *v13;
    v48 = v13[1];
  }
  v24 = Sizea - v41;
  v19 = sub_403DF0(v43, v41);
  v20 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v25, v45, v48, v19, v24);
  v46 = *v20;
  v49 = v20[1];
  std::ios_base::width(a5, 0);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Rep(a1, a2, v46, v49, a6, v38);
  sub_403600(v42);
  sub_403600(v43);
  return a2;
}

