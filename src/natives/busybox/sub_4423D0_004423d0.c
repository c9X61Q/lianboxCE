// busybox.exe @ 0x4423d0 size=135

void __usercall sub_4423D0(_DWORD *a1@<eax>)
{
  int i; // edi
  int v3; // esi
  int j; // ebp
  int v5; // eax
  void **Block; // [esp+4h] [ebp-14h]

  for ( i = 0; a1[27] > i; ++i )
  {
    v3 = *(_DWORD *)(a1[29] + 4 * i);
    for ( j = 0; *(_DWORD *)(v3 + 16) > j; ++j )
    {
      Block = *(void ***)(*(_DWORD *)(v3 + 20) + 4 * j);
      free(Block[4]);
      free(Block);
    }
    free(*(void **)(v3 + 20));
    v5 = *(_DWORD *)(v3 + 8);
    if ( v5 != 0 )
    {
      free(*(void **)(v5 + 8));
      free(*(void **)(v3 + 8));
    }
    free((void *)v3);
  }
  a1[27] = 0;
  a1[23] = 0;
}

