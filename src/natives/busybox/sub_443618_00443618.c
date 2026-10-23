// busybox.exe @ 0x443618 size=308

FILE *__cdecl sub_443618(char *a1, _BYTE *a2)
{
  char *v2; // esi
  char *v4; // eax
  int v5; // ebx
  const char *Str; // eax
  size_t v7; // eax
  char *v8; // eax
  char *v9; // ebx
  const char *v10; // eax
  char *i; // eax
  char v12; // dl
  int v13; // edx
  FILE *v14; // eax
  const char *v15; // eax
  size_t v16; // [esp+Ch] [ebp-14h]
  FILE *v17; // [esp+Ch] [ebp-14h]

  v2 = a1;
  if ( a1 == nullptr || *a1 == 0 || a2 == nullptr || *a2 != 119 && *a2 != 114 )
    return nullptr;
  if ( sub_430ADC(-1) == nullptr )
    return nullptr;
  v4 = a1;
  v5 = 0;
  while ( *v4 != 0 )
  {
    if ( *v4 == 34 )
      ++v5;
    ++v4;
  }
  Str = sub_433530();
  v16 = strlen(Str);
  v7 = strlen(a1);
  v8 = (char *)malloc(v5 + v16 + v7 + 32);
  v9 = v8;
  if ( v8 == nullptr )
    return nullptr;
  *v8 = 0;
  if ( sub_430048("sh") >= 0 )
  {
    v10 = sub_433530();
    sub_462868(v9, "%s --busybox ", v10);
  }
  strcat(v9, "sh -c \"");
  for ( i = &v9[strlen(v9)]; ; ++i )
  {
    v12 = *v2;
    if ( *v2 == 0 )
      break;
    if ( v12 == 34 )
      *i++ = 92;
    *i = v12;
    ++v2;
  }
  *(_WORD *)i = 34;
  v13 = sub_44376C(a2, v9, -1, 0);
  v14 = nullptr;
  if ( v13 != -1 )
  {
    v15 = "rb";
    if ( *a2 != 114 )
      v15 = "wb";
    v14 = fdopen(v13, v15);
  }
  v17 = v14;
  free(v9);
  return v17;
}

