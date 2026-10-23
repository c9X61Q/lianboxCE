// busybox.exe @ 0x435514 size=131

int __usercall sub_435514@<eax>(int a1@<eax>, int a2@<edx>)
{
  const char *Str; // ebx
  int i; // edi
  const char *v5; // ebx
  size_t v6; // eax
  int v7; // ecx
  void *v8; // ebx
  int v10; // [esp+8h] [ebp-10h]

  Str = *(const char **)(dword_486010 + 4 * *(unsigned __int16 *)(*(_DWORD *)(dword_486010 + 4 * a1 + 105560) + 2));
  for ( i = 1; i != a2; ++i )
  {
    v5 = &Str[strcspn(Str, " ")];
    Str = &v5[strspn(v5, " ")];
  }
  v6 = strcspn(Str, " \n");
  v8 = (void *)sub_4718A8(v7, v6);
  v10 = sub_45CD18();
  free(v8);
  return v10;
}

