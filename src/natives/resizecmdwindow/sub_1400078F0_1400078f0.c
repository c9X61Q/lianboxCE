// resizecmdwindow.exe @ 0x1400078f0 size=133

void __fastcall sub_1400078F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 >= 0x10 )
      {
        v5 = *(_QWORD **)v3;
        if ( v4 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F )
            invalid_parameter_noinfo_noreturn();
          v5 = (_QWORD *)*(v5 - 1);
        }
        j_j_free(v5);
      }
      *(_QWORD *)(v3 + 16) = 0;
      *(_QWORD *)(v3 + 24) = 15;
      *(_BYTE *)v3 = 0;
      v3 += 32;
    }
    while ( v3 != a2 );
  }
}

