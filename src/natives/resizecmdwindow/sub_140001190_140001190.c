// resizecmdwindow.exe @ 0x140001190 size=61

__int64 __fastcall sub_140001190(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0;
  _std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &std::bad_array_new_length::`vftable';
  return a1;
}

