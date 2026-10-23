// resizecmdwindow.exe @ 0x140008ac0 size=323

void __fastcall sub_140008AC0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  void *v9; // rcx

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 >= 0x10 )
  {
    v3 = *(_QWORD **)(a1 + 96);
    if ( v1 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v3 - *(v3 - 1) - 8 > 0x1F )
        goto LABEL_22;
      v3 = (_QWORD *)*(v3 - 1);
    }
    j_j_free(v3);
  }
  *(_QWORD *)(a1 + 120) = 15;
  *(_QWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 96) = 0;
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 >= 0x10 )
  {
    v5 = *(_QWORD **)(a1 + 64);
    if ( v4 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F )
        goto LABEL_22;
      v5 = (_QWORD *)*(v5 - 1);
    }
    j_j_free(v5);
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 15;
  *(_BYTE *)(a1 + 64) = 0;
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 >= 0x10 )
  {
    v7 = *(_QWORD **)(a1 + 32);
    if ( v6 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v7 - *(v7 - 1) - 8 > 0x1F )
        goto LABEL_22;
      v7 = (_QWORD *)*(v7 - 1);
    }
    j_j_free(v7);
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 15;
  *(_BYTE *)(a1 + 32) = 0;
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 >= 0x10 )
  {
    v9 = *(void **)a1;
    if ( v8 + 1 < 0x1000 )
    {
LABEL_20:
      j_j_free(v9);
      goto LABEL_21;
    }
    if ( (unsigned __int64)v9 - *((_QWORD *)v9 - 1) - 8 <= 0x1F )
    {
      v9 = *((void **)v9 - 1);
      goto LABEL_20;
    }
LABEL_22:
    invalid_parameter_noinfo_noreturn();
  }
LABEL_21:
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 15;
  *(_BYTE *)a1 = 0;
}

