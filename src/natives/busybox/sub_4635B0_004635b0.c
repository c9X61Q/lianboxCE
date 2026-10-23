// busybox.exe @ 0x4635b0 size=15

unsigned __int8 *__usercall sub_4635B0@<eax>(unsigned __int8 *result@<eax>, int a2@<edx>)
{
  int v2; // ecx

  while ( 1 )
  {
    v2 = *result;
    if ( (_BYTE)v2 == 0 || v2 == a2 )
      break;
    ++result;
  }
  return result;
}

