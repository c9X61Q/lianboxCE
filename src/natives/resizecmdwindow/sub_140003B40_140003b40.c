// resizecmdwindow.exe @ 0x140003b40 size=510

char __fastcall sub_140003B40(__int64 a1, _QWORD *a2, const void **a3)
{
  _QWORD *v4; // rbx
  const void *v5; // rbp
  unsigned __int64 v6; // r14
  _BYTE *v7; // rax
  unsigned __int64 v8; // rsi
  signed __int64 v9; // r8
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  const void *v15; // rdx
  void **v16; // rcx
  char *v17; // rbx
  unsigned __int64 v18; // rsi
  void **v19; // rdx
  char v20; // di
  void *v21; // rcx
  char *v22; // rax
  void *Block[2]; // [rsp+28h] [rbp-70h] BYREF
  size_t v25; // [rsp+38h] [rbp-60h]
  unsigned __int64 v26; // [rsp+40h] [rbp-58h]
  void *Buf1[2]; // [rsp+48h] [rbp-50h] BYREF
  size_t Size; // [rsp+58h] [rbp-40h]
  unsigned __int64 v29; // [rsp+60h] [rbp-38h]

  v4 = a2;
  v5 = a2;
  if ( a2[3] >= 0x10u )
    v5 = (const void *)*a2;
  v6 = a2[2];
  if ( v6 == 0 )
    return 0;
  v7 = memchr(v5, 61, a2[2]);
  if ( v7 == nullptr )
    return 0;
  v8 = v7 - (_BYTE *)v5;
  if ( v7 - (_BYTE *)v5 == -1 )
    return 0;
  *(_OWORD *)Buf1 = 0;
  Size = 0;
  v29 = 0;
  v9 = v7 - (_BYTE *)v5;
  if ( v6 < v8 )
    v9 = v6;
  v10 = v4;
  if ( v4[3] >= 0x10u )
    v10 = (_QWORD *)*v4;
  sub_1400077F0(Buf1, v10, v9);
  __eh34_enter_wind_state(-1, 0);
  v11 = v8 + 1;
  *(_OWORD *)Block = 0;
  v25 = 0;
  v26 = 0;
  v12 = v4[2];
  if ( v12 < v11 )
    sub_140006610();
  v13 = v12 - v11;
  v14 = -1;
  if ( v13 != -1 )
    v14 = v13;
  if ( v4[3] >= 0x10u )
    v4 = (_QWORD *)*v4;
  sub_1400077F0(Block, (char *)v4 + v11, v14);
  v15 = a3;
  if ( (unsigned __int64)a3[3] >= 0x10 )
    v15 = *a3;
  v16 = Buf1;
  v17 = (char *)Buf1[0];
  v18 = v29;
  if ( v29 >= 0x10 )
    v16 = (void **)Buf1[0];
  if ( (const void *)Size == a3[2] && memcmp(v16, v15, Size) == 0 )
  {
    if ( a3 + 12 != (const void **)Block )
    {
      v19 = Block;
      if ( v26 >= 0x10 )
        v19 = (void **)Block[0];
      __wind
      {
        sub_1400062A0(a3 + 12, v19, v25);
      }
      __unwind
      {
        sub_140005EB0(Block);
      }
    }
    if ( __eh34_unwind(0) )
      goto unwind_state_0;
    __eh34_exit_wind_state(0, -1);
    v20 = 1;
  }
  else
  {
    if ( __eh34_unwind(0) )
    {
unwind_state_0:
      sub_140005EB0(Buf1);
      __eh34_propagate_exception_into_caller(0, -1);
    }
    __eh34_exit_wind_state(0, -1);
    v20 = 0;
  }
  if ( v26 >= 0x10 )
  {
    v21 = Block[0];
    if ( v26 + 1 >= 0x1000 )
    {
      v21 = *((void **)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v21);
  }
  if ( v18 >= 0x10 )
  {
    v22 = v17;
    if ( v18 + 1 >= 0x1000 )
    {
      v17 = *((char **)v17 - 1);
      if ( (unsigned __int64)(v22 - v17 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v17);
  }
  return v20;
}

