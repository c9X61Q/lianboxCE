// busybox.exe @ 0x415cf4 size=64

int sub_415CF4()
{
  unsigned int v0; // ebx
  unsigned int v1; // edx
  int v2; // ecx

  v0 = *(_DWORD *)(dword_486010 + 20);
  v1 = *(_DWORD *)dword_486010;
  if ( (dword_486008 & 0x80u) == 0 )
  {
    LOBYTE(v2) = *(_DWORD *)(dword_486010 + 28) + v1 >= v0;
    return (unsigned __int8)v2;
  }
  v2 = 1;
  if ( v0 >= v1 )
  {
    LOBYTE(v2) = *(_DWORD *)(dword_486010 + 24) <= (unsigned int)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_486010 + 52)
                                                                                        + 4 * v1)
                                                                            - 4)
                                                                + *(_DWORD *)(dword_486010 + 28));
    return (unsigned __int8)v2;
  }
  return v2;
}

