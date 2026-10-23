// resizecmdwindow.exe @ 0x140008270 size=509

char *__fastcall sub_140008270(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  unsigned __int64 v13; // rcx
  size_t v14; // rcx
  void *v15; // rax
  _QWORD *v16; // rbx
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // r8
  __int64 v22; // rcx
  __int64 v23; // [rsp+80h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v7 = (a2 - *a1) / 160;
  v8 = (a1[1] - *a1) / 160;
  v9 = 0x199999999999999LL;
  if ( v8 == 0x199999999999999LL )
    sub_140008E60();
  v10 = v8 + 1;
  v11 = (a1[2] - *a1) / 160;
  if ( v11 <= 0x199999999999999LL - (v11 >> 1) )
  {
    v13 = v10;
    if ( (v11 >> 1) + v11 >= v10 )
      v13 = (v11 >> 1) + v11;
    if ( v13 > 0x199999999999999LL )
      goto LABEL_21;
    v9 = v13;
    v14 = 160 * v13;
    v23 = v9;
    if ( v14 < 0x1000 )
    {
      if ( v14 != 0 )
      {
        v16 = operator new(v14);
        a4 = v26;
        a3 = v25;
      }
      else
      {
        v16 = nullptr;
      }
      v23 = v9;
      goto LABEL_16;
    }
    v12 = v14 + 39;
    if ( v14 + 39 < v14 )
LABEL_21:
      sub_140001170();
  }
  else
  {
    v23 = 0x199999999999999LL;
    v12 = -57;
  }
  v15 = operator new(v12);
  if ( v15 == nullptr )
    invalid_parameter_noinfo_noreturn();
  v16 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v16 - 1) = v15;
  a4 = v26;
  a3 = v25;
LABEL_16:
  v17 = (char *)&v16[20 * v7];
  try
  {
    sub_140009420(v14, (_DWORD)v17, a3, a4, a5);
    v24 = (__int64)v17;
    v18 = a1[1];
    v19 = *a1;
    v20 = v16;
    if ( a2 != v18 )
    {
      sub_140009540(v19, a2, v16);
      v24 = (__int64)v16;
      v20 = v17 + 160;
      v18 = a1[1];
      v19 = a2;
    }
    sub_140009540(v19, v18, v20);
  }
  catch ( ... )
  {
    sub_140007980(v24, (__int64)(v17 + 160));
    sub_1400065C0(v22, v16, v23);
    throw;
  }
  sub_140008E80(a1, v16, v10, v9);
  return v17;
}

