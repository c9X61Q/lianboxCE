// resizecmdwindow.exe @ 0x1400053c0 size=221

void __fastcall sub_1400053C0(__int64 a1)
{
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rdx
  void *v5; // rcx

  sub_140005550(a1 + 200);
  sub_140005550(a1 + 176);
  sub_140004410(a1 + 112);
  sub_1400056A0(a1 + 88);
  sub_140005770(a1 + 64);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 >= 0x10 )
  {
    v3 = *(_QWORD **)(a1 + 32);
    if ( v2 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v3 - *(v3 - 1) - 8 > 0x1F )
        goto LABEL_12;
      v3 = (_QWORD *)*(v3 - 1);
    }
    j_j_free(v3);
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 15;
  *(_BYTE *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 >= 0x10 )
  {
    v5 = *(void **)a1;
    if ( v4 + 1 < 0x1000 )
    {
LABEL_10:
      j_j_free(v5);
      goto LABEL_11;
    }
    if ( (unsigned __int64)v5 - *((_QWORD *)v5 - 1) - 8 <= 0x1F )
    {
      v5 = *((void **)v5 - 1);
      goto LABEL_10;
    }
LABEL_12:
    invalid_parameter_noinfo_noreturn();
  }
LABEL_11:
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 15;
  *(_BYTE *)a1 = 0;
}

