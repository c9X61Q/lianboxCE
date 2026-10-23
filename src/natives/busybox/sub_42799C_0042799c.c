// busybox.exe @ 0x42799c size=32

_BYTE *sub_42799C()
{
  _BYTE *result; // eax

  sub_468398();
  result = *(_BYTE **)(dword_486010 + 8);
  if ( (unsigned int)result < *(_DWORD *)(dword_486010 + 4) - 1 && *result != 10 )
    *(_DWORD *)(dword_486010 + 8) = ++result;
  return result;
}

