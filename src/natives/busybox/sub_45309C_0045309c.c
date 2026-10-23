// busybox.exe @ 0x45309c size=116

void __noreturn sub_45309C()
{
  int v0; // ebx

  v0 = dword_485FF0;
  *(_BYTE *)(dword_485FF0 + 60) = 0;
  *_errno() = 40;
  if ( *(_DWORD *)(v0 + 12) == 0 && *(_BYTE *)(v0 + 66) != 0 || (sub_46F190(2, 0), raise(2), *(_BYTE *)(v0 + 66) != 0) )
    sub_46F294(1, "^C", 2u);
  *(_BYTE *)v0 = -126;
  sub_453074(0);
}

