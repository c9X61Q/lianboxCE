// gettime.exe @ 0x40a66c size=30

void __cdecl _freea_crt(int a1)
{
  if ( a1 != 0 && *(_DWORD *)(a1 - 8) == 56797 )
    free((void *)(a1 - 8));
}

