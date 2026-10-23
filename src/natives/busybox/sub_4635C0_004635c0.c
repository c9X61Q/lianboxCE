// busybox.exe @ 0x4635c0 size=63

_BYTE *__usercall sub_4635C0@<eax>(_BYTE *a1@<eax>, char *a2@<edx>)
{
  char *v3; // eax
  char v4; // dl
  char v5; // al
  char *v7; // [esp+4h] [ebp-8h] BYREF

  v7 = a2;
  while ( 1 )
  {
    v3 = v7++;
    v4 = *v3;
    v5 = v4;
    if ( v4 == 92 )
    {
      v5 = sub_418050(&v7);
      v4 = 92;
    }
    *a1 = v5;
    if ( v4 == 0 )
      break;
    ++a1;
  }
  return a1;
}

