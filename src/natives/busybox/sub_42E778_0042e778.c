// busybox.exe @ 0x42e778 size=167

void sub_42E778()
{
  int v0; // ebx
  _DWORD *v1; // eax
  _DWORD *v2; // edx

  v0 = dword_486010;
  if ( *(_DWORD *)(dword_486010 + 8) != 0 )
  {
    sub_428FC4(
      2,
      (int)"Hunk %d FAILED %ld/%ld.\n",
      *(_DWORD *)(dword_486010 + 40),
      *(_DWORD *)(dword_486010 + 12),
      *(_DWORD *)(dword_486010 + 20));
    *(_DWORD *)(v0 + 56) = 1;
    *(_DWORD *)(v0 + 36) = 2;
    v1 = *(_DWORD **)(v0 + 8);
    v2 = (_DWORD *)v1[1];
    *v2 = 0;
    sub_424888(v1, v2);
    *(_DWORD *)(v0 + 8) = 0;
    sub_442EA4(*(_DWORD *)(v0 + 44));
    sub_442EA4(*(_DWORD *)(v0 + 48));
    if ( **(_BYTE **)(v0 + 52) != 0 )
    {
      sub_444ECC(*(char **)(v0 + 52));
      free(*(void **)(v0 + 52));
    }
    *(_DWORD *)(v0 + 52) = 0;
    *(_DWORD *)(v0 + 36) = 0;
  }
}

