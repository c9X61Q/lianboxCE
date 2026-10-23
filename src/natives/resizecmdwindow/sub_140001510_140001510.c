// resizecmdwindow.exe @ 0x140001510 size=670

__int64 __fastcall sub_140001510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  void *v19; // rcx

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
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a5 + 16) = 0;
  *(_QWORD *)(a5 + 24) = 15;
  *(_BYTE *)a5 = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 128) = *(_OWORD *)a6;
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a6 + 16);
  *(_QWORD *)(a6 + 16) = 0;
  *(_QWORD *)(a6 + 24) = 15;
  *(_BYTE *)a6 = 0;
  v10 = *(_QWORD *)(a2 + 24);
  if ( v10 >= 0x10 )
  {
    v11 = *(_QWORD **)a2;
    if ( v10 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v11 - *(v11 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v11 = (_QWORD *)*(v11 - 1);
    }
    j_j_free(v11);
  }
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 15;
  *(_BYTE *)a2 = 0;
  v12 = *(_QWORD *)(a3 + 24);
  if ( v12 >= 0x10 )
  {
    v13 = *(_QWORD **)a3;
    if ( v12 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v13 - *(v13 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v13 = (_QWORD *)*(v13 - 1);
    }
    j_j_free(v13);
  }
  *(_QWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 24) = 15;
  *(_BYTE *)a3 = 0;
  v14 = *(_QWORD *)(a4 + 24);
  if ( v14 >= 0x10 )
  {
    v15 = *(_QWORD **)a4;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v15 - *(v15 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v15 = (_QWORD *)*(v15 - 1);
    }
    j_j_free(v15);
  }
  *(_QWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 24) = 15;
  *(_BYTE *)a4 = 0;
  v16 = *(_QWORD *)(a5 + 24);
  if ( v16 >= 0x10 )
  {
    v17 = *(_QWORD **)a5;
    if ( v16 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v17 - *(v17 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v17 = (_QWORD *)*(v17 - 1);
    }
    j_j_free(v17);
  }
  *(_QWORD *)(a5 + 16) = 0;
  *(_QWORD *)(a5 + 24) = 15;
  *(_BYTE *)a5 = 0;
  v18 = *(_QWORD *)(a6 + 24);
  if ( v18 >= 0x10 )
  {
    v19 = *(void **)a6;
    if ( v18 + 1 < 0x1000 )
    {
LABEL_25:
      j_j_free(v19);
      goto LABEL_26;
    }
    if ( (unsigned __int64)v19 - *((_QWORD *)v19 - 1) - 8 <= 0x1F )
    {
      v19 = *((void **)v19 - 1);
      goto LABEL_25;
    }
LABEL_27:
    invalid_parameter_noinfo_noreturn();
  }
LABEL_26:
  *(_QWORD *)(a6 + 16) = 0;
  *(_QWORD *)(a6 + 24) = 15;
  *(_BYTE *)a6 = 0;
  return a1;
}

