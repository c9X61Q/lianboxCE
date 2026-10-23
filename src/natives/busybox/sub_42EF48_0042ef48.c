// busybox.exe @ 0x42ef48 size=62

int __usercall sub_42EF48@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi
  unsigned int v4; // ebx
  int v5; // ebx
  int i; // edx
  unsigned int v7; // ebx

  v3 = 0;
  v4 = 0;
  do
  {
    v4 = a3 * *(unsigned __int8 *)(a2 + v3) + (v4 >> 8);
    *(_BYTE *)(result + v3++) = v4;
  }
  while ( v3 != 32 );
  *(_BYTE *)(result + 31) &= ~0x80u;
  v5 = 19 * (v4 >> 7);
  for ( i = 0; i != 32; ++i )
  {
    v7 = *(unsigned __int8 *)(result + i) + v5;
    *(_BYTE *)(result + i) = v7;
    v5 = v7 >> 8;
  }
  return result;
}

