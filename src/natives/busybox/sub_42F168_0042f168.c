// busybox.exe @ 0x42f168 size=147

_BYTE *__usercall sub_42F168@<eax>(FILE *Stream@<eax>, const char *a2@<edx>)
{
  int v3; // ebx
  int v4; // ecx
  _BYTE *v5; // eax
  _BYTE *v6; // edi
  unsigned __int8 *i; // eax
  unsigned __int8 v8; // dl
  FILE *v9; // eax

  v3 = dword_486010 + 64;
  if ( fgets((char *)(dword_486010 + 64), 4096, Stream) == nullptr )
    sub_41823C("error getting response");
  v5 = (_BYTE *)sub_4635B0(v4, 10);
  LOBYTE(v5) = *v5;
  v6 = v5;
  for ( i = (unsigned __int8 *)v3; ; ++i )
  {
    v8 = *i;
    if ( *i == 0 )
      break;
    if ( v8 <= 0x1Fu )
    {
      if ( v8 != 9 )
        break;
      *i = 32;
    }
  }
  *i = 0;
  if ( a2 != nullptr && (dword_486008 & 4) != 0 )
  {
    v9 = off_4730E8(2);
    sub_46EEFC(v9, a2, v3);
  }
  return v6;
}

