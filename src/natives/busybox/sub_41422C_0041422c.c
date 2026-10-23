// busybox.exe @ 0x41422c size=97

int __cdecl sub_41422C(char *Str)
{
  const char *v1; // ebx
  int v2; // eax
  int v3; // esi

  v1 = (const char *)sub_4460B4(Str);
  strlen(Str);
  if ( v1 != nullptr )
    strlen(v1);
  v2 = sub_470E78();
  v3 = v2;
  if ( v1 == nullptr )
    v1 = (const char *)&unk_4774F6;
  sub_462748(v2, "%s%s", v1, Str);
  return v3;
}

