// busybox.exe @ 0x43b070 size=29

void *sub_43B070()
{
  void *result; // eax

  result = dword_48600C;
  if ( *((_DWORD *)dword_48600C + 5) != 0 )
  {
    sub_43B090();
    return (void *)sub_43B124();
  }
  return result;
}

