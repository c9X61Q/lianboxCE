// resizecmdwindow.exe @ 0x140004410 size=164

void __fastcall sub_140004410(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 != nullptr )
  {
    if ( ((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
    {
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        invalid_parameter_noinfo_noreturn();
      v2 = (_QWORD *)*(v2 - 1);
    }
    j_j_free(v2);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v3 = *(_QWORD ***)(a1 + 8);
  *v3[1] = 0;
  v4 = *v3;
  if ( v4 != nullptr )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      j_j_free(v4);
      v4 = v5;
    }
    while ( v5 != nullptr );
  }
  j_j_free(*(void **)(a1 + 8));
}

