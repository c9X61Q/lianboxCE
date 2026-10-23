// busybox.exe @ 0x40fe90 size=220

void __usercall sub_40FE90(int a1@<eax>)
{
  int v2; // eax
  __int32 v3; // eax

  if ( dword_485948 == 2 )
    goto LABEL_9;
  if ( dword_485948 != 0 )
  {
    if ( dword_485948 != 1 )
      return;
    do
    {
LABEL_4:
      Sleep(1u);
      v2 = dword_485948;
    }
    while ( dword_485948 == 1 );
    goto LABEL_5;
  }
  v3 = _InterlockedExchange(&dword_485948, 1);
  if ( v3 == 0 )
  {
    InitializeCriticalSection(&stru_485960);
    InitializeCriticalSection(&stru_485978);
    sub_4014D0(sub_40FF70);
    dword_485948 = 2;
    goto LABEL_9;
  }
  if ( v3 == 2 )
  {
    dword_485948 = 2;
    goto LABEL_9;
  }
  v2 = dword_485948;
  if ( dword_485948 == 1 )
    goto LABEL_4;
LABEL_5:
  if ( v2 == 2 )
LABEL_9:
    EnterCriticalSection((LPCRITICAL_SECTION)(24 * a1 + 4741472));
}

