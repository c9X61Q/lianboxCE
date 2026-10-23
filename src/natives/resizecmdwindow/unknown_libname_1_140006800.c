// resizecmdwindow.exe @ 0x140006800 size=25

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_1(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = a2;
  if ( a2[3] >= 0x10u )
    v2 = (_QWORD *)*a2;
  return sub_140007E60(a1, v2, a2[2]);
}

