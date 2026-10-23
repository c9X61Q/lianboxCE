// busybox.exe @ 0x45a198 size=181

int __fastcall sub_45A198(int a1, void *a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  void *Block; // [esp+0h] [ebp-Ch]

  Block = a2;
  v2 = dword_486010;
  if ( *(_DWORD *)(dword_486010 + 52) != 0 )
  {
    v3 = 0;
    do
      free((void *)(*(_DWORD *)(*(_DWORD *)(v2 + 52) + 4 * v3++) - 4));
    while ( *(_DWORD *)(v2 + 20) >= v3 );
    free(*(void **)(v2 + 52));
    *(_DWORD *)(v2 + 52) = 0;
  }
  *(_DWORD *)(v2 + 20) = -1;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 24) = 0;
  if ( *(_DWORD *)(v2 + 68) != 0 )
  {
    sub_47154C(a1, 0);
    sub_471530(Block);
    *(_DWORD *)(v2 + 76) = -1;
  }
  else
  {
    *(_DWORD *)(v2 + 68) = sub_47188C();
    *(_DWORD *)(v2 + 76) = -2;
  }
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_BYTE *)(v2 + 254) = 1;
  sub_457958();
  sub_46F088("\x1B[?1049h");
  return sub_418EA0();
}

