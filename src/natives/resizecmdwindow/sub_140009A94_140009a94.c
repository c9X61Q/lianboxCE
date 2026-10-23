// resizecmdwindow.exe @ 0x140009a94 size=43

_QWORD *__fastcall sub_140009A94(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}

