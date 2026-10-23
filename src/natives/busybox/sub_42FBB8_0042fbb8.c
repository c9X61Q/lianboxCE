// busybox.exe @ 0x42fbb8 size=241

void sub_42FBB8()
{
  int v0; // ebx
  unsigned int v1; // ebp
  unsigned int v2; // eax
  unsigned int v3; // ebp
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int i; // ecx
  int v10; // edi
  int v11; // eax

LABEL_1:
  v0 = dword_486010;
  while ( 1 )
  {
    v1 = *(_DWORD *)(v0 - 24);
    if ( v1 > 0x105 || *(_BYTE *)(v0 - 12) != 0 )
      break;
    v2 = *(_DWORD *)(v0 - 32);
    v3 = v2 + v1;
    v4 = 0x10000 - v3;
    if ( v3 == 65537 )
    {
      v4 = -2;
    }
    else if ( v2 > 0xFEF9 )
    {
      v5 = *(_DWORD *)(v0 - 76);
      qmemcpy((void *)v5, (const void *)(v5 + 0x8000), 0x8000u);
      v6 = 0;
      *(_DWORD *)(v0 - 28) -= 0x8000;
      *(_DWORD *)(v0 - 32) -= 0x8000;
      *(_DWORD *)(v0 - 44) -= 0x8000;
      v7 = *(_DWORD *)(v0 - 72);
      do
      {
        LOWORD(v5) = *(_WORD *)(v7 + 2 * v6 + 0x10000);
        HIWORD(v8) = HIWORD(v5);
        LOWORD(v8) = (__int16)v5 >> 15;
        LOWORD(v5) = v5 + 0x8000;
        v5 &= v8;
        *(_WORD *)(v7 + 2 * v6++ + 0x10000) = v5;
      }
      while ( v6 != 0x8000 );
      for ( i = 0; i != 0x8000; ++i )
      {
        LOWORD(v5) = *(_WORD *)(v7 + 2 * i);
        HIWORD(v10) = HIWORD(v5);
        LOWORD(v10) = (__int16)v5 >> 15;
        LOWORD(v5) = v5 + 0x8000;
        v5 &= v10;
        *(_WORD *)(v7 + 2 * i) = v5;
      }
      v4 = 98304 - v3;
    }
    if ( *(_BYTE *)(v0 - 12) == 0 )
    {
      v11 = sub_42F6B8((CHAR *)(*(_DWORD *)(v0 - 76) + *(_DWORD *)(v0 - 32) + *(_DWORD *)(v0 - 24)), v4);
      if ( (unsigned int)(v11 - 1) <= 0xFFFFFFFD )
        *(_DWORD *)(v0 - 24) += v11;
      else
        *(_BYTE *)(v0 - 12) = 1;
      goto LABEL_1;
    }
  }
}

