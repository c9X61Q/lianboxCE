// busybox.exe @ 0x40f8d0 size=271

int __cdecl sub_40F8D0(int a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // ebp
  unsigned int v4; // ebx
  _DWORD *v5; // esi
  char v6; // di
  int *v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  _DWORD *v11; // edx
  int result; // eax
  _DWORD *v13; // edi
  unsigned int v14; // [esp+0h] [ebp-24h]
  int v15; // [esp+4h] [ebp-20h]
  int v16; // [esp+8h] [ebp-1Ch]

  v2 = *(_DWORD *)(a1 + 16);
  v16 = a2 >> 5;
  v15 = v2;
  if ( v2 <= a2 >> 5 )
    goto LABEL_8;
  v3 = (_DWORD *)(a1 + 20);
  v4 = a1 + 20 + 4 * v2;
  v5 = (_DWORD *)(a1 + 20 + 4 * (a2 >> 5));
  v6 = a2 & 0x1F;
  if ( (a2 & 0x1F) == 0 )
  {
    v13 = (_DWORD *)(a1 + 20);
    if ( v4 > (unsigned int)v5 )
    {
      do
        *v13++ = *v5++;
      while ( v4 > (unsigned int)v5 );
      v11 = &v3[v15 - v16];
      goto LABEL_13;
    }
LABEL_8:
    *(_DWORD *)(a1 + 16) = 0;
LABEL_9:
    *(_DWORD *)(a1 + 20) = 0;
    return a1;
  }
  v7 = v5 + 1;
  v8 = *v5 >> v6;
  if ( v4 <= (unsigned int)(v5 + 1) )
  {
    *(_DWORD *)(a1 + 20) = v8;
    if ( v8 != 0 )
    {
      v11 = (_DWORD *)(a1 + 20);
LABEL_7:
      ++v11;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  v14 = v4;
  v9 = a1 + 20;
  do
  {
    v10 = *v7;
    v9 += 4;
    ++v7;
    *(_DWORD *)(v9 - 4) = (v10 << (32 - v6)) | v8;
    v8 = (unsigned int)*(v7 - 1) >> v6;
  }
  while ( v14 > (unsigned int)v7 );
  v3 = (_DWORD *)(a1 + 20);
  v11 = (_DWORD *)(a1 + 20 + 4 * (v15 - v16) - 4);
  *v11 = v8;
  if ( v8 != 0 )
    goto LABEL_7;
LABEL_13:
  result = v11 - v3;
  *(_DWORD *)(a1 + 16) = result;
  if ( v11 == v3 )
    goto LABEL_9;
  return result;
}

