// gettime.exe @ 0x4048c0 size=1110

int __cdecl sub_4048C0(int a1, int a2, int a3, int a4, std::ios_base *a5, char a6, const char *a7, size_t Size)
{
  std::locale *v8; // eax
  int v9; // eax
  std::locale *v10; // eax
  char v11; // bl
  int *v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int *v17; // eax
  int v18; // eax
  int *v19; // eax
  int v20; // eax
  int *v21; // eax
  int v23; // [esp-4h] [ebp-BCh]
  int v24; // [esp-4h] [ebp-BCh]
  size_t v25; // [esp-4h] [ebp-BCh]
  _BYTE v26[8]; // [esp+4h] [ebp-B4h] BYREF
  _BYTE v27[8]; // [esp+Ch] [ebp-ACh] BYREF
  _BYTE v28[8]; // [esp+14h] [ebp-A4h] BYREF
  _BYTE v29[8]; // [esp+1Ch] [ebp-9Ch] BYREF
  _BYTE v30[8]; // [esp+24h] [ebp-94h] BYREF
  _BYTE v31[8]; // [esp+2Ch] [ebp-8Ch] BYREF
  _DWORD *v32[2]; // [esp+34h] [ebp-84h] BYREF
  _DWORD *v33[2]; // [esp+3Ch] [ebp-7Ch] BYREF
  __int64 v34; // [esp+44h] [ebp-74h]
  size_t v35; // [esp+4Ch] [ebp-6Ch]
  const struct std::locale::facet *v36; // [esp+50h] [ebp-68h]
  size_t v37; // [esp+54h] [ebp-64h]
  char *Control; // [esp+58h] [ebp-60h]
  BOOL v39; // [esp+5Ch] [ebp-5Ch]
  int v40; // [esp+60h] [ebp-58h]
  const struct std::locale::facet *v41; // [esp+64h] [ebp-54h]
  size_t v42; // [esp+68h] [ebp-50h]
  size_t v43; // [esp+6Ch] [ebp-4Ch]
  char v44[4]; // [esp+70h] [ebp-48h] BYREF
  int v45; // [esp+74h] [ebp-44h]
  char *v46; // [esp+78h] [ebp-40h]
  char v47; // [esp+7Fh] [ebp-39h]
  int v48; // [esp+80h] [ebp-38h]
  _BYTE v49[24]; // [esp+84h] [ebp-34h] BYREF
  _BYTE v50[24]; // [esp+9Ch] [ebp-1Ch] BYREF
  int v51; // [esp+C8h] [ebp+10h]
  int v52; // [esp+C8h] [ebp+10h]
  int v53; // [esp+C8h] [ebp+10h]
  int v54; // [esp+CCh] [ebp+14h]
  int v55; // [esp+CCh] [ebp+14h]
  int v56; // [esp+CCh] [ebp+14h]
  size_t Sizea; // [esp+DCh] [ebp+24h]

  v39 = Size != 0 && (*a7 == 43 || *a7 == 45);
  v48 = v39;
  if ( (unknown_libname_35(a5) & 0x3000) == 0x3000 )
  {
    Control = (char *)&unk_4294B0;
    if ( v48 + 2 <= Size && a7[v48] == 48 && (a7[v48 + 1] == 120 || a7[v48 + 1] == 88) )
      v48 += 2;
  }
  else
  {
    Control = (char *)&unk_4294AC;
  }
  v35 = strcspn(a7, Control);
  strcpy(v44, ".");
  v44[0] = *localeconv()->decimal_point;
  v43 = strcspn(a7, v44);
  v8 = (std::locale *)std::ios_base::getloc(a5, v33);
  v36 = sub_402520(v8);
  sub_4038D0(v33);
  sub_402AB0((_Cnd_internal_imp_t *)v50, Size, 0);
  v9 = sub_403DF0(v50, 0);
  sub_4085B0(a7, &a7[Size], v9);
  v10 = (std::locale *)std::ios_base::getloc(a5, v32);
  v41 = sub_4026C0(v10);
  sub_4038D0(v32);
  sub_407370(v49);
  v47 = sub_4082F0(v41);
  if ( v43 != Size )
  {
    v11 = sub_4065A0(v41);
    *(_BYTE *)sub_403DF0(v50, v43) = v11;
  }
  if ( v43 == Size )
    v37 = v35;
  else
    v37 = v43;
  v42 = v37;
  v46 = (char *)sub_403DF0(v49, 0);
  while ( *v46 != 127 && *v46 > 0 && *v46 < v42 - v48 )
  {
    v42 -= *v46;
    sub_407410(v42, 1u, v47);
    if ( v46[1] > 0 )
      ++v46;
  }
  Sizea = unknown_libname_45(v50);
  v34 = std::ios_base::width(a5);
  if ( v34 > 0 && (unsigned int)std::ios_base::width(a5) > Sizea )
    v45 = std::ios_base::width(a5) - Sizea;
  else
    v45 = 0;
  v40 = unknown_libname_35(a5) & 0x1C0;
  if ( v40 == 64 || v40 == 256 )
  {
    v24 = v48;
    if ( v40 == 256 )
    {
      v15 = sub_403DF0(v50, 0);
      v16 = (_DWORD *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v29, a3, a4, v15, v24);
      v17 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Rep(a1, v28, *v16, v16[1], a6, v45);
      v52 = *v17;
      v55 = v17[1];
      v45 = 0;
    }
    else
    {
      v18 = sub_403DF0(v50, 0);
      v19 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v27, a3, a4, v18, v24);
      v52 = *v19;
      v55 = v19[1];
    }
  }
  else
  {
    v12 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Rep(a1, v31, a3, a4, a6, v45);
    v51 = *v12;
    v54 = v12[1];
    v45 = 0;
    v23 = v48;
    v13 = sub_403DF0(v50, 0);
    v14 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v30, v51, v54, v13, v23);
    v52 = *v14;
    v55 = v14[1];
  }
  v25 = Sizea - v48;
  v20 = sub_403DF0(v50, v48);
  v21 = (int *)std::num_put<char,std::ostreambuf_iterator<char>>::_Put(a1, v26, v52, v55, v20, v25);
  v53 = *v21;
  v56 = v21[1];
  std::ios_base::width(a5, 0);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Rep(a1, a2, v53, v56, a6, v45);
  sub_403600(v49);
  sub_403600(v50);
  return a2;
}

