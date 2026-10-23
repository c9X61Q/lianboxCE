// busybox.exe @ 0x40f9e0 size=62

int __cdecl sub_40F9E0(int a1)
{
  int *v1; // eax
  unsigned int v2; // ebx
  int v3; // edx

  v1 = (int *)(a1 + 20);
  v2 = a1 + 20 + 4 * *(_DWORD *)(a1 + 16);
  v3 = 0;
  if ( a1 + 20 < v2 )
  {
    while ( 1 )
    {
      _ECX = *v1;
      if ( *v1 != 0 )
        break;
      ++v1;
      v3 += 32;
      if ( v2 <= (unsigned int)v1 )
        return v3;
    }
    if ( v2 > (unsigned int)v1 )
    {
      __asm { tzcnt   ecx, ecx }
      v3 += _ECX;
    }
  }
  return v3;
}

