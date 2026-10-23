// busybox.exe @ 0x446fb8 size=42

BOOL __usercall sub_446FB8@<eax>(int a1@<eax>)
{
  _BYTE *v1; // edx
  BOOL result; // eax

  v1 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE *)a1 == 0 )
    return *(_QWORD *)(a1 + 8) == 0;
  result = true;
  if ( *v1 != 0 )
  {
    result = false;
    if ( *v1 == 48 )
      return v1[1] == 0;
  }
  return result;
}

