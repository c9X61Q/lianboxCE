// busybox.exe @ 0x460ffc size=18

_BYTE *__usercall sub_460FFC@<eax>(_BYTE *result@<eax>)
{
  while ( *result != 0 )
  {
    if ( *result == 47 )
      *result = 92;
    ++result;
  }
  return result;
}

