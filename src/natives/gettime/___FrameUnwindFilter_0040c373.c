// gettime.exe @ 0x40c373 size=85

int __cdecl __FrameUnwindFilter(int a1)
{
  _DWORD *v1; // edi
  int v2; // eax
  int v4; // esi

  v1 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 == -532462766 || *v1 == -532459699 )
  {
    if ( *(int *)(__vcrt_getptd() + 24) > 0 )
    {
      v2 = __vcrt_getptd();
      --*(_DWORD *)(v2 + 24);
    }
  }
  else if ( *v1 == -529697949 )
  {
    *(_DWORD *)(__vcrt_getptd() + 16) = v1;
    v4 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(__vcrt_getptd() + 20) = v4;
    terminate();
  }
  return 0;
}

