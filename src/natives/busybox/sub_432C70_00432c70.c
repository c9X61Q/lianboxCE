// busybox.exe @ 0x432c70 size=97

int __usercall sub_432C70@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  int i; // esi
  int v6; // ebx
  unsigned int v7; // edi
  int j; // ecx
  int v9; // ecx
  _DWORD v10[20]; // [esp+0h] [ebp-50h]

  v2 = dword_486010;
  v3 = 1;
  v4 = 0;
  do
  {
    v4 = 2 * (*(_DWORD *)(v2 + 4 * v3 + 5200) + v4);
    v10[v3++] = v4;
  }
  while ( v3 != 16 );
  for ( i = 0; i <= a2; ++i )
  {
    v6 = *(unsigned __int16 *)(result + 4 * i + 2);
    if ( *(_WORD *)(result + 4 * i + 2) != 0 )
    {
      v7 = v10[v6];
      v10[v6] = v7 + 1;
      for ( j = 0; ; j = 2 * v9 )
      {
        v9 = v7 & 1 | j;
        if ( --v6 == 0 )
          break;
        v7 >>= 1;
      }
      *(_WORD *)(result + 4 * i) = v9;
    }
  }
  return result;
}

