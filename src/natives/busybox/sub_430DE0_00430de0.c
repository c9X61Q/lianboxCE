// busybox.exe @ 0x430de0 size=31

_DWORD *__usercall sub_430DE0@<eax>(_DWORD *a1@<eax>)
{
  _DWORD *v2; // esi

  while ( 1 )
  {
    v2 = (_DWORD *)*a1;
    if ( *a1 == 0 || sub_46C884() == 0 )
      break;
    a1 = v2;
  }
  return a1;
}

