// resizecmdwindow.exe @ 0x1400096e0 size=474

_OWORD *__fastcall sub_1400096E0(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // rsi
  int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  size_t v15; // rcx
  size_t v16; // rax
  unsigned __int64 v17; // rdi
  void *v18; // rax
  _OWORD *v19; // rbx
  __int64 v20; // rdx
  _OWORD *v21; // r8
  __int64 v22; // rcx

  v9 = 0x199999999999999LL;
  v10 = a4;
  v11 = (a2 - *a1) / 160;
  v12 = (a1[1] - *a1) / 160;
  if ( v12 == 0x199999999999999LL )
    sub_140008E60();
  v13 = v12 + 1;
  v14 = (a1[2] - *a1) / 160;
  v15 = v14 >> 1;
  if ( v14 <= 0x199999999999999LL - (v14 >> 1) )
  {
    v17 = v13;
    if ( v15 + v14 >= v13 )
      v17 = v15 + v14;
    if ( v17 > 0x199999999999999LL )
      goto LABEL_19;
    v9 = v17;
    v15 = 160 * v17;
    if ( 160 * v17 < 0x1000 )
    {
      if ( v15 != 0 )
        v19 = operator new(v15);
      else
        v19 = nullptr;
      goto LABEL_15;
    }
    v16 = v15 + 39;
    if ( v15 + 39 < v15 )
LABEL_19:
      sub_140001170(v15, v14, 0x6666666666666667LL, a4);
  }
  else
  {
    v16 = -57;
  }
  v18 = operator new(v16);
  if ( v18 == nullptr )
    invalid_parameter_noinfo_noreturn();
  v19 = (_OWORD *)(((unsigned __int64)v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v19 - 1) = v18;
LABEL_15:
  sub_1400098C0(v15, (_DWORD)v19 + 160 * v11, a3, v10, a5, a6, a7);
  v20 = a1[1];
  v21 = v19;
  v22 = *a1;
  if ( a2 != v20 )
  {
    sub_140009540(v22, a2, v19);
    v20 = a1[1];
    v21 = &v19[10 * v11 + 10];
    v22 = a2;
  }
  sub_140009540(v22, v20, v21);
  sub_140008E80(a1, (__int64)v19, v13, v9);
  return &v19[10 * v11];
}

