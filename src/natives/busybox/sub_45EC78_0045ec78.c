// busybox.exe @ 0x45ec78 size=33

signed __int32 *__usercall sub_45EC78@<eax>(signed __int32 *a1@<eax>, _BYTE *a2@<edx>)
{
  signed __int32 v4; // eax

  v4 = (signed __int32)a2;
  if ( a2 != nullptr )
  {
    if ( *a2 != 0 )
      v4 = sub_47188C();
    else
      v4 = 0;
  }
  return sub_45EC5C(a1, v4);
}

