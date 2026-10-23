// busybox.exe @ 0x45b414 size=44

int __cdecl sub_45B414(char *a1)
{
  if ( a1 == nullptr )
    return 0;
  if ( (unsigned __int8)((*a1 | 0x20) - 97) <= 0x19u && a1[1] == 58 )
    return 2;
  return sub_468114(a1);
}

