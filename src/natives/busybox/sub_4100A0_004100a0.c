// busybox.exe @ 0x4100a0 size=88

void __cdecl sub_4100A0(void *Block)
{
  int v1; // eax
  bool v2; // zf
  int v3; // edx

  if ( Block != nullptr )
  {
    if ( *((int *)Block + 1) <= 9 )
    {
      sub_40FE90(0);
      v1 = *((_DWORD *)Block + 1);
      v2 = dword_485948 == 2;
      v3 = dword_485920[v1];
      dword_485920[v1] = (int)Block;
      *(_DWORD *)Block = v3;
      if ( v2 )
        LeaveCriticalSection(&stru_485960);
    }
    else
    {
      free(Block);
    }
  }
}

