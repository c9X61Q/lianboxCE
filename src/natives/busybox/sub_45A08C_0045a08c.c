// busybox.exe @ 0x45a08c size=69

void *__cdecl sub_45A08C(int a1)
{
  void *Block; // [esp+0h] [ebp-8h]

  if ( *(_DWORD *)a1 != 0 )
    sub_431BEC(*(_DWORD *)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  free(*(void **)(a1 + 16));
  *(_DWORD *)(a1 + 16) = 0;
  free(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  return Block;
}

