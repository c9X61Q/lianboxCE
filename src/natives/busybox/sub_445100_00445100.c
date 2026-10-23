// busybox.exe @ 0x445100 size=110

_DWORD *__usercall sub_445100@<eax>(unsigned __int8 *a1@<eax>, _DWORD *a2@<edx>)
{
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  int v6; // eax

  v4 = a2 + 5;
  v5 = a2 + 13;
  if ( (*a2 & 0xFF00) == 0x2100 )
  {
    sub_45A08C(a2 + 5);
    sub_45A08C(v5);
  }
  v6 = *a1;
  if ( (_BYTE)v6 != 0 && a1[1] != 0 )
  {
    *a2 = 8448;
    a2[2] = v4;
    a2[3] = v5;
    sub_4716D4(1, a1);
    sub_4716D4(3, a1);
  }
  else
  {
    *a2 = v6;
  }
  return a2;
}

