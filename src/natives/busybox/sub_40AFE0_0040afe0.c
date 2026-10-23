// busybox.exe @ 0x40afe0 size=25

int __cdecl sub_40AFE0(int a1)
{
  *errno() = a1;
  return *errno();
}

