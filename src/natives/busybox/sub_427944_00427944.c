// busybox.exe @ 0x427944 size=29

unsigned int sub_427944()
{
  unsigned int result; // eax

  sub_468398();
  result = *(_DWORD *)(dword_486010 + 8);
  if ( result > *(_DWORD *)dword_486010 && *(_BYTE *)(result - 1) != 10 )
    *(_DWORD *)(dword_486010 + 8) = --result;
  return result;
}

