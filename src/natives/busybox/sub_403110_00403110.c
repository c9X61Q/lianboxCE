// busybox.exe @ 0x403110 size=52

int __cdecl sub_403110(int a1)
{
  *errno() = 0;
  if ( a1 != 0 )
    return *(_DWORD *)(a1 + 552);
  *errno() = 14;
  return -1;
}

