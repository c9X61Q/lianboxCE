// busybox.exe @ 0x446708 size=26

_BYTE *__usercall sub_446708@<eax>(void *a1@<eax>)
{
  _BYTE *result; // eax

  result = sub_4298C0(a1);
  if ( (unsigned int)result < *(_DWORD *)(dword_486010 + 4) - 1 && *result == 10 )
    ++result;
  return result;
}

