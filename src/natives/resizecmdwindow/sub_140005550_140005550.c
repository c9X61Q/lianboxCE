// resizecmdwindow.exe @ 0x140005550 size=140

__int64 __fastcall sub_140005550(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // rsi
  _QWORD *v4; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( *a1 != 0 )
  {
    for ( i = (_QWORD *)a1[1]; v1 != i; v1 += 16 )
      sub_140008AC0(v1);
    v4 = (_QWORD *)*a1;
    if ( ((a1[2] - *a1) & 0xFFFFFFFFFFFFFF80uLL) >= 0x1000 )
    {
      if ( (unsigned __int64)v4 - *(v4 - 1) - 8 > 0x1F )
        invalid_parameter_noinfo_noreturn();
      v4 = (_QWORD *)*(v4 - 1);
    }
    j_j_free(v4);
    result = 0;
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return result;
}

