// busybox.exe @ 0x43d3f0 size=67

int __usercall sub_43D3F0@<eax>(unsigned int a1@<eax>)
{
  int v2; // eax
  int result; // eax

  v2 = a1 & 3;
  if ( a1 <= 0x6D8 )
    return v2 == 0;
  if ( v2 != 0 )
    return a1 % 0x190 == 0;
  result = 1;
  if ( a1 % 0x64 == 0 )
    return a1 % 0x190 == 0;
  return result;
}

