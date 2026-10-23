// busybox.exe @ 0x431ecc size=14

_DWORD *__usercall sub_431ECC@<eax>(_DWORD *result@<eax>)
{
  if ( result != nullptr && --*result < 0 )
    return (_DWORD *)sub_4631A8();
  return result;
}

