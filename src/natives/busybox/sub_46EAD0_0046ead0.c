// busybox.exe @ 0x46ead0 size=29

unsigned int sub_46EAD0()
{
  int v0; // eax

  v0 = dword_486010;
  LOBYTE(v0) = *(_BYTE *)(dword_486010 + 120);
  if ( (unsigned __int8)v0 <= 0x19u )
    return v0 + 97;
  LOBYTE(v0) = (_BYTE)v0 == 27;
  return ((v0 - 1) & 0xFFFFFFEF) + 85;
}

