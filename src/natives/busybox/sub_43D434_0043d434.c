// busybox.exe @ 0x43d434 size=57

_BYTE *__usercall sub_43D434@<eax>(int a1@<eax>)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_44DBB0(a1, "builtin");
  if ( (result != nullptr || (result = (_BYTE *)sub_44DBB0(a1, "func")) != nullptr) && *result == 37 )
    ++result;
  return result;
}

