// busybox.exe @ 0x44e968 size=169

int __usercall sub_44E968@<eax>(int a1@<eax>, char *a2@<edx>)
{
  FILE *v3; // eax
  FILE *v4; // edi
  int v5; // ebp
  const char *v6; // eax
  char *Block; // esi
  FILE *v8; // eax

  v3 = sub_431518(a2);
  if ( v3 == nullptr )
    return 1;
  v4 = v3;
  v5 = *(_DWORD *)(a1 + 4);
  while ( 1 )
  {
    v6 = (const char *)sub_470E94();
    Block = (char *)v6;
    if ( v6 == nullptr )
      break;
    if ( *(_BYTE *)(a1 + 20) != 0 || *(_BYTE *)(a1 + 21) != 0 && *v6 != 0 )
    {
      sub_46F088("%*u%s%s\n", *(_DWORD *)a1, v5, *(const char **)(a1 + 12), v6);
      v5 += *(_DWORD *)(a1 + 8);
    }
    else if ( *(_DWORD *)(a1 + 16) != 0 )
    {
      v8 = off_4730E8(1);
      sub_46EF20(*(char **)(a1 + 16), v8);
    }
    free(Block);
  }
  *(_DWORD *)(a1 + 4) = v5;
  fclose(v4);
  return 0;
}

