// busybox.exe @ 0x401ed0 size=136

int __cdecl sub_401ED0(int a1)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // edx

  if ( dword_485A00 == 0 )
    return 0;
  EnterCriticalSection(&CriticalSection);
  v2 = Block;
  if ( Block != nullptr )
  {
    v3 = nullptr;
    while ( 1 )
    {
      v4 = v2[2];
      if ( *v2 == a1 )
        break;
      v3 = v2;
      if ( v4 == 0 )
        goto LABEL_11;
      v2 = (_DWORD *)v2[2];
    }
    if ( v3 != nullptr )
      v3[2] = v4;
    else
      Block = (void *)v2[2];
    free(v2);
  }
LABEL_11:
  LeaveCriticalSection(&CriticalSection);
  return 0;
}

