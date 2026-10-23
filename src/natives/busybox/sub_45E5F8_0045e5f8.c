// busybox.exe @ 0x45e5f8 size=123

int __cdecl sub_45E5F8(char *VarName, const char *a2, int a3)
{
  int v3; // ebx
  char *Str; // esi

  v3 = a3;
  if ( VarName == nullptr || *VarName == 0 || strchr(VarName, 61) != nullptr || a2 == nullptr )
    return -1;
  if ( a3 != 0 || getenv(VarName) == nullptr )
  {
    Str = (char *)sub_4708BC("%s=%s", VarName, a2);
    v3 = sub_443A9C(Str);
    free(Str);
  }
  return v3;
}

