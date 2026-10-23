// resizecmdwindow.exe @ 0x140005640 size=92

void __fastcall sub_140005640(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0;
  v3 = *v1;
  if ( *v1 != nullptr )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      j_j_free(v3);
      v3 = v4;
    }
    while ( v4 != nullptr );
  }
  j_j_free(*a1);
}

