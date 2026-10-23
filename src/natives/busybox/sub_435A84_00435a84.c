// busybox.exe @ 0x435a84 size=35

int __cdecl sub_435A84(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  bool v4; // zf

  v4 = *a4 == 0;
  *a4 = 1;
  if ( v4 )
    return -1;
  *a3 = a2;
  return 1;
}

