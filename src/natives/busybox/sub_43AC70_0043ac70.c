// busybox.exe @ 0x43ac70 size=171

int __usercall sub_43AC70@<eax>(CHAR *a1@<eax>)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  _DWORD *Block; // eax

  v2 = dword_486010;
  free(*(void **)dword_486010);
  *(_DWORD *)(v2 + 12) = 10240;
  v3 = sub_4728CC();
  *(_DWORD *)v2 = v3;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 68) = v3;
  if ( *(CHAR **)(v2 + 64) != a1 )
  {
    free(*(void **)(v2 + 64));
    *(_DWORD *)(v2 + 64) = sub_47188C();
  }
  v4 = sub_42F4D0(1, a1, *(_DWORD *)v2);
  if ( v4 < 0 )
    sub_41B62C(*(_DWORD *)v2, 0xAu, 0);
  while ( 1 )
  {
    Block = *(_DWORD **)(v2 + 5268);
    if ( Block == nullptr )
      break;
    *(_DWORD *)(v2 + 5268) = *Block;
    free(Block);
  }
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = -1;
  memset((void *)(v2 + 236), 0, 0x70u);
  return v4;
}

