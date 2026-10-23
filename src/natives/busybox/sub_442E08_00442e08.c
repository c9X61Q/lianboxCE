// busybox.exe @ 0x442e08 size=97

int __cdecl sub_442E08(const char *a1)
{
  const char *Path; // ebx
  void *v2; // eax
  char *v3; // eax
  _BYTE v5[16]; // [esp+8h] [ebp-64h] BYREF
  int v6; // [esp+18h] [ebp-54h]

  Path = a1;
  if ( sub_443484(a1, v5) != 0 || (v6 & 0xF000) != 0xA000 )
  {
    if ( a1 == nullptr )
      return -1;
  }
  else
  {
    v2 = (void *)sub_471218();
    v3 = (char *)sub_415D34(v2);
    Path = v3;
    if ( v3 == nullptr )
      return -1;
    sub_430E8C(v3);
  }
  return chdir(Path);
}

