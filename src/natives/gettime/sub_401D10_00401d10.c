// gettime.exe @ 0x401d10 size=112

char *__cdecl sub_401D10(char *Str)
{
  char *v2; // [esp+0h] [ebp-Ch]
  size_t Count; // [esp+8h] [ebp-4h]

  Count = strlen(Str) + 1;
  v2 = (char *)calloc(Count, 1u);
  if ( v2 == nullptr )
    sub_408AFF();
  qmemcpy(v2, Str, Count);
  return v2;
}

