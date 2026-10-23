// busybox.exe @ 0x42eebc size=138

int __usercall sub_42EEBC@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // ebx
  int v6; // edi
  int i; // ebx
  int v8; // edx
  int j; // ecx
  unsigned int v10; // edx

  v3 = 0;
  v4 = 0;
  do
  {
    v4 >>= 8;
    v5 = 0;
    v6 = v3 + a3;
    do
    {
      v4 += *(unsigned __int8 *)(a2 + v5) * *(unsigned __int8 *)(v6 - v5);
      ++v5;
    }
    while ( v5 <= v3 );
    for ( i = v3 + 1; i != 32; ++i )
      v4 += 38 * *(unsigned __int8 *)(a2 + i) * *(unsigned __int8 *)(v6 - i + 32);
    *(_BYTE *)(result + v3++) = v4;
  }
  while ( v3 != 32 );
  *(_BYTE *)(result + 31) &= ~0x80u;
  v8 = 19 * (v4 >> 7);
  for ( j = 0; j != 32; ++j )
  {
    v10 = *(unsigned __int8 *)(result + j) + v8;
    *(_BYTE *)(result + j) = v10;
    v8 = v10 >> 8;
  }
  return result;
}

