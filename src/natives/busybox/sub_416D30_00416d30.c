// busybox.exe @ 0x416d30 size=160

BOOL __cdecl sub_416D30(int a1, int a2)
{
  int v2; // esi
  const char *Str1; // eax
  const char *v4; // edi
  size_t v5; // ebx
  size_t v6; // eax
  size_t v7; // ebp

  v2 = a2;
  Str1 = *(const char **)(a2 + 4);
  if ( Str1 != nullptr && strcmp(Str1, "--") == 0 )
    v2 = a2 + 4;
  if ( *(_DWORD *)(v2 + 4) == 0 )
LABEL_5:
    sub_418164();
  v4 = (const char *)sub_417A68();
  v5 = strlen(v4);
  if ( *(_DWORD *)(v2 + 8) != 0 )
  {
    if ( *(_DWORD *)(v2 + 12) != 0 )
      goto LABEL_5;
    v6 = strlen(*(const char **)(v2 + 8));
    if ( v5 > v6 )
    {
      v7 = v5 - v6;
      if ( strcmp(&v4[v5 - v6], *(const char **)(v2 + 8)) == 0 )
        v5 = v7;
    }
  }
  v4[v5] = 10;
  return v5 + 1 != sub_43269C(v5 + 1, v4);
}

