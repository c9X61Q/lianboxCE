// busybox.exe @ 0x434f34 size=47

int sub_434F34()
{
  void *v0; // ebx
  int result; // eax

  v0 = dword_48600C;
  if ( (**(_BYTE **)dword_48600C & 1) != 0
    && *(_DWORD *)(*(_DWORD *)dword_48600C + 20) < *(_DWORD *)(*(_DWORD *)dword_48600C + 16) )
  {
    sub_45C65C();
    result = *(_DWORD *)(*(_DWORD *)v0 + 20) + 1;
    *(_DWORD *)(*(_DWORD *)v0 + 20) = result;
  }
  else
  {
    sub_418A3C();
    return 0;
  }
  return result;
}

