// busybox.exe @ 0x459fe8 size=161

int __cdecl sub_459FE8(int a1, char *Str, unsigned int a3, int *a4, int a5)
{
  char *v5; // edx
  int result; // eax
  int v7; // esi
  size_t v8; // ecx
  int v9; // eax

  v5 = Str;
  result = 2;
  if ( (a5 & 0xFFFFFFF8) == 0 )
  {
    v7 = a5 & 4;
    if ( (a5 & 4) != 0 )
    {
      v7 = *a4;
      v8 = a4[1];
    }
    else
    {
      v8 = strlen(Str);
      v5 = Str;
    }
    if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0 )
      v9 = sub_454660(a1, (int)v5, v8, v7, v8 - v7, v8, 0, nullptr, a5);
    else
      v9 = sub_454660(a1, (int)v5, v8, v7, v8 - v7, v8, a3, a4, a5);
    return v9 != 0;
  }
  return result;
}

