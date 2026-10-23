// busybox.exe @ 0x431e38 size=59

void *__fastcall sub_431E38(int a1, void *a2)
{
  void *v2; // ebx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  void *Block; // [esp+0h] [ebp-8h]

  Block = a2;
  v2 = dword_48600C;
  if ( *((_DWORD *)dword_48600C + 13) != 0 )
  {
    while ( 1 )
    {
      v3 = *((_DWORD *)v2 + 14);
      v4 = *((_DWORD *)v2 + 13);
      if ( v3 == 0 )
        break;
      v5 = v3 - 1;
      *((_DWORD *)v2 + 14) = v5;
      free(*(void **)(v4 + 4 * v5));
    }
    free(*((void **)v2 + 13));
    *((_DWORD *)v2 + 13) = 0;
  }
  return Block;
}

