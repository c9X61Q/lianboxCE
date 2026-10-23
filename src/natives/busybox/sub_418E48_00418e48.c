// busybox.exe @ 0x418e48 size=20

_BYTE *__usercall sub_418E48@<eax>(_BYTE *result@<eax>)
{
  _BYTE *i; // edx

  for ( i = result; *i != 0; ++i )
  {
    if ( *i == 92 )
      *i = 47;
  }
  return result;
}

