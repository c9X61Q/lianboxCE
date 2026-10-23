// busybox.exe @ 0x4368bc size=33

void *sub_4368BC()
{
  void *result; // eax

  sub_452A78();
  result = dword_48600C;
  if ( *((_DWORD *)dword_48600C + 5) == 0 || *((_DWORD *)dword_48600C + 2) != 0 )
    return (void *)sub_418130(10);
  return result;
}

