// busybox.exe @ 0x4015c0 size=28

int sub_4015C0()
{
  int result; // eax

  result = dword_4859C0;
  if ( dword_4859C0 == 0 )
  {
    dword_4859C0 = 1;
    return sub_401560();
  }
  return result;
}

