// busybox.exe @ 0x460fb8 size=19

_BYTE *__usercall sub_460FB8@<eax>(_BYTE *result@<eax>)
{
  while ( *result == 32 || (unsigned __int8)(*result - 9) <= 4u )
    ++result;
  return result;
}

