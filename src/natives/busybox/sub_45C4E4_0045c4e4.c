// busybox.exe @ 0x45c4e4 size=35

int __usercall sub_45C4E4@<eax>(int a1@<eax>)
{
  unsigned int v1; // edx
  int v2; // edx

  v1 = *(_DWORD *)(dword_486010 + 20);
  if ( v1 <= a1 )
    a1 = v1 - 1;
  v2 = 0;
  if ( a1 >= 0 )
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_486010 + 52) + 4 * a1) - 4) + 1;
  return v2;
}

