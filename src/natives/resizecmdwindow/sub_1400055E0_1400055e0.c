// resizecmdwindow.exe @ 0x1400055e0 size=92

__int64 __fastcall sub_1400055E0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD **)a1;
  if ( v2 != nullptr )
  {
    if ( ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
    {
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        invalid_parameter_noinfo_noreturn();
      v2 = (_QWORD *)*(v2 - 1);
    }
    j_j_free(v2);
    result = 0;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}

