// resizecmdwindow.exe @ 0x1400054d0 size=104

__int64 __fastcall sub_1400054D0(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)*a1;
  if ( v2 != nullptr )
  {
    sub_1400078F0(v2, a1[1]);
    v3 = (_QWORD *)*a1;
    if ( ((a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 )
    {
      if ( (unsigned __int64)v3 - *(v3 - 1) - 8 > 0x1F )
        invalid_parameter_noinfo_noreturn();
      v3 = (_QWORD *)*(v3 - 1);
    }
    j_j_free(v3);
    result = 0;
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return result;
}

