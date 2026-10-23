// busybox.exe @ 0x44614c size=71

void *__usercall sub_44614C@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // ebp
  _BYTE *v5; // esi
  int v6; // edx
  void *Block; // [esp+0h] [ebp-14h]

  v4 = dword_486010;
  free(*(void **)(dword_486010 + 72));
  *(_DWORD *)(v4 + 76) = a2 * a1 + 8;
  v5 = (_BYTE *)sub_470E78();
  *(_DWORD *)(v4 + 72) = v5;
  sub_45CC0C();
  v6 = a1 - 2;
  while ( --v6 >= 0 )
  {
    v5 += a2;
    *v5 = 126;
  }
  return Block;
}

