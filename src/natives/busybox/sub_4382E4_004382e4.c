// busybox.exe @ 0x4382e4 size=44

unsigned int __usercall sub_4382E4@<eax>(unsigned __int8 *a1@<eax>)
{
  unsigned __int8 *v1; // edx
  unsigned int i; // eax
  int v3; // ecx

  v1 = a1;
  for ( i = 16 * *a1; ; i += v3 )
  {
    v3 = *v1;
    if ( (_BYTE)v3 == 61 || (_BYTE)v3 == 0 )
      break;
    ++v1;
  }
  return dword_485FEC + 4 * (i % 0x27) + 28;
}

