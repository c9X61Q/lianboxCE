// busybox.exe @ 0x4356c8 size=83

int sub_4356C8()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int result; // eax

  if ( dword_473324 == 0 )
  {
    v0 = sub_436354(0);
    if ( v0 != 0 )
    {
      v1 = sub_45B414(*(char **)(v0 + 12));
      if ( v1 != 0 )
        dword_473324 = sub_4718A8(v2, v1);
    }
  }
  result = sub_44328C("BB_SYSTEMROOT");
  if ( result == 0 )
    return dword_473324;
  return result;
}

