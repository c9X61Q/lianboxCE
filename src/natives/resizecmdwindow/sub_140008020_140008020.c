// resizecmdwindow.exe @ 0x140008020 size=591

char *__fastcall sub_140008020(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  size_t v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  void *v21; // r8

  v9 = (a2 - *a1) / 160;
  v10 = (a1[1] - *a1) / 160;
  if ( v10 == 0x199999999999999LL )
    sub_140008E60();
  v11 = v10 + 1;
  v12 = (a1[2] - *a1) / 160;
  if ( v12 <= 0x199999999999999LL - (v12 >> 1) )
  {
    v15 = v11;
    if ( (v12 >> 1) + v12 >= v11 )
      v15 = (v12 >> 1) + v12;
    if ( v15 > 0x199999999999999LL )
      goto LABEL_24;
    v13 = 160 * v15;
    if ( 160 * v15 < 0x1000 )
    {
      if ( v13 != 0 )
        v17 = operator new(160 * v15);
      else
        v17 = nullptr;
      goto LABEL_14;
    }
    v14 = v13 + 39;
    if ( v13 + 39 < v13 )
LABEL_24:
      sub_140001170();
  }
  else
  {
    v13 = -96;
    v14 = -57;
  }
  v16 = operator new(v14);
  if ( v16 == nullptr )
    goto LABEL_22;
  v17 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v17 - 1) = v16;
LABEL_14:
  sub_140009170(v15, (_DWORD)v17 + 160 * v9, a3, a4, a5, a6);
  v18 = a1[1];
  v19 = (__int64)v17;
  v20 = *a1;
  if ( a2 != v18 )
  {
    sub_1400092A0(v20, a2, v17);
    v18 = a1[1];
    v19 = (__int64)&v17[20 * v9 + 20];
    v20 = a2;
  }
  sub_1400092A0(v20, v18, v19);
  if ( *a1 != 0 )
  {
    sub_1400079C0(*a1, a1[1]);
    v21 = (void *)*a1;
    if ( (unsigned __int64)(160 * ((a1[2] - *a1) / 160)) < 0x1000 )
    {
LABEL_20:
      j_j_free(v21);
      goto LABEL_21;
    }
    if ( (unsigned __int64)v21 - *((_QWORD *)v21 - 1) - 8 <= 0x1F )
    {
      v21 = *((void **)v21 - 1);
      goto LABEL_20;
    }
LABEL_22:
    invalid_parameter_noinfo_noreturn();
  }
LABEL_21:
  *a1 = (__int64)v17;
  a1[1] = (__int64)&v17[20 * v11];
  a1[2] = (__int64)&v17[v13 / 8];
  return (char *)&v17[20 * v9];
}

