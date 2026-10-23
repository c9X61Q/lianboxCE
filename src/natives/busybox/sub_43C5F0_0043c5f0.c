// busybox.exe @ 0x43c5f0 size=64

const char *__usercall sub_43C5F0@<eax>(
        const char *a1@<eax>,
        const char *Str@<edx>,
        int (__cdecl *a3)(const char *, const char *)@<ecx>)
{
  size_t v6; // ebx
  int v7; // eax
  const char *v8; // esi

  v6 = strlen(Str);
  v7 = strlen(a1) - v6;
  if ( v7 < 0 )
    return nullptr;
  v8 = &a1[v7];
  if ( a3(v8, Str) != 0 )
    return nullptr;
  return v8;
}

