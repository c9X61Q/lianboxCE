// busybox.exe @ 0x446cec size=59

char *__usercall sub_446CEC@<eax>(const char *Str@<eax>)
{
  const char *Source; // ebx

  Source = Str;
  if ( Str != nullptr )
  {
    dword_473344 -= (strlen(Str) + 8) & 0xFFFFFFF8;
    return strcpy((char *)dword_473344, Source);
  }
  return (char *)Source;
}

