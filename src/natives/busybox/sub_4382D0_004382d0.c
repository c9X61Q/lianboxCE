// busybox.exe @ 0x4382d0 size=20

int __usercall sub_4382D0@<eax>(unsigned __int8 *a1@<eax>)
{
  int result; // eax
  int v3; // ecx

  for ( result = 0; ; result = v3 + 63 * result )
  {
    v3 = *a1;
    if ( (_BYTE)v3 == 0 )
      break;
    ++a1;
  }
  return result;
}

