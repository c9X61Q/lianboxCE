// busybox.exe @ 0x4645e0 size=28

int __cdecl sub_4645E0(int a1)
{
  int result; // eax

  result = 100;
  if ( a1 != 2 )
  {
    *_errno() = 22;
    return -1;
  }
  return result;
}

