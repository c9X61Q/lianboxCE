// resizecmdwindow.exe @ 0x140005eb0 size=95

void __fastcall sub_140005EB0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
  {
    v3 = *(_QWORD **)a1;
    if ( v1 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v3 - *(v3 - 1) - 8 > 0x1F )
        invalid_parameter_noinfo_noreturn();
      v3 = (_QWORD *)*(v3 - 1);
    }
    j_j_free(v3);
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 15;
  *(_BYTE *)a1 = 0;
}

