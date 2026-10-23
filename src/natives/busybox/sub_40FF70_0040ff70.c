// busybox.exe @ 0x40ff70 size=63

void __cdecl sub_40FF70()
{
  if ( _InterlockedExchange(&dword_485948, 3) == 2 )
  {
    DeleteCriticalSection(&stru_485960);
    DeleteCriticalSection(&stru_485978);
  }
}

