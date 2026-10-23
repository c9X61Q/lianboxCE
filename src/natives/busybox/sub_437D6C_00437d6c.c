// busybox.exe @ 0x437d6c size=87

BOOL __cdecl sub_437D6C(char *Str)
{
  int v1; // esi

  v1 = 1;
  if ( strchr(Str, 47) == nullptr && strchr(Str, 92) == nullptr )
  {
    v1 = 0;
    if ( (unsigned __int8)((*Str | 0x20) - 97) <= 0x19u )
      return Str[1] == 58;
  }
  return v1;
}

