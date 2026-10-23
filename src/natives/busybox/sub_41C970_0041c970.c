// busybox.exe @ 0x41c970 size=99

void __usercall sub_41C970(_DWORD *a1@<eax>)
{
  unsigned int i; // esi
  int Block; // edi
  int v4; // [esp+4h] [ebp-14h]

  for ( i = 0; a1[1] > i; ++i )
  {
    for ( Block = *(_DWORD *)(a1[4] + 4 * i); Block != 0; Block = v4 )
    {
      v4 = *(_DWORD *)(Block + 24);
      free(*(void **)(Block + 16));
      free((void *)Block);
    }
    *(_DWORD *)(a1[4] + 4 * i) = 0;
  }
  *a1 = 0;
  a1[3] = 0;
}

