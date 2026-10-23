// resizecmdwindow.exe @ 0x140009eb0 size=30

_QWORD *__fastcall sub_140009EB0(_QWORD *a1)
{
  a1[2] = 0;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}

