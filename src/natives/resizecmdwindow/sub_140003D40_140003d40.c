// resizecmdwindow.exe @ 0x140003d40 size=803

void *__fastcall sub_140003D40(__int64 a1, _QWORD *a2, _QWORD *a3, char *a4, void *a5)
{
  char *v5; // r13
  unsigned __int64 v7; // rsi
  size_t i; // rdi
  __int64 v9; // r8
  char *v10; // r15
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdx
  size_t v13; // r14
  size_t v14; // rax
  __int64 v15; // rbx
  char *v16; // r13
  char *v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rax
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // r14
  void *v25; // rbx
  void *v26; // rcx
  void *result; // rax
  char v28; // [rsp+20h] [rbp-51h]
  void *Block[2]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v30; // [rsp+38h] [rbp-39h]
  char *v31; // [rsp+48h] [rbp-29h]
  char *v32; // [rsp+50h] [rbp-21h]
  void *Src; // [rsp+58h] [rbp-19h]
  void *v34; // [rsp+60h] [rbp-11h]
  __int128 v35; // [rsp+68h] [rbp-9h] BYREF
  __int128 v36; // [rsp+78h] [rbp+7h]
  _QWORD *v37; // [rsp+88h] [rbp+17h]

  v5 = a4;
  v32 = a4;
  Src = a2;
  v37 = a2;
  v34 = a5;
  *(_OWORD *)a2 = 0;
  a2[2] = 0;
  a2[3] = 0;
  a2[2] = 0;
  a2[3] = 15;
  *(_BYTE *)a2 = 0;
  v28 = 1;
  v7 = 0;
  for ( i = *((_QWORD *)a4 + 2); ; v7 = i + v15 )
  {
    v9 = -1;
    v10 = v5;
    if ( *((_QWORD *)v5 + 3) >= 0x10u )
      v10 = *(char **)v5;
    v11 = a3;
    v31 = (char *)a3;
    v12 = a3[3];
    if ( v12 >= 0x10 )
    {
      v11 = (_QWORD *)*a3;
      v31 = (char *)*a3;
    }
    v13 = a3[2];
    if ( i > v13 )
      goto LABEL_14;
    v14 = v13 - i;
    if ( v7 > v13 - i )
      goto LABEL_14;
    if ( i == 0 )
    {
      v15 = v7;
      goto LABEL_15;
    }
    v16 = (char *)v11 + v14;
    v17 = (char *)memchr((char *)v11 + v7, *v10, v14 + 1 - v7);
    if ( v17 == nullptr )
    {
LABEL_13:
      v9 = -1;
      v12 = a3[3];
      v5 = v32;
LABEL_14:
      v15 = -1;
      goto LABEL_15;
    }
    while ( memcmp(v17, v10, i) != 0 )
    {
      v17 = (char *)memchr(v17 + 1, *v10, v16 - v17);
      if ( v17 == nullptr )
        goto LABEL_13;
    }
    v15 = v17 - v31;
    v12 = a3[3];
    v5 = v32;
    v9 = -1;
LABEL_15:
    *(_OWORD *)Block = 0;
    if ( v15 == -1 )
      break;
    v30 = 0u;
    if ( v13 < v7 )
      sub_140006610(v11, v12, -1);
    v18 = v15 - v7;
    v19 = v13 - v7;
    if ( v19 < v15 - v7 )
      v18 = v19;
    v20 = a3;
    if ( v12 >= 0x10 )
      v20 = (_QWORD *)*a3;
    __eh34_enter_wind_state(-1, 0);
    sub_1400077F0(Block, (char *)v20 + v7, v18);
    __eh34_enter_wind_state(0, 1);
    v21 = sub_140005E20(Block, v34);
    __wind
    {
      v35 = *(_OWORD *)v21;
      v36 = *(_OWORD *)(v21 + 16);
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = 15;
      *(_BYTE *)v21 = 0;
      v28 |= 6u;
      sub_140005E20(Src, &v35);
    }
    __unwind
    {
      sub_140005EB0(&v35);
    }
    if ( __eh34_unwind(1) )
      goto unwind_state_1;
    __eh34_exit_wind_state(1, 0);
    if ( __eh34_unwind(0) )
      goto unwind_state_0;
    __eh34_exit_wind_state(0, -1);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v22 = (void *)v35;
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v22 = *(void **)(v35 - 8);
        if ( (unsigned __int64)(v35 - (_QWORD)v22 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v22);
    }
    if ( *((_QWORD *)&v30 + 1) >= 0x10u )
    {
      v23 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v30 + 1) + 1LL) >= 0x1000 )
      {
        v23 = *((void **)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v23 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v23);
    }
    i = *((_QWORD *)v5 + 2);
  }
  v30 = 0;
  if ( v13 < v7 )
  {
    __eh34_enter_wind_state(-1, 0);
    ((void (__noreturn *)(void))sub_140006610)();
  }
  v24 = v13 - v7;
  if ( v24 != -1 )
    v9 = v24;
  if ( v12 >= 0x10 )
    a3 = (_QWORD *)*a3;
  __eh34_enter_wind_state(-1, 0);
  sub_1400077F0(Block, (char *)a3 + v7, v9);
  __eh34_enter_wind_state(0, 1);
  v28 |= 8u;
  v25 = Src;
  sub_140005E20(Src, Block);
  if ( *((_QWORD *)&v30 + 1) >= 0x10u )
  {
    v26 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v30 + 1) + 1LL) >= 0x1000 )
    {
      v26 = *((void **)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v26 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v26);
  }
  result = v25;
  if ( __eh34_unwind(1) )
  {
unwind_state_1:
    sub_140005EB0(Block);
    __eh34_continue_unwinding(1, 0);
  }
  __eh34_exit_wind_state(1, 0);
  if ( __eh34_unwind(0) )
  {
unwind_state_0:
    if ( (v28 & 1) != 0 )
      sub_140005EB0(v37);
    __eh34_propagate_exception_into_caller(0, -1);
  }
  __eh34_exit_wind_state(0, -1);
  return result;
}

