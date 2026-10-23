// busybox.exe @ 0x45c65c size=57

void *__fastcall sub_45C65C(int a1, void *a2)
{
  int *v2; // esi
  int v3; // ebx
  int v4; // edi
  void *Block; // [esp+0h] [ebp-10h]

  Block = a2;
  v2 = (int *)dword_48600C;
  if ( **((_BYTE **)dword_48600C + 8) != 0 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)dword_48600C + 20) + 8;
    free(*(void **)(*(_DWORD *)dword_48600C + 4 * v3 + 4));
    v4 = *v2;
    *(_DWORD *)(v4 + 4 * v3 + 4) = sub_47188C();
  }
  return Block;
}

