// busybox.exe @ 0x419264 size=61

int __usercall sub_419264@<eax>(int a1@<eax>)
{
  int v1; // edx

  if ( (dword_486008 & 0x80u) == 0 )
  {
    v1 = *(_DWORD *)dword_486010 - a1;
    if ( v1 < 0 )
      *(_DWORD *)dword_486010 = 0;
    else
      *(_DWORD *)dword_486010 = v1;
  }
  else
  {
    sub_4367F0();
  }
  sub_457958();
  return sub_418EA0();
}

