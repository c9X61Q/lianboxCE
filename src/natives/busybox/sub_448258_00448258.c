// busybox.exe @ 0x448258 size=21

int __usercall sub_448258@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // ecx
  char v3; // bl

  if ( result != a2 )
  {
    v2 = 0;
    do
    {
      v3 = *(_BYTE *)(a2 + v2);
      *(_BYTE *)(result + v2++) = v3;
    }
    while ( v3 != 0 );
  }
  return result;
}

