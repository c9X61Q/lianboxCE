// busybox.exe @ 0x4362fc size=87

int __cdecl sub_4362FC(char *Str2)
{
  const char *Str1; // eax
  int v3; // [esp+10h] [ebp+4h]

  Str1 = sub_4358EC();
  if ( Str1 != nullptr && strcmp(Str1, Str2) == 0 )
  {
    v3 = 4095;
    return sub_436354(v3);
  }
  if ( strcmp(Str2, "root") == 0 )
  {
    v3 = 0;
    return sub_436354(v3);
  }
  return 0;
}

