// busybox.exe @ 0x460e8c size=19

_BYTE *__usercall sub_460E8C@<eax>(_BYTE *result@<eax>)
{
  while ( (*result & 0xDF) != 0 && (unsigned __int8)(*result - 9) > 4u )
    ++result;
  return result;
}

