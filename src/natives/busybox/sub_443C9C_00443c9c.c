// busybox.exe @ 0x443c9c size=2684

int __cdecl sub_443C9C(int a1, fd_set *a2, fd_set *a3, unsigned int *a4, _DWORD *a5)
{
  int v5; // esi
  int v6; // ecx
  u_int i; // esi
  int v8; // ebx
  void *osfhandle; // edi
  BOOL ConsoleMode; // eax
  char v11; // dl
  int v12; // eax
  BOOL NumberOfConsoleInputEvents; // eax
  void *v14; // esp
  u_int j; // esi
  int v16; // ebx
  void *v17; // edi
  BOOL v18; // eax
  char v19; // dl
  int v20; // eax
  BOOL v21; // eax
  void *v22; // esp
  _BYTE *v23; // esi
  _BYTE *k; // ebx
  int v25; // eax
  int v26; // edx
  void *v27; // esp
  int v28; // edi
  unsigned int v29; // esi
  int v30; // eax
  void *v31; // eax
  void *v32; // ebx
  int v33; // edx
  int v34; // eax
  unsigned int fd_count; // eax
  int m; // edx
  u_int v37; // edx
  int n; // eax
  int v39; // edx
  int ii; // ecx
  u_int v41; // edx
  int jj; // ecx
  int v43; // edx
  unsigned int v44; // edx
  int kk; // ecx
  u_int v46; // edx
  int mm; // ecx
  DWORD v48; // esi
  clock_t v49; // eax
  DWORD v50; // eax
  int v51; // edx
  int v52; // edi
  unsigned int v53; // ebx
  int v54; // eax
  HANDLE v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // ebx
  int v60; // eax
  unsigned __int8 v61; // cf
  HANDLE v62; // edi
  DWORD v63; // edx
  DWORD v64; // eax
  int i3; // edx
  DWORD v66; // eax
  int i4; // edx
  unsigned int v68; // eax
  int i5; // edx
  int v70; // eax
  int nn; // edi
  DWORD v72; // edi
  int v73; // eax
  int i1; // edi
  DWORD v75; // edi
  int v76; // eax
  int i2; // edx
  char dwMilliseconds; // [esp+0h] [ebp-4B4h]
  int v80; // [esp+14h] [ebp-4A0h]
  unsigned int v81; // [esp+18h] [ebp-49Ch]
  int v82; // [esp+18h] [ebp-49Ch]
  int v83; // [esp+1Ch] [ebp-498h]
  signed int v84; // [esp+1Ch] [ebp-498h]
  int v85; // [esp+1Ch] [ebp-498h]
  int v86; // [esp+20h] [ebp-494h] BYREF
  DWORD nCount; // [esp+24h] [ebp-490h]
  DWORD v88; // [esp+28h] [ebp-48Ch]
  DWORD NumberOfEvents[3]; // [esp+2Ch] [ebp-488h] BYREF
  _BYTE v90[16]; // [esp+38h] [ebp-47Ch] BYREF
  _BYTE v91[16]; // [esp+48h] [ebp-46Ch] BYREF
  _BYTE v92[16]; // [esp+58h] [ebp-45Ch] BYREF
  struct _WSANETWORKEVENTS v93; // [esp+68h] [ebp-44Ch] BYREF
  fd_set readfds; // [esp+94h] [ebp-420h] BYREF
  fd_set writefds; // [esp+198h] [ebp-31Ch] BYREF
  fd_set Mode; // [esp+29Ch] [ebp-218h] BYREF
  HANDLE pHandles[69]; // [esp+3A0h] [ebp-114h] BYREF

  if ( a5 == nullptr )
  {
    v88 = -1;
LABEL_5:
    if ( hEventObject == nullptr )
      hEventObject = CreateEventA(nullptr, false, false, nullptr);
    pHandles[0] = hEventObject;
    memset(v90, 0, sizeof(v90));
    memset(v91, 0, sizeof(v91));
    memset(v92, 0, sizeof(v92));
    memset(&NumberOfEvents[1], 0, 8u);
    v6 = 0;
    if ( a2 != nullptr )
    {
      for ( i = 0; a2->fd_count > i; ++i )
      {
        v8 = a2->fd_array[i];
        osfhandle = (void *)_get_osfhandle(v8);
        ConsoleMode = GetConsoleMode(osfhandle, &Mode.fd_count);
        dwMilliseconds = v11;
        if ( ConsoleMode )
        {
          NumberOfConsoleInputEvents = GetNumberOfConsoleInputEvents(osfhandle, NumberOfEvents);
          dwMilliseconds = v6;
          if ( !NumberOfConsoleInputEvents )
            continue;
        }
        v12 = v8 / 8;
        v6 = v8 & 7;
        v90[v12] |= 1 << v6;
        *((_BYTE *)&NumberOfEvents[1] + v12) |= 1 << v6;
      }
    }
    else
    {
      v14 = alloca(sub_4115D8(0x110u, 0, dwMilliseconds));
      a2 = (fd_set *)&v86;
    }
    if ( a3 != nullptr )
    {
      for ( j = 0; a3->fd_count > j; ++j )
      {
        v16 = a3->fd_array[j];
        v17 = (void *)_get_osfhandle(v16);
        v18 = GetConsoleMode(v17, &Mode.fd_count);
        dwMilliseconds = v19;
        if ( v18 )
        {
          v21 = GetNumberOfConsoleInputEvents(v17, NumberOfEvents);
          dwMilliseconds = v6;
          if ( v21 )
            continue;
        }
        v20 = v16 / 8;
        v6 = v16 & 7;
        v91[v20] |= 1 << (v16 & 7);
        *((_BYTE *)&NumberOfEvents[1] + v20) |= 1 << (v16 & 7);
      }
    }
    else
    {
      v22 = alloca(sub_4115D8(0x110u, v6, dwMilliseconds));
      a3 = (fd_set *)&v86;
    }
    if ( a4 != nullptr )
    {
      v23 = (_BYTE *)*a4;
      for ( k = nullptr; v23 != k; ++k )
      {
        nCount = a4[(_DWORD)k + 1];
        v25 = (int)nCount / 8;
        v26 = 1 << (nCount & 7);
        v92[v25] |= v26;
        *((_BYTE *)&NumberOfEvents[1] + v25) |= v26;
      }
    }
    else
    {
      v27 = alloca(sub_4115D8(0x110u, v6, dwMilliseconds));
      a4 = (unsigned int *)&v86;
    }
    v86 = a1;
    if ( a1 > 64 )
      v86 = 64;
    a2->fd_count = 0;
    a3->fd_count = 0;
    *a4 = 0;
    readfds.fd_count = 0;
    writefds.fd_count = 0;
    Mode.fd_count = 0;
    v28 = 0;
    v80 = 0;
    nCount = 1;
    while ( v28 < v86 )
    {
      v83 = v28 >> 3;
      v29 = v28 & 7;
      v30 = *((unsigned __int8 *)&NumberOfEvents[1] + (v28 >> 3));
      if ( !_bittest(&v30, v29) )
        goto LABEL_81;
      v31 = (void *)_get_osfhandle(v28);
      v32 = v31;
      if ( v31 == nullptr )
      {
        *_errno() = 9;
        return -1;
      }
      if ( !GetConsoleMode(v31, (LPDWORD)&v93) )
      {
        v93.lNetworkEvents = -559038737;
        WSAEnumNetworkEvents((SOCKET)v32, nullptr, &v93);
        if ( v93.lNetworkEvents != -559038737 )
        {
          v33 = (unsigned __int8)v90[v83];
          v34 = 32;
          if ( _bittest(&v33, v29) )
          {
            fd_count = a2->fd_count;
            for ( m = 0; fd_count != m; ++m )
            {
              if ( (void *)a2->fd_array[m] == v32 )
                goto LABEL_44;
            }
            if ( fd_count <= 0x3F )
            {
              a2->fd_array[fd_count] = (SOCKET)v32;
              a2->fd_count = fd_count + 1;
            }
LABEL_44:
            v37 = readfds.fd_count;
            for ( n = 0; readfds.fd_count != n; ++n )
            {
              if ( (void *)readfds.fd_array[n] == v32 )
              {
                v34 = 41;
                goto LABEL_51;
              }
            }
            v34 = 41;
            if ( readfds.fd_count != 64 )
            {
              readfds.fd_array[readfds.fd_count] = (SOCKET)v32;
              readfds.fd_count = v37 + 1;
            }
          }
LABEL_51:
          v39 = (unsigned __int8)v91[v83];
          if ( _bittest(&v39, v29) )
          {
            v34 |= 0x12u;
            v81 = a3->fd_count;
            for ( ii = 0; v81 != ii; ++ii )
            {
              if ( (void *)a3->fd_array[ii] == v32 )
                goto LABEL_58;
            }
            if ( v81 <= 0x3F )
            {
              a3->fd_array[v81] = (SOCKET)v32;
              a3->fd_count = v81 + 1;
            }
LABEL_58:
            v41 = writefds.fd_count;
            for ( jj = 0; writefds.fd_count != jj; ++jj )
            {
              if ( (void *)writefds.fd_array[jj] == v32 )
                goto LABEL_64;
            }
            if ( writefds.fd_count != 64 )
            {
              writefds.fd_array[writefds.fd_count] = (SOCKET)v32;
              writefds.fd_count = v41 + 1;
            }
          }
LABEL_64:
          v43 = (unsigned __int8)v92[v83];
          if ( _bittest(&v43, v29) )
          {
            v34 |= 4u;
            v44 = *a4;
            for ( kk = 0; v44 != kk; ++kk )
            {
              if ( (void *)a4[kk + 1] == v32 )
                goto LABEL_71;
            }
            if ( v44 <= 0x3F )
            {
              a4[v44 + 1] = (unsigned int)v32;
              *a4 = v44 + 1;
            }
LABEL_71:
            v46 = Mode.fd_count;
            for ( mm = 0; Mode.fd_count != mm; ++mm )
            {
              if ( (void *)Mode.fd_array[mm] == v32 )
                goto LABEL_77;
            }
            if ( Mode.fd_count != 64 )
            {
              Mode.fd_array[Mode.fd_count] = (SOCKET)v32;
              Mode.fd_count = v46 + 1;
            }
          }
LABEL_77:
          WSAEventSelect((SOCKET)v32, hEventObject, v34);
          ++v80;
LABEL_81:
          v48 = nCount;
          goto LABEL_82;
        }
      }
      v48 = nCount + 1;
      pHandles[nCount] = v32;
      if ( v88 != 0 && sub_46F694(v90, v28, v91, v92) != 0 )
        v88 = 0;
LABEL_82:
      ++v28;
      nCount = v48;
    }
    pHandles[nCount] = nullptr;
    v84 = 0;
    if ( v88 != -1 )
      v84 = v88 + clock();
    while ( 1 )
    {
      if ( v88 == 0 )
        goto LABEL_86;
      if ( v80 == 0 )
        goto LABEL_90;
      v5 = select(0, &readfds, &writefds, &Mode, &timeout);
      if ( v5 == 0 )
        break;
LABEL_92:
      v49 = clock();
      v88 = 0;
      if ( v49 <= v84 )
        v88 = v84 - v49;
LABEL_94:
      while ( 1 )
      {
        v50 = MsgWaitForMultipleObjects(nCount, pHandles, false, v88, 0x4FFu);
        if ( nCount != v50 )
          break;
        while ( PeekMessageA((LPMSG)&v93, nullptr, 0, 0, 1u) )
        {
          TranslateMessage((const MSG *)&v93);
          DispatchMessageA((const MSG *)&v93);
        }
      }
      if ( v5 == 0 && v80 != 0 )
        v5 = select(0, &readfds, &writefds, &Mode, &timeout);
      if ( nCount <= 1 )
        goto LABEL_117;
      v51 = 0;
      nCount = 1;
      while ( v51 < v86 )
      {
        v52 = v51 >> 3;
        v53 = v51 & 7;
        v54 = *((unsigned __int8 *)&NumberOfEvents[1] + (v51 >> 3));
        if ( _bittest(&v54, v53) )
        {
          v82 = v51;
          v55 = (HANDLE)_get_osfhandle(v51);
          v51 = v82;
          if ( pHandles[nCount] == v55 )
          {
            ++nCount;
            sub_46F694(v90, v82, v91, v92);
            v56 = (unsigned __int8)v90[v52 + 8];
            v51 = v82;
            if ( _bittest(&v56, v53)
              || (v57 = (unsigned __int8)v91[v52 + 8], _bittest(&v57, v53))
              || (v58 = (unsigned __int8)v92[v52 + 8], _bittest(&v58, v53)) )
            {
              ++v5;
            }
          }
        }
        ++v51;
      }
      if ( v5 != 0 )
        goto LABEL_117;
      if ( v88 != -1 )
      {
        if ( v88 == 0 )
        {
          if ( a5 != nullptr )
          {
            a5[1] = 0;
            *a5 = 0;
          }
LABEL_117:
          a2->fd_count = 0;
          a3->fd_count = 0;
          *a4 = 0;
          v59 = 0;
          nCount = 1;
          while ( 2 )
          {
            if ( v59 >= v86 )
              return v5;
            v60 = *((unsigned __int8 *)&NumberOfEvents[1] + (v59 >> 3));
            v85 = v59 >> 3;
            v61 = _bittest(&v60, v59 & 7);
            v88 = v59 & 7;
            if ( v61 )
            {
              v62 = (HANDLE)_get_osfhandle(v59);
              v63 = v88;
              if ( pHandles[nCount] == v62 )
              {
                ++nCount;
                v70 = (unsigned __int8)v90[v85 + 8];
                if ( _bittest(&v70, v88) )
                {
                  v88 = a2->fd_count;
                  for ( nn = 0; v88 != nn; ++nn )
                  {
                    if ( v59 == a2->fd_array[nn] )
                      goto LABEL_147;
                  }
                  if ( v88 <= 0x3F )
                  {
                    v72 = v88;
                    a2->fd_array[v88] = v59;
                    a2->fd_count = v72 + 1;
                  }
                }
LABEL_147:
                v73 = (unsigned __int8)v91[v85 + 8];
                if ( _bittest(&v73, v63) )
                {
                  v88 = a3->fd_count;
                  for ( i1 = 0; v88 != i1; ++i1 )
                  {
                    if ( v59 == a3->fd_array[i1] )
                      goto LABEL_154;
                  }
                  if ( v88 <= 0x3F )
                  {
                    v75 = v88;
                    a3->fd_array[v88] = v59;
                    a3->fd_count = v75 + 1;
                  }
                }
LABEL_154:
                v76 = (unsigned __int8)v92[v85 + 8];
                if ( _bittest(&v76, v63) )
                {
                  v68 = *a4;
                  for ( i2 = 0; v68 != i2; ++i2 )
                  {
                    if ( a4[i2 + 1] == v59 )
                      goto LABEL_161;
                  }
LABEL_159:
                  if ( v68 <= 0x3F )
                  {
                    a4[v68 + 1] = v59;
                    *a4 = v68 + 1;
                  }
                }
              }
              else
              {
                WSAEventSelect((SOCKET)v62, nullptr, 0);
                if ( _WSAFDIsSet((SOCKET)v62, &readfds) != 0 )
                {
                  v64 = a2->fd_count;
                  for ( i3 = 0; v64 != i3; ++i3 )
                  {
                    if ( v59 == a2->fd_array[i3] )
                      goto LABEL_128;
                  }
                  if ( v64 <= 0x3F )
                  {
                    a2->fd_array[v64] = v59;
                    a2->fd_count = v64 + 1;
                  }
                }
LABEL_128:
                if ( _WSAFDIsSet((SOCKET)v62, &writefds) != 0 )
                {
                  v66 = a3->fd_count;
                  for ( i4 = 0; v66 != i4; ++i4 )
                  {
                    if ( v59 == a3->fd_array[i4] )
                      goto LABEL_135;
                  }
                  if ( v66 <= 0x3F )
                  {
                    a3->fd_array[v66] = v59;
                    a3->fd_count = v66 + 1;
                  }
                }
LABEL_135:
                if ( _WSAFDIsSet((SOCKET)v62, &Mode) != 0 )
                {
                  v68 = *a4;
                  for ( i5 = 0; v68 != i5; ++i5 )
                  {
                    if ( a4[i5 + 1] == v59 )
                      goto LABEL_161;
                  }
                  goto LABEL_159;
                }
              }
            }
LABEL_161:
            ++v59;
            continue;
          }
        }
        if ( nCount <= 1 )
          goto LABEL_117;
      }
      readfds = *a2;
      writefds = *a3;
      Mode = *(fd_set *)a4;
      SleepEx(1u, true);
    }
    readfds = *a2;
    writefds = *a3;
    Mode = *(fd_set *)a4;
LABEL_90:
    v5 = 0;
    if ( v88 == -1 )
      goto LABEL_94;
LABEL_86:
    v5 = 0;
    goto LABEL_92;
  }
  v88 = 1000 * *a5 + a5[1] / 1000;
  if ( ((unsigned int)a2 | (unsigned int)a4 | (unsigned int)a3) != 0 )
    goto LABEL_5;
  Sleep(v88);
  return 0;
}

