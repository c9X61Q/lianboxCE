// busybox.exe @ 0x40b3e0 size=152

int __usercall sub_40B3E0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi
  char *v4; // esi
  char v5; // di
  int i; // ebx
  char v8; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v9[31]; // [esp+Dh] [ebp-1Fh] BYREF

  *(_DWORD *)(a3 + 12) = -1;
  v3 = *(_DWORD *)(a3 + 4);
  if ( a1 != 0 )
  {
    v8 = 45;
    v4 = v9;
  }
  else if ( (v3 & 0x100) != 0 )
  {
    v8 = 43;
    v4 = v9;
  }
  else if ( (v3 & 0x40) != 0 )
  {
    v8 = 32;
    v4 = v9;
  }
  else
  {
    v4 = &v8;
  }
  v5 = v3 & 0x20;
  for ( i = 0; i != 3; ++i )
    v4[i] = v5 | *(_BYTE *)(a2 + i) & 0xDF;
  return sub_40B2B0(&v8, v4 + 3 - &v8, a3);
}

