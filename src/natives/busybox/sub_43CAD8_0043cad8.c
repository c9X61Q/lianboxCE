// busybox.exe @ 0x43cad8 size=84

int __usercall sub_43CAD8@<eax>(unsigned __int64 a1@<edx:eax>)
{
  int v1; // ecx
  int v2; // ebx
  int v3; // ebp

  v1 = 62;
  v2 = 0;
  do
  {
    v3 = 2 * v2;
    v2 = 2 * v2 + 1;
    if ( a1 >> v1 < (unsigned int)v2 * (unsigned __int64)(unsigned int)v2 )
      v2 = v3;
    v1 -= 2;
  }
  while ( v1 != -2 );
  return v2;
}

