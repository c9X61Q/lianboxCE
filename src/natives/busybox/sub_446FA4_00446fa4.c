// busybox.exe @ 0x446fa4 size=20

_BYTE *__usercall sub_446FA4@<eax>(_BYTE *result@<eax>, int a2@<edx>)
{
  while ( a2 != 0 )
  {
    if ( *result++ == 0 )
    {
      if ( *result == 0 )
        return result;
      --a2;
    }
  }
  return result;
}

