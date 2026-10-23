// busybox.exe @ 0x459d18 size=228

int __cdecl sub_459D18(int a1, char *Str, int a3)
{
  void *v3; // edx
  int result; // eax
  int v5; // edi
  char v6; // al
  char *v7; // eax
  int v8; // eax
  int v9; // ebx

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = malloc(0x100u);
  *(_DWORD *)(a1 + 16) = v3;
  result = 12;
  if ( v3 != nullptr )
  {
    v5 = ((a3 & 1) == 0 ? 8454854 : 242428) | (a3 << 20) & 0x200000;
    v6 = 0;
    if ( (a3 & 4) != 0 )
    {
      v5 = ((a3 & 1) == 0 ? 8454854 : 242428) & 0xFFFEBF | (a3 << 20) & 0x200000 | 0x100;
      v6 = 1;
    }
    *(_BYTE *)(a1 + 28) = *(_BYTE *)(a1 + 28) & 0x6F | (v6 << 7) | (16 * ((a3 & 8) != 0));
    *(_DWORD *)(a1 + 20) = 0;
    v7 = (char *)strlen(Str);
    v8 = sub_453610(a1, Str, v7, v5);
    v9 = v8;
    if ( v8 == 16 )
    {
      v9 = 8;
    }
    else if ( v8 == 0 )
    {
      sub_453480(a1);
      return v9;
    }
    free(*(void **)(a1 + 16));
    *(_DWORD *)(a1 + 16) = 0;
    return v9;
  }
  return result;
}

