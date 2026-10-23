// busybox.exe @ 0x46db44 size=275

int __usercall sub_46DB44@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // ebp
  HANDLE *lpHandles; // esi
  int v7; // eax
  DWORD nCount; // ebx
  _DWORD *v9; // edx
  void *v10; // edi
  DWORD v11; // edi
  unsigned int i; // [esp+10h] [ebp-24h]
  int v14; // [esp+14h] [ebp-20h]
  DWORD ExitCode[5]; // [esp+20h] [ebp-14h] BYREF

  v2 = dword_4732C4;
  v3 = 0;
  while ( v2 != 0 )
  {
    if ( *(_BYTE *)(v2 + 24) != 2 )
      v3 += *(_DWORD *)(v2 + 20);
    v2 = *(_DWORD *)(v2 + 28);
  }
  v4 = -1;
  if ( v3 != 0 )
  {
    v5 = (_DWORD *)sub_470E78();
    lpHandles = (HANDLE *)sub_470E78();
    v7 = dword_4732C4;
    nCount = 0;
    while ( v7 != 0 )
    {
      if ( *(_BYTE *)(v7 + 24) != 2 )
      {
        v9 = *(_DWORD **)(v7 + 16);
        for ( i = 0; *(_DWORD *)(v7 + 20) > i; ++i )
        {
          v10 = (void *)v9[1];
          if ( v10 != nullptr )
          {
            v14 = nCount;
            v5[nCount++] = *v9;
            lpHandles[v14] = v10;
          }
          v9 += 4;
        }
      }
      v7 = *(_DWORD *)(v7 + 28);
    }
    if ( nCount != 0 && (v11 = WaitForMultipleObjects(nCount, lpHandles, false, a2 == 0 ? -1 : 1), nCount > v11) )
    {
      GetExitCodeProcess(lpHandles[v11], ExitCode);
      *a1 = ExitCode[0] << 8;
      v4 = v5[v11];
    }
    else
    {
      v4 = -1;
    }
    sub_4631A8(v5);
    sub_4631A8(lpHandles);
  }
  return v4;
}

