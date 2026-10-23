// busybox.exe @ 0x43c518 size=95

int __usercall sub_43C518@<eax>(_DWORD *a1@<eax>)
{
  int i; // ecx

  if ( dword_473394 == 0 )
    return 0;
  for ( i = *(_DWORD *)(dword_473394 + 4 * (a1[2] % 0x137u)); i != 0; i = *(_DWORD *)(i + 12) )
  {
    if ( a1[3] == *(_DWORD *)(i + 4)
      && a1[2] == *(_DWORD *)i
      && *(_DWORD *)(i + 8) == *a1
      && *(_BYTE *)(i + 16) == ((a1[4] & 0xF000) == 0x4000) )
    {
      i += 17;
      return i;
    }
  }
  return i;
}

