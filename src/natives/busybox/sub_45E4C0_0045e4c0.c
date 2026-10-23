// busybox.exe @ 0x45e4c0 size=157

void __usercall sub_45E4C0(int a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  int v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  char *Block; // esi
  int v11; // [esp+10h] [ebp-14h]

  v5 = sub_45CD18(a2);
  v6 = sub_435514(a1, 1);
  v11 = sub_435514(a1, 2);
  v7 = sub_435514(a1, 3);
  v8 = v5;
  if ( a3 != 2 )
  {
    v8 = v11;
    if ( a3 == 3 )
      v7 = v5;
    else
      v6 = v5;
  }
  v9 = dword_486010;
  Block = (char *)sub_4708BC(
                    "%s %s %s",
                    *(const char **)(dword_486010 + 4 * v6),
                    *(const char **)(dword_486010 + 4 * v8),
                    *(const char **)(dword_486010 + 4 * v7));
  *(_WORD *)(*(_DWORD *)(v9 + 4 * a1 + 105560) + 2) = sub_45CD18(Block);
  free(Block);
}

