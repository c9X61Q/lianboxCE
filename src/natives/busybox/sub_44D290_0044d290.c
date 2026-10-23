// busybox.exe @ 0x44d290 size=1415

int __cdecl sub_44D290(int a1, int a2, int a3)
{
  int v3; // edi
  DWORD v4; // ebp
  __int16 v5; // dx
  void *osfhandle; // ebx
  BOOL ConsoleMode; // eax
  struct _SECURITY_ATTRIBUTES *v8; // edx
  int v9; // eax
  u_int fd_count; // edx
  int i; // eax
  u_int v12; // edx
  int j; // ecx
  u_int v14; // edx
  int k; // ecx
  __int16 v16; // ax
  DWORD v17; // ebx
  int v18; // edi
  HANDLE v19; // ebx
  int v20; // ebp
  __int16 v21; // ax
  int Error; // ebx
  __int16 v23; // ax
  LPSECURITY_ATTRIBUTES lpEventAttributes; // [esp+0h] [ebp-4D8h]
  BOOL bManualReset; // [esp+4h] [ebp-4D4h]
  int v27; // [esp+14h] [ebp-4C4h]
  int v28; // [esp+14h] [ebp-4C4h]
  char lNetworkEvents; // [esp+18h] [ebp-4C0h]
  int v30; // [esp+1Ch] [ebp-4BCh]
  int v31; // [esp+20h] [ebp-4B8h]
  int v32; // [esp+28h] [ebp-4B0h]
  struct tagMSG Msg; // [esp+2Ch] [ebp-4ACh] BYREF
  struct _WSANETWORKEVENTS NetworkEvents; // [esp+48h] [ebp-490h] BYREF
  struct _WSANETWORKEVENTS Mode; // [esp+74h] [ebp-464h] BYREF
  fd_set readfds; // [esp+B4h] [ebp-424h] BYREF
  fd_set writefds; // [esp+1B8h] [ebp-320h] BYREF
  fd_set exceptfds; // [esp+2BCh] [ebp-21Ch] BYREF
  HANDLE pHandles[70]; // [esp+3C0h] [ebp-118h] BYREF

  if ( a3 < -1 || a2 < 0 )
  {
    *_errno() = 22;
    return -1;
  }
  if ( dword_473368 == nullptr )
    dword_473368 = CreateEventA(nullptr, false, false, nullptr);
  while ( 2 )
  {
    pHandles[0] = dword_473368;
    readfds.fd_count = 0;
    writefds.fd_count = 0;
    exceptfds.fd_count = 0;
    v3 = 0;
    v4 = 1;
    while ( v3 != a2 )
    {
      v5 = *(_WORD *)(a1 + 8 * v3 + 4);
      v32 = v5;
      *(_WORD *)(a1 + 8 * v3 + 6) = 0;
      if ( *(int *)(a1 + 8 * v3) >= 0 && (v5 & 0x3C7) != 0 )
      {
        osfhandle = (void *)_get_osfhandle(*(_DWORD *)(a1 + 8 * v3));
        ConsoleMode = GetConsoleMode(osfhandle, (LPDWORD)&Mode);
        bManualReset = (BOOL)v8;
        lpEventAttributes = v8;
        if ( ConsoleMode
          || (Mode.lNetworkEvents = -559038737,
              WSAEnumNetworkEvents((SOCKET)osfhandle, nullptr, &Mode),
              Mode.lNetworkEvents == -559038737) )
        {
          v16 = sub_46F450(lpEventAttributes, bManualReset);
          *(_WORD *)(a1 + 8 * v3 + 6) = v16;
          if ( v32 != 0 )
            pHandles[v4++] = osfhandle;
          if ( v16 != 0 )
            a3 = 0;
        }
        else
        {
          v9 = 32;
          if ( (v32 & 0x41) != 0 )
          {
            fd_count = readfds.fd_count;
            for ( i = 0; readfds.fd_count != i; ++i )
            {
              if ( (void *)readfds.fd_array[i] == osfhandle )
              {
                v9 = 41;
                goto LABEL_20;
              }
            }
            v9 = 41;
            if ( readfds.fd_count != 64 )
            {
              readfds.fd_array[readfds.fd_count] = (SOCKET)osfhandle;
              readfds.fd_count = fd_count + 1;
            }
          }
LABEL_20:
          if ( (v32 & 0x304) != 0 )
          {
            v9 |= 0x12u;
            v12 = writefds.fd_count;
            for ( j = 0; writefds.fd_count != j; ++j )
            {
              if ( (void *)writefds.fd_array[j] == osfhandle )
                goto LABEL_27;
            }
            if ( writefds.fd_count != 64 )
            {
              writefds.fd_array[writefds.fd_count] = (SOCKET)osfhandle;
              writefds.fd_count = v12 + 1;
            }
          }
LABEL_27:
          if ( (v32 & 0x82) != 0 )
          {
            v9 |= 4u;
            v14 = exceptfds.fd_count;
            for ( k = 0; exceptfds.fd_count != k; ++k )
            {
              if ( (void *)exceptfds.fd_array[k] == osfhandle )
                goto LABEL_34;
            }
            if ( exceptfds.fd_count != 64 )
            {
              exceptfds.fd_array[exceptfds.fd_count] = (SOCKET)osfhandle;
              exceptfds.fd_count = v14 + 1;
            }
          }
LABEL_34:
          WSAEventSelect((SOCKET)osfhandle, dword_473368, v9);
        }
      }
      ++v3;
    }
    v28 = 0;
    v17 = 0;
    if ( select(0, &readfds, &writefds, &exceptfds, &stru_4735AC) <= 0 )
    {
      v28 = 1;
      v17 = a3;
    }
    while ( v4 == MsgWaitForMultipleObjects(v4, pHandles, false, v17, 0x4FFu) )
    {
      while ( PeekMessageA(&Msg, nullptr, 0, 0, 1u) )
      {
        TranslateMessage(&Msg);
        DispatchMessageA(&Msg);
      }
    }
    if ( v28 != 0 )
      select(0, &readfds, &writefds, &exceptfds, &stru_4735AC);
    pHandles[v4] = nullptr;
    v18 = 0;
    v27 = 0;
    v30 = 1;
    while ( v18 != a2 )
    {
      if ( *(int *)(a1 + 8 * v18) >= 0 && (*(_WORD *)(a1 + 8 * v18 + 4) & 0x345) != 0 )
      {
        v19 = (HANDLE)_get_osfhandle(*(_DWORD *)(a1 + 8 * v18));
        if ( pHandles[v30] == v19 )
        {
          Mode.lNetworkEvents = *(__int16 *)(a1 + 8 * v18 + 4);
          v21 = ((int (*)(void))sub_46F450)();
          ++v30;
        }
        else
        {
          WSAEnumNetworkEvents((SOCKET)v19, nullptr, &NetworkEvents);
          WSAEventSelect((SOCKET)v19, nullptr, 0);
          if ( _WSAFDIsSet((SOCKET)v19, &readfds) != 0 && (NetworkEvents.lNetworkEvents & 9) == 0 )
            NetworkEvents.lNetworkEvents |= 9u;
          if ( _WSAFDIsSet((SOCKET)v19, &writefds) != 0 )
            NetworkEvents.lNetworkEvents |= 0x12u;
          if ( _WSAFDIsSet((SOCKET)v19, &exceptfds) != 0 )
            NetworkEvents.lNetworkEvents |= 4u;
          lNetworkEvents = NetworkEvents.lNetworkEvents;
          v20 = *(_DWORD *)(a1 + 8 * v18 + 4);
          v21 = NetworkEvents.lNetworkEvents & 0x29;
          if ( (NetworkEvents.lNetworkEvents & 0x29) == 8 )
          {
LABEL_63:
            v21 = v20 & 0x41;
          }
          else if ( (NetworkEvents.lNetworkEvents & 0x29) != 0 )
          {
            WSASetLastError(0);
            v31 = recv((SOCKET)v19, (char *)&Mode, 64, 2);
            Error = WSAGetLastError();
            WSASetLastError(0);
            if ( v31 > 0 || Error == 10057 )
              goto LABEL_63;
            if ( Error == 10058 || v31 == 0 || (v21 = 8, (unsigned int)(Error - 10052) <= 2) )
              v21 = 16;
          }
          if ( (lNetworkEvents & 0x12) != 0 )
            v21 |= v20 & 0x304;
          if ( (lNetworkEvents & 4) != 0 )
            v21 |= v20 & 0x82;
        }
        v23 = *(_WORD *)(a1 + 8 * v18 + 6) | v21;
        *(_WORD *)(a1 + 8 * v18 + 6) = v23;
        v27 -= (v23 == 0) - 1;
      }
      ++v18;
    }
    if ( v27 == 0 && a3 == -1 )
    {
      SleepEx(1u, true);
      continue;
    }
    return v27;
  }
}

