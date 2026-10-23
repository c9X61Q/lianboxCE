// resizecmdwindow.exe @ 0x140001140 size=33

_QWORD *__fastcall sub_140001140(_QWORD *a1)
{
  a1[2] = 0;
  a1[1] = "bad array new length";
  *a1 = &std::bad_array_new_length::`vftable';
  return a1;
}

