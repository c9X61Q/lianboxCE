// resizecmdwindow.exe @ 0x1400011d0 size=61

__int64 __fastcall sub_1400011D0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0;
  _std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::bad_alloc::`vftable';
  return a1;
}

