// busybox.exe @ 0x413fd0 size=96

int sub_413FD0()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // kr00_8
  _DWORD *v2; // ebx

  v1 = sub_4461C8();
  v0 = __PAIR64__(v1, HIDWORD(v1));
  v2 = dword_486000;
  *(_DWORD *)dword_486000 += 4;
  if ( sub_41C3EC() == 35 )
  {
    *v2 += 4;
    sub_41C3EC();
    HIDWORD(v0) = (__PAIR64__(v1, HIDWORD(v1)) != 0) & (sub_413FD0() != 0);
  }
  else
  {
    *v2 -= 4;
  }
  return HIDWORD(v0);
}

