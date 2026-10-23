// busybox.exe @ 0x440b60 size=287

void sub_440B60()
{
  int v0; // esi
  int v1; // edi
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax

  v0 = dword_486010;
  if ( *(int *)(dword_486010 + 12) >= 0 )
    return;
  sub_41CA38();
  sub_46F088("\x1B[7m%s", *(const char **)(v0 + 68));
  if ( *(_DWORD *)(v0 + 60) > 1u )
    sub_46F088(" (file %i of %i)", *(_DWORD *)(v0 + 64), *(_DWORD *)(v0 + 60));
  v1 = sub_45C4E4();
  if ( (dword_486008 & 0x80u) == 0 )
  {
    v2 = sub_45C4E4();
LABEL_8:
    v3 = v2;
    goto LABEL_9;
  }
  v2 = v1 + *(_DWORD *)(v0 + 28);
  v3 = *(_DWORD *)(v0 + 24);
  if ( v3 > v2 )
    goto LABEL_8;
LABEL_9:
  sub_46F088(" lines %i-%i", v1, v3);
  sub_46BC24();
  if ( *(int *)(v0 + 76) >= 0 )
    sub_46F088("/%i", *(_DWORD *)(v0 + 76));
  if ( sub_415CF4() != 0 )
  {
    sub_46F088(" (END)");
    v4 = *(_DWORD *)(v0 + 60);
    if ( v4 > 1 )
    {
      v5 = *(_DWORD *)(v0 + 64);
      if ( v4 != v5 )
        sub_46F088(" - next: %s", *(_DWORD *)(*(_DWORD *)(v0 + 72) + 4 * v5));
    }
  }
  else
  {
    v6 = *(_DWORD *)(v0 + 76);
    if ( v6 > 0 )
    {
      v7 = (int)((v6 >> 1) + 100 * v3) / v6;
      if ( v7 > 0x64 )
        v7 = 100;
      sub_46F088(" %i%%", v7);
    }
  }
  sub_46F088("\x1B[m");
}

