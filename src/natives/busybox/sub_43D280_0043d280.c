// busybox.exe @ 0x43d280 size=339

// positive sp value has been detected, the output may be wrong!
int __usercall sub_43D280@<eax>(char a1@<al>, int a2@<ecx>)
{
  unsigned int v2; // eax
  void *v3; // esp
  int v4; // eax
  int v5; // edx
  int (__cdecl *v6)(_DWORD, int); // ecx
  int v7; // ebx
  int v8; // eax
  HANDLE Toolhelp32Snapshot; // eax
  _DWORD *v10; // edx
  void *v11; // ebp
  int v12; // esi
  int *v13; // ebx
  int v14; // esi
  int v15; // eax
  DWORD th32ProcessID; // ecx
  DWORD th32ParentProcessID; // edx
  _DWORD *v18; // edi
  BOOL v19; // eax
  BOOL v20; // eax
  _DWORD *v21; // edx
  int v22; // ebx
  _DWORD *v23; // ecx
  int *v24; // esi
  _DWORD *v26; // [esp-10134h] [ebp-10148h]
  _DWORD *v27; // [esp-10130h] [ebp-10144h]
  int v28; // [esp-1012Ch] [ebp-10140h]
  int (__cdecl *v29)(_DWORD, int); // [esp-10128h] [ebp-1013Ch]
  PROCESSENTRY32 v30; // [esp-10124h] [ebp-10138h] BYREF
  _DWORD v31[16383]; // [esp-FFFCh] [ebp-10010h] BYREF

  v2 = sub_4115D8(0x10134u, a2, a1);
  v3 = alloca(v2);
  v4 = *(int *)((char *)&v26 + v2);
  v28 = v5;
  v29 = v6;
  if ( v4 <= 0 )
  {
    if ( v4 != 0 )
      v8 = -v4;
    else
      v8 = getpid();
    v31[0] = v8;
    Toolhelp32Snapshot = CreateToolhelp32Snapshot(2u, 0);
    v27 = v10;
    v26 = v10;
    v11 = Toolhelp32Snapshot;
    v12 = 1;
    if ( Toolhelp32Snapshot == (HANDLE)-1 )
    {
      v13 = _errno();
      *v13 = sub_429CD0();
      return -1;
    }
LABEL_15:
    memset(&v30, 0, sizeof(v30));
    v18 = v31;
    v30.dwSize = 296;
    v20 = Process32First(v11, &v30);
    v27 = v21;
    v26 = v21;
    v7 = v12;
    if ( v20 )
    {
      while ( 1 )
      {
        v15 = v7 - 1;
        th32ProcessID = v30.th32ProcessID;
        th32ParentProcessID = v30.th32ParentProcessID;
        while ( v15 >= 0 )
        {
          v18 = (_DWORD *)v31[v15];
          if ( v18 == (_DWORD *)th32ProcessID )
            break;
          if ( v18 == (_DWORD *)th32ParentProcessID )
            v31[v7++] = th32ProcessID;
          --v15;
        }
        if ( v7 > 0x3FFF )
          break;
        v19 = Process32Next(v11, &v30);
        v27 = v18;
        v26 = v18;
        if ( !v19 )
        {
          if ( v12 == v7 )
            break;
          v12 = v7;
          goto LABEL_15;
        }
      }
    }
    CloseHandle(v11);
    v26 = (_DWORD *)v12;
  }
  else
  {
    v31[0] = v4;
    v7 = 1;
  }
  v22 = v7 - 1;
  v14 = 0;
  while ( v22 >= 0 )
  {
    SetLastError(0);
    v26 = v23;
    if ( v29(v31[v22], v28) != 0 )
    {
      v24 = _errno();
      *v24 = sub_429CD0();
      v14 = -1;
    }
    --v22;
  }
  return v14;
}

