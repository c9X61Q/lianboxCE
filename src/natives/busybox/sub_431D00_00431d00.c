// busybox.exe @ 0x431d00 size=70

int __usercall sub_431D00@<eax>(int a1@<eax>)
{
  int i; // esi

  if ( a1 == 0 )
    return 0;
  for ( i = 0; *(_DWORD *)a1 > i; ++i )
  {
    free(*(void **)(*(_DWORD *)(a1 + 8) + 24 * i + 20));
    free(*(void **)(*(_DWORD *)(a1 + 8) + 24 * i + 8));
  }
  free(*(void **)(a1 + 8));
  return 0;
}

