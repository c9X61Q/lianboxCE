// resizecmdwindow.exe @ 0x140006b50 size=770

__int64 __fastcall sub_140006B50(__int64 a1, const void **a2, size_t a3)
{
  size_t *v4; // rsi
  size_t *v5; // r14
  size_t *v6; // rbx
  unsigned __int64 v7; // r15
  const void *v8; // r12
  const void *v9; // rdx
  const void *v10; // rcx
  size_t *v11; // r15
  unsigned __int64 v12; // r15
  const void *v13; // r12
  const void *v14; // rdx
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rax
  void **v18; // rdx
  char *v19; // rdi
  unsigned __int64 v20; // r14
  const void *v21; // rcx
  size_t v22; // r8
  bool v23; // si
  char *v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 v33; // r8
  __int64 *v34; // rax
  unsigned __int8 v35; // bl
  void *Buf2[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v38; // [rsp+30h] [rbp-D0h]
  char v39[8]; // [rsp+40h] [rbp-C0h] BYREF
  size_t *v40; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v41[30]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(size_t **)(a1 + 96);
  v5 = *(size_t **)(a1 + 88);
  v6 = v5;
  if ( v5 != v4 )
  {
    v7 = (unsigned __int64)a2[3];
    v8 = a2[2];
    do
    {
      v9 = a2;
      if ( v7 >= 0x10 )
        v9 = *a2;
      v10 = v6;
      if ( v6[3] >= 0x10 )
        v10 = (const void *)*v6;
      a3 = v6[2];
      if ( (const void *)a3 == v8 && memcmp(v10, v9, a3) == 0 )
        break;
      v6 += 20;
    }
    while ( v6 != v4 );
  }
  v40 = v6;
  v11 = v6;
  if ( v6 == v4 )
  {
    v6 = v5;
    if ( v5 != v4 )
    {
      v12 = (unsigned __int64)a2[3];
      v13 = a2[2];
      do
      {
        v14 = a2;
        if ( v12 >= 0x10 )
          v14 = *a2;
        v15 = v6 + 4;
        if ( v6[7] >= 0x10 )
          v15 = (_QWORD *)*v15;
        a3 = v6[6];
        if ( (const void *)a3 == v13 && memcmp(v15, v14, a3) == 0 )
          break;
        v6 += 20;
      }
      while ( v6 != v4 );
    }
    v40 = v6;
    v11 = v6;
    if ( v6 == v4 )
    {
      v16 = sub_140006630(std::cerr, (__int64)"(get error) option not found: ", a3);
      v17 = unknown_libname_1((__int64)v16, a2);
      std::ostream::operator<<(v17, sub_140006820);
      exit(-1);
    }
  }
  *(_OWORD *)Buf2 = 0;
  v38 = 0;
  sub_1400077F0(Buf2, "bool", 4);
  v18 = Buf2;
  v19 = (char *)Buf2[0];
  v20 = *((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v38 + 1) >= 0x10u )
    v18 = (void **)Buf2[0];
  v21 = v11 + 12;
  if ( v11[15] >= 0x10 )
    v21 = (const void *)v11[12];
  v22 = v11[14];
  v23 = v22 != (_QWORD)v38 || memcmp(v21, v18, v22) != 0;
  if ( v20 >= 0x10 )
  {
    v24 = v19;
    if ( v20 + 1 >= 0x1000 )
    {
      v19 = *((char **)v19 - 1);
      if ( (unsigned __int64)(v24 - v19 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v19);
  }
  if ( v23 )
  {
    v25 = (_QWORD *)sub_140001250((__int64)Buf2);
    __wind
    {
      v26 = sub_1400054A0((__int64)&v40);
      v28 = sub_140006630(std::cerr, (__int64)"(get error) option type mismatch: set '", v27);
      v29 = (__int64 *)unknown_libname_1((__int64)v28, (_QWORD *)(v26 + 96));
      v31 = sub_140006630(v29, (__int64)"' but you try get with '", v30);
      v32 = (__int64 *)unknown_libname_1((__int64)v31, v25);
      v34 = sub_140006630(v32, (__int64)"'", v33);
      std::ostream::operator<<(v34, sub_140006820);
    }
    __unwind
    {
      sub_140005EB0((__int64)Buf2);
    }
    sub_140005EB0((__int64)Buf2);
    exit(-1);
  }
  memset(v41, 0, sizeof(v41));
  sub_140008F60(v41, v6 + 16);
  __wind
  {
    std::istream::operator>>(v41, v39);
    v35 = v39[0];
  }
  __unwind
  {
    sub_1400061A0((__int64)v41);
  }
  *(_QWORD *)((char *)v41 + *(int *)(v41[0] + 4LL)) = &std::istringstream::`vftable';
  *(_DWORD *)((char *)&v40 + *(int *)(v41[0] + 4LL) + 4) = *(_DWORD *)(v41[0] + 4LL) - 144;
  sub_140005D60((__int64)&v41[2]);
  std::istream::~istream<char,std::char_traits<char>>(&v41[3]);
  std::ios::~ios<char,std::char_traits<char>>(&v41[18]);
  return v35;
}

