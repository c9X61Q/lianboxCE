// busybox.exe @ 0x452a78 size=21

void *sub_452A78()
{
  void *result; // eax

  while ( 1 )
  {
    result = dword_48600C;
    if ( *((_DWORD *)dword_48600C + 5) >= *((_DWORD *)dword_48600C + 6) )
      break;
    sub_4529C4();
  }
  return result;
}

