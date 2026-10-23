// resizecmdwindow.exe @ 0x1400079c0 size=341

void __fastcall sub_1400079C0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx

  if ( a1 != a2 )
  {
    v2 = (_QWORD *)a2;
    v3 = (_QWORD *)(a1 + 152);
    do
    {
      v4 = (_QWORD *)*v3;
      if ( *v3 != 0 )
      {
        LOBYTE(a2) = v4 != v3 - 7;
        (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v4 + 32LL))(v4, a2);
        *v3 = 0;
      }
      v5 = *(v3 - 8);
      if ( v5 >= 0x10 )
      {
        v6 = (_QWORD *)*(v3 - 11);
        if ( v5 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v6 - *(v6 - 1) - 8 > 0x1F )
            goto LABEL_22;
          v6 = (_QWORD *)*(v6 - 1);
        }
        j_j_free(v6);
      }
      *(v3 - 9) = 0;
      *(v3 - 8) = 15;
      *((_BYTE *)v3 - 88) = 0;
      v7 = *(v3 - 12);
      if ( v7 >= 0x10 )
      {
        v8 = (_QWORD *)*(v3 - 15);
        if ( v7 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v8 - *(v8 - 1) - 8 > 0x1F )
            goto LABEL_22;
          v8 = (_QWORD *)*(v8 - 1);
        }
        j_j_free(v8);
      }
      *(v3 - 13) = 0;
      *(v3 - 12) = 15;
      *((_BYTE *)v3 - 120) = 0;
      a2 = *(v3 - 16);
      if ( a2 >= 0x10 )
      {
        v9 = (_QWORD *)*(v3 - 19);
        if ( a2 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v9 - *(v9 - 1) - 8 > 0x1F )
LABEL_22:
            invalid_parameter_noinfo_noreturn();
          v9 = (_QWORD *)*(v9 - 1);
        }
        j_j_free(v9);
      }
      *(v3 - 17) = 0;
      *(v3 - 16) = 15;
      *((_BYTE *)v3 - 152) = 0;
      v3 += 20;
    }
    while ( v3 - 19 != v2 );
  }
}

