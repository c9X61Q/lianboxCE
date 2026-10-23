// busybox.exe @ 0x429840 size=112

int __cdecl sub_429840(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax

  v2 = sub_4728CC();
  dword_486010 = v2;
  *(_DWORD *)(v2 + 12) = 1024;
  v3 = sub_470E78();
  *(_DWORD *)(v2 + 20) = v3;
  *(_DWORD *)(v2 + 24) = v3;
  *(_DWORD *)(v2 + 32) = v2 + 32;
  *(_DWORD *)(v2 + 36) = v2 + 32;
  if ( *(_DWORD *)(a2 + 4) == 0 )
  {
LABEL_6:
    sub_4248E0();
    return 0;
  }
  *(_DWORD *)(v2 + 28) = sub_47188C();
  if ( sub_456728() != 0 )
  {
    if ( *(_DWORD *)(v2 + 4) != 0 )
      sub_45E41C();
    *(_BYTE *)(v2 + 48) = 0;
    goto LABEL_6;
  }
  return 0;
}

