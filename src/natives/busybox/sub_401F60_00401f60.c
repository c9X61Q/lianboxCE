// busybox.exe @ 0x401f60 size=223

int __cdecl sub_401F60(int a1, unsigned int a2)
{
  void *v3; // ebx
  void *v4; // eax

  if ( a2 == 2 )
  {
    sub_401770();
    return 1;
  }
  else
  {
    if ( a2 > 2 )
    {
      if ( a2 == 3 && dword_485A00 != 0 )
        sub_401DE0();
    }
    else if ( a2 != 0 )
    {
      if ( dword_485A00 == 0 )
        InitializeCriticalSection(&CriticalSection);
      dword_485A00 = 1;
    }
    else
    {
      if ( dword_485A00 != 0 )
        sub_401DE0();
      if ( dword_485A00 == 1 )
      {
        v3 = Block;
        while ( v3 != nullptr )
        {
          v4 = v3;
          v3 = *((void **)v3 + 2);
          free(v4);
        }
        Block = nullptr;
        dword_485A00 = 0;
        DeleteCriticalSection(&CriticalSection);
      }
    }
    return 1;
  }
}

