// resizecmdwindow.exe @ 0x1400041a0 size=618

void __fastcall sub_1400041A0(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdi
  const void *v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  size_t v10; // rbp
  void **v11; // rcx
  char *v12; // rbx
  bool v13; // di
  char *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r14
  const void *v20; // rdx
  _QWORD *v21; // rcx
  size_t v22; // r8
  _QWORD *v23; // rbx
  _QWORD *v24; // rdi
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r14
  const void *v27; // rdx
  _QWORD *v28; // rcx
  size_t v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  void *Buf1[2]; // [rsp+28h] [rbp-40h] BYREF
  size_t Size[6]; // [rsp+38h] [rbp-30h]

  v2 = a2[3];
  v5 = a2;
  if ( v2 >= 0x10 )
    v5 = (const void *)*a2;
  v6 = a2[2];
  if ( v6 == 0 && memcmp(v5, &unk_14000B508, 0) == 0 )
  {
    v7 = sub_140006630(std::cerr, "(build error) long option name cannot be empty");
    std::ostream::operator<<(v7, sub_140006820);
    exit(-1);
  }
  v8 = 2;
  v9 = (unsigned __int64)a2;
  if ( v6 < 2 )
    v8 = v6;
  *(_OWORD *)Buf1 = 0;
  *(_OWORD *)Size = 0;
  if ( v2 >= 0x10 )
    v9 = *a2;
  sub_1400077F0(Buf1, v9, v8);
  v10 = Size[1];
  v11 = Buf1;
  v12 = (char *)Buf1[0];
  if ( Size[1] >= 0x10 )
    v11 = (void **)Buf1[0];
  v13 = Size[0] != 2 || memcmp(v11, "--", 2u) != 0;
  if ( v10 >= 0x10 )
  {
    v14 = v12;
    if ( v10 + 1 >= 0x1000 )
    {
      v12 = *((char **)v12 - 1);
      if ( (unsigned __int64)(v14 - v12 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v12);
  }
  if ( v13 )
  {
    v15 = sub_140006630(std::cerr, "(build error) long option name must be `--` followed by one or more characters");
    std::ostream::operator<<(v15, sub_140006820);
    exit(-1);
  }
  v16 = (_QWORD *)a1[12];
  v17 = (_QWORD *)a1[11];
  if ( v17 != v16 )
  {
    v18 = a2[3];
    v19 = a2[2];
    do
    {
      v20 = a2;
      if ( v18 >= 0x10 )
        v20 = (const void *)*a2;
      v21 = v17 + 4;
      if ( v17[7] >= 0x10u )
        v21 = (_QWORD *)*v21;
      v22 = v17[6];
      if ( v22 == v19 && memcmp(v21, v20, v22) == 0 )
        break;
      v17 += 20;
    }
    while ( v17 != v16 );
    if ( v17 != v16 )
      goto LABEL_43;
  }
  v23 = (_QWORD *)a1[9];
  v24 = (_QWORD *)a1[8];
  if ( v24 != v23 )
  {
    v25 = a2[3];
    v26 = a2[2];
    do
    {
      v27 = a2;
      if ( v25 >= 0x10 )
        v27 = (const void *)*a2;
      v28 = v24 + 4;
      if ( v24[7] >= 0x10u )
        v28 = (_QWORD *)*v28;
      v29 = v24[6];
      if ( v29 == v26 && memcmp(v28, v27, v29) == 0 )
        break;
      v24 += 20;
    }
    while ( v24 != v23 );
    if ( v24 != v23 )
    {
LABEL_43:
      v30 = sub_140006630(std::cerr, "(build error) long option name ");
      v31 = unknown_libname_1(v30, a2);
      v32 = sub_140006630(v31, " already exists");
      std::ostream::operator<<(v32, sub_140006820);
      exit(-1);
    }
  }
}

