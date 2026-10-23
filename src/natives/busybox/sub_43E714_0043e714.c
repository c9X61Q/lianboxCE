// busybox.exe @ 0x43e714 size=237

unsigned int __usercall sub_43E714@<eax>(int a1@<eax>)
{
  unsigned int result; // eax
  FILE *v3; // esi
  int i; // ebx
  char *Block; // eax
  char *v6; // edi
  unsigned int j; // esi
  char *v8; // edi
  char *Str[259]; // [esp+4h] [ebp-40Ch] BYREF

  result = sub_4314C0(*(char **)(a1 + 32));
  if ( result != 0 )
  {
    v3 = (FILE *)result;
    for ( i = *(_DWORD *)(a1 + 16); i != 0; *(_DWORD *)(a1 + 4 * i + 36) = 0 )
    {
      --i;
      free(*(void **)(a1 + 4 * i + 36));
    }
    memset(Str, 0, 0x3FCu);
    *(_DWORD *)(a1 + 28) = 0;
    while ( 1 )
    {
      Block = (char *)sub_470E94();
      v6 = Block;
      if ( Block == nullptr )
        break;
      if ( *Block != 0 )
      {
        free(Str[i]);
        Str[i] = v6;
        ++*(_DWORD *)(a1 + 28);
        if ( *(_DWORD *)(a1 + 24) == ++i )
          i = 0;
      }
      else
      {
        free(Block);
      }
    }
    fclose(v3);
    if ( *(_DWORD *)(a1 + 28) != 0 )
    {
      while ( Str[i] == nullptr )
      {
        if ( ++i == *(_DWORD *)(a1 + 24) )
          i = 0;
      }
    }
    for ( j = 0; ; *(_DWORD *)(a1 + 4 * j + 32) = v8 )
    {
      result = *(_DWORD *)(a1 + 24);
      if ( result <= j )
        break;
      v8 = Str[i];
      if ( v8 == nullptr )
        break;
      if ( result == ++i )
        i = 0;
      if ( strlen(v8) > 0x3FF )
        v8[1023] = 0;
      ++j;
    }
    *(_DWORD *)(a1 + 16) = j;
  }
  return result;
}

