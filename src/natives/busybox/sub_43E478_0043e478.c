// busybox.exe @ 0x43e478 size=98

int __usercall sub_43E478@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // edx
  int v8; // edx
  int i; // ecx
  unsigned int v10; // edx

  v4 = 0;
  v5 = 218;
  do
  {
    v6 = v5 + *(unsigned __int8 *)(a2 + v4) + 65280 - *(unsigned __int8 *)(a3 + v4);
    *(_BYTE *)(result + v4) = v5 + *(_BYTE *)(a2 + v4) - *(_BYTE *)(a3 + v4);
    v5 = v6 >> 8;
    ++v4;
  }
  while ( v4 != 31 );
  v7 = v5 + *(unsigned __int8 *)(a2 + 31) - *(unsigned __int8 *)(a3 + 31);
  *(_BYTE *)(result + 31) = (BYTE1(v6) + *(_BYTE *)(a2 + 31) - *(_BYTE *)(a3 + 31)) & 0x7F;
  v8 = 19 * (v7 >> 7);
  for ( i = 0; i != 32; ++i )
  {
    v10 = *(unsigned __int8 *)(result + i) + v8;
    *(_BYTE *)(result + i) = v10;
    v8 = v10 >> 8;
  }
  return result;
}

