// busybox.exe @ 0x42cbd8 size=132

void __fastcall sub_42CBD8(int a1, int a2)
{
  char *v2; // eax
  char *Block; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // esi

  sub_44F07C(a1, a2);
  v2 = (char *)sub_43D4D8();
  Block = v2;
  if ( *v2 == 0 )
  {
    sub_463120();
LABEL_3:
    free(Block);
    return;
  }
  if ( sub_442D6C(v2, 4) != 0 )
  {
    sub_44F07C(v5, v4);
    goto LABEL_3;
  }
  v6 = dword_486010;
  free(*(void **)(dword_486010 + 68));
  *(_DWORD *)(v6 + 68) = Block;
  **(_DWORD **)(v6 + 72) = Block;
  *(_DWORD *)(v6 + 64) = 1;
  *(_DWORD *)(v6 + 60) = 1;
  sub_45A198();
}

