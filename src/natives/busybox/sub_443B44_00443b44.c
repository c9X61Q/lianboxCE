// busybox.exe @ 0x443b44 size=65

int __cdecl sub_443B44(int a1, void *a2, unsigned int a3)
{
  if ( dword_4735D8 == a1 )
  {
    memset(a2, 0, a3);
    return a3;
  }
  else if ( dword_47356C == a1 )
  {
    return sub_4352AC((int)a2, a3);
  }
  else
  {
    return read(a1, a2, a3);
  }
}

