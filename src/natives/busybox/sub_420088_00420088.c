// busybox.exe @ 0x420088 size=98

int __usercall sub_420088@<eax>(int result@<eax>, int a2@<edx>)
{
  int v3; // esi
  unsigned int i; // ebx
  unsigned int v5; // ecx
  int j; // edx
  int v7; // ebp
  int v8; // ebp

  v3 = a2 == 0 ? -306674912 : 79764919;
  if ( result == 0 )
    result = sub_470E78();
  for ( i = 0; i != 256; ++i )
  {
    v5 = i;
    if ( a2 != 0 )
      v5 = i << 24;
    for ( j = 8; j != 0; --j )
    {
      v7 = v5;
      if ( a2 != 0 )
      {
        v5 *= 2;
        if ( v7 >= 0 )
          continue;
      }
      else
      {
        v8 = v5 & 1;
        v5 >>= 1;
        if ( v8 == 0 )
          continue;
      }
      v5 ^= v3;
    }
    *(_DWORD *)(result + 4 * i) = v5;
  }
  return result;
}

