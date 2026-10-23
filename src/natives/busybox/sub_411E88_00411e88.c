// busybox.exe @ 0x411e88 size=26

_BYTE *__usercall sub_411E88@<eax>(char a1@<al>, _BYTE *a2@<edx>)
{
  _BYTE *v3; // eax

  v3 = a2;
  if ( *(_BYTE **)(dword_485FF4 + 8) == a2 )
    v3 = (_BYTE *)sub_4371DC();
  *v3 = a1;
  return v3 + 1;
}

