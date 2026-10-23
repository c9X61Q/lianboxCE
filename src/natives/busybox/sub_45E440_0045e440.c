// busybox.exe @ 0x45e440 size=20

_WORD *__usercall sub_45E440@<eax>(_WORD *result@<eax>, __int16 a2@<dx>)
{
  if ( *result == 23 || *result == 2 )
    result[1] = a2;
  return result;
}

