// busybox.exe @ 0x43cb2c size=73

int __usercall sub_43CB2C@<eax>(int a1@<eax>)
{
  signed __int32 v2; // eax
  int result; // eax
  _BYTE *v4; // edx

  sub_436630((signed __int32 *)a1);
  v2 = *(_DWORD *)a1;
  BYTE1(v2) = BYTE1(*(_DWORD *)a1) ^ 0x40;
  result = v2 & 0x4201;
  if ( result != 0 )
    return *(double *)(a1 + 8) != 0.0;
  v4 = *(_BYTE **)(a1 + 16);
  if ( v4 != nullptr )
    return *v4 != 0;
  return result;
}

