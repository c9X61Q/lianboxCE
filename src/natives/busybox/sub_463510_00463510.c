// busybox.exe @ 0x463510 size=32

char *__usercall sub_463510@<eax>(char *result@<eax>)
{
  char *v1; // ecx
  char i; // dl

  v1 = result;
  for ( i = *result; *v1 != 0; i = *v1 )
  {
    if ( (unsigned __int8)(i - 65) <= 0x19u )
      i += 32;
    *v1++ = i;
  }
  return result;
}

