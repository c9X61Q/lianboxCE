// busybox.exe @ 0x42e580 size=119

int __cdecl sub_42E580(int a1, int a2)
{
  void *Block; // esi
  _BYTE *v3; // eax
  _DWORD *v4; // ebx

  if ( *(_DWORD *)(a2 + 4) != 0 )
  {
    v4 = (_DWORD *)(a2 + 4);
    do
    {
      sub_460FB8();
      sub_42E728();
      ++v4;
    }
    while ( *v4 != 0 );
  }
  else
  {
    while ( 1 )
    {
      off_4730E8(0);
      Block = (void *)sub_470E94();
      if ( Block == nullptr )
        break;
      while ( *(_BYTE *)sub_460FB8() != 0 )
      {
        v3 = (_BYTE *)sub_460E8C();
        if ( *v3 != 0 )
          *v3 = 0;
        sub_42E728();
      }
      free(Block);
    }
  }
  return 0;
}

