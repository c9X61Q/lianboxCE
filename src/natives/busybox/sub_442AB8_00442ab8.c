// busybox.exe @ 0x442ab8 size=22

_BYTE *__usercall sub_442AB8@<eax>(unsigned int a1@<eax>, char a2@<dl>, int a3@<ecx>)
{
  _BYTE *result; // eax

  for ( result = (_BYTE *)(a1 + a3 - 1); (unsigned int)result >= a1; --result )
  {
    if ( *result == a2 )
      return result;
  }
  return nullptr;
}

