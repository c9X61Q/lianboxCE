// resizecmdwindow.exe @ 0x1400012d0 size=513

__int64 __fastcall sub_1400012D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 15;
  *(_BYTE *)a2 = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 24) = 15;
  *(_BYTE *)a3 = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 24) = 15;
  *(_BYTE *)a4 = 0;
  *(_QWORD *)(a1 + 152) = 0;
  v9 = *(_QWORD *)(a5 + 56);
  if ( v9 != 0 )
  {
    if ( v9 == a5 )
    {
      *(_QWORD *)(a1 + 152) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a1 + 96);
      v11 = *(_QWORD *)(a5 + 56);
      if ( v11 == 0 )
        goto LABEL_7;
      LOBYTE(v10) = v11 != a5;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
    }
    else
    {
      *(_QWORD *)(a1 + 152) = v9;
    }
    *(_QWORD *)(a5 + 56) = 0;
  }
LABEL_7:
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 >= 0x10 )
  {
    v13 = *(_QWORD **)a2;
    if ( v12 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v13 - *(v13 - 1) - 8 > 0x1F )
        goto LABEL_25;
      v13 = (_QWORD *)*(v13 - 1);
    }
    j_j_free(v13);
  }
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 15;
  *(_BYTE *)a2 = 0;
  v14 = *(_QWORD *)(a3 + 24);
  if ( v14 >= 0x10 )
  {
    v15 = *(_QWORD **)a3;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v15 - *(v15 - 1) - 8 > 0x1F )
        goto LABEL_25;
      v15 = (_QWORD *)*(v15 - 1);
    }
    j_j_free(v15);
  }
  *(_QWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 24) = 15;
  *(_BYTE *)a3 = 0;
  v16 = *(_QWORD *)(a4 + 24);
  if ( v16 >= 0x10 )
  {
    v17 = *(_QWORD **)a4;
    if ( v16 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v17 - *(v17 - 1) - 8 <= 0x1F )
      {
        v17 = (_QWORD *)*(v17 - 1);
        goto LABEL_21;
      }
LABEL_25:
      invalid_parameter_noinfo_noreturn();
    }
LABEL_21:
    j_j_free(v17);
  }
  *(_QWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 24) = 15;
  *(_BYTE *)a4 = 0;
  v18 = *(_QWORD *)(a5 + 56);
  if ( v18 != 0 )
  {
    LOBYTE(v16) = v18 != a5;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 32LL))(v18, v16);
    *(_QWORD *)(a5 + 56) = 0;
  }
  return a1;
}

