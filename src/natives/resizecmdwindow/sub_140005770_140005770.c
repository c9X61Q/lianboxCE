// resizecmdwindow.exe @ 0x140005770 size=135

__int64 __fastcall sub_140005770(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)*a1;
  if ( v2 != nullptr )
  {
    sub_1400079C0(v2, a1[1]);
    v3 = (_QWORD *)*a1;
    if ( (unsigned __int64)(160 * ((a1[2] - *a1) / 160LL)) >= 0x1000 )
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

