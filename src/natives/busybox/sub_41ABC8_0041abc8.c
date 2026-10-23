// busybox.exe @ 0x41abc8 size=88

unsigned int sub_41ABC8()
{
  int *v0; // edx
  unsigned int v1; // ebx
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int result; // eax

  v0 = (int *)dword_486010;
  v1 = *(_DWORD *)dword_486010;
  v2 = *(_DWORD *)(dword_486010 + 28);
  v3 = *(_DWORD *)(dword_486010 + 20);
  if ( (dword_486008 & 0x80u) == 0 )
  {
    result = v3 + 1;
    if ( v2 + v1 > result )
    {
      result -= v2;
      *(_DWORD *)dword_486010 = result;
    }
    if ( *v0 < 0 )
      *v0 = 0;
  }
  else
  {
    if ( v1 > v3 )
      *(_DWORD *)dword_486010 = v3;
    result = v0[6] + 1;
    if ( v2 + *(_DWORD *)(*(_DWORD *)(v0[13] + 4 * *v0) - 4) > result )
    {
      sub_4367F0();
      return sub_457958();
    }
  }
  return result;
}

