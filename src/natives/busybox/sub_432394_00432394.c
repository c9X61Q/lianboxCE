// busybox.exe @ 0x432394 size=212

int __usercall sub_432394@<eax>(FILE *Stream@<ecx>, const char *a2@<eax>, const char *a3@<edx>)
{
  const char *v5; // esi
  FILE *v6; // eax
  int v7; // esi
  int result; // eax

  if ( a2 != nullptr )
  {
    v5 = a3;
    if ( a3 == nullptr )
      v5 = (const char *)&unk_475C97;
    sub_46EEFC(Stream, "%s%s\r\n", a2, v5);
    if ( (dword_486008 & 4) != 0 )
    {
      v6 = off_4730E8(2);
      sub_46EEFC(v6, "--> %s%s\n\n", a2, v5);
    }
    fflush(Stream);
    fseek(Stream, 0, 1);
  }
  v7 = dword_486010;
  *(_BYTE *)(dword_486010 + 67) = 0;
  do
  {
    do
      sub_42F168(Stream, "%s\n");
    while ( (unsigned __int8)(*(_BYTE *)(v7 + 64) - 48) > 9u );
  }
  while ( *(_BYTE *)(v7 + 67) != 32 );
  fseek(Stream, 0, 1);
  *(_BYTE *)(v7 + 67) = 0;
  result = sub_4708EC();
  *(_BYTE *)(v7 + 67) = 32;
  return result;
}

