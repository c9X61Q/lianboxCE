// resizecmdwindow.exe @ 0x140008c10 size=413

void __fastcall sub_140008C10(__int64 a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  void *v11; // rcx

  v1 = *(_QWORD *)(a1 + 152);
  if ( v1 >= 0x10 )
  {
    v3 = *(_QWORD **)(a1 + 128);
    if ( v1 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v3 - *(v3 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v3 = (_QWORD *)*(v3 - 1);
    }
    j_j_free(v3);
  }
  *(_QWORD *)(a1 + 152) = 15;
  *(_QWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 >= 0x10 )
  {
    v5 = *(_QWORD **)(a1 + 96);
    if ( v4 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v5 = (_QWORD *)*(v5 - 1);
    }
    j_j_free(v5);
  }
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 15;
  *(_BYTE *)(a1 + 96) = 0;
  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 >= 0x10 )
  {
    v7 = *(_QWORD **)(a1 + 64);
    if ( v6 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v7 - *(v7 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v7 = (_QWORD *)*(v7 - 1);
    }
    j_j_free(v7);
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 15;
  *(_BYTE *)(a1 + 64) = 0;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 >= 0x10 )
  {
    v9 = *(_QWORD **)(a1 + 32);
    if ( v8 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v9 - *(v9 - 1) - 8 > 0x1F )
        goto LABEL_27;
      v9 = (_QWORD *)*(v9 - 1);
    }
    j_j_free(v9);
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 15;
  *(_BYTE *)(a1 + 32) = 0;
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 >= 0x10 )
  {
    v11 = *(void **)a1;
    if ( v10 + 1 < 0x1000 )
    {
LABEL_25:
      j_j_free(v11);
      goto LABEL_26;
    }
    if ( (unsigned __int64)v11 - *((_QWORD *)v11 - 1) - 8 <= 0x1F )
    {
      v11 = *((void **)v11 - 1);
      goto LABEL_25;
    }
LABEL_27:
    invalid_parameter_noinfo_noreturn();
  }
LABEL_26:
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 15;
  *(_BYTE *)a1 = 0;
}

