// busybox.exe @ 0x431bec size=274

void *__usercall sub_431BEC@<eax>(int a1@<eax>)
{
  int v2; // esi
  unsigned int j; // edi
  unsigned int i; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int k; // esi
  int v11; // ebp
  int m; // edi
  void *Block; // [esp+0h] [ebp-14h]

  if ( *(_DWORD *)a1 != 0 )
  {
    for ( i = 0; *(_DWORD *)(a1 + 8) > i; ++i )
    {
      v5 = *(_DWORD *)a1 + 8 * i;
      if ( (*(_DWORD *)(v5 + 4) & 0x400FF) == 3 )
        free(*(void **)v5);
    }
  }
  free(*(void **)(a1 + 12));
  v2 = 0;
  for ( j = 0; *(_DWORD *)(a1 + 8) > j; ++j )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( v6 != 0 )
      free(*(void **)(v6 + v2 + 8));
    v7 = *(_DWORD *)(a1 + 28);
    if ( v7 != 0 )
      free(*(void **)(v7 + v2 + 8));
    v8 = *(_DWORD *)(a1 + 20);
    if ( v8 != 0 )
      free(*(void **)(v8 + v2 + 8));
    v2 += 12;
  }
  free(*(void **)(a1 + 20));
  free(*(void **)(a1 + 24));
  free(*(void **)(a1 + 28));
  free(*(void **)a1);
  if ( *(_DWORD *)(a1 + 32) != 0 )
  {
    for ( k = 0; k <= *(_DWORD *)(a1 + 68); ++k )
    {
      v11 = *(_DWORD *)(a1 + 32) + 12 * k;
      for ( m = 0; *(_DWORD *)v11 > m; ++m )
        sub_431DD0();
      free(*(void **)(v11 + 8));
    }
  }
  free(*(void **)(a1 + 32));
  free(*(void **)(a1 + 132));
  free((void *)a1);
  return Block;
}

