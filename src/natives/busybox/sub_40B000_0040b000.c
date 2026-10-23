// busybox.exe @ 0x40b000 size=33

int __cdecl sub_40B000(int *a1)
{
  if ( a1 != nullptr )
    *a1 = *errno();
  return *errno();
}

