// busybox.exe @ 0x45100c size=32

int *__usercall sub_45100C@<eax>(int *result@<eax>)
{
  int v1; // edx

  while ( 1 )
  {
    v1 = *result;
    if ( *result <= 0 )
      break;
    if ( *(_DWORD *)(result[3] + 4 * v1 - 4) != 0 )
      return result;
    *result = v1 - 1;
  }
  if ( *result == 0 )
    result[2] = 0;
  return result;
}

