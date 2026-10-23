// lian86.exe @ 0x0040de99  size=301  name=sub_40DE99
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

char *__stdcall sub_40DE99(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  char *v5; // esi
  _DWORD *i; // eax
  _DWORD *v7; // edi
  int v8; // eax
  char *v9; // eax

  v4 = a1 + 4;
  v5 = nullptr;
  if ( (((_BYTE)a1 + 4) & 3) != 0 )
    v4 += 4 - (((_BYTE)a1 + 4) & 3);
  if ( (a4 & 4) != 0 )
  {
    sub_40E0C3(&Destination, (int)sub_40E062);
    EnterCriticalSection(&stru_418684);
    for ( i = (_DWORD *)dword_418680; i != nullptr; i = (_DWORD *)*i )
    {
      if ( i[3] == v4 && i[4] == a4 )
      {
        ++i[5];
        v5 = (char *)i[2];
        if ( v5 != nullptr )
          goto LABEL_16;
        break;
      }
    }
    v7 = HeapAlloc(hHeap, 0, 0x18u);
    if ( v7 != nullptr )
    {
      v5 = (char *)sub_40DE99(v4 - 4, a2, a3, a4 & 0xFFFFFFFB);
      if ( v5 != nullptr )
      {
        v8 = dword_418680;
        *((_DWORD *)v5 + 2) = v7;
        v7[1] = 0;
        v7[2] = v5;
        v7[3] = v4;
        v7[4] = a4;
        v7[5] = 1;
        *v7 = v8;
        if ( v8 != 0 )
          *(_DWORD *)(v8 + 4) = v7;
        dword_418680 = (int)v7;
      }
    }
LABEL_16:
    LeaveCriticalSection(&stru_418684);
  }
  else
  {
    v9 = (char *)HeapAlloc(hHeap, 0, 0x38u);
    v5 = v9;
    if ( v9 != nullptr )
    {
      *((_DWORD *)v9 + 5) = a2;
      *((_DWORD *)v9 + 6) = a3;
      *(_DWORD *)v9 = 0;
      *((_DWORD *)v9 + 1) = 0;
      *((_DWORD *)v9 + 2) = 0;
      *((_DWORD *)v9 + 4) = v4;
      if ( (a4 & 3u) < 2 )
      {
        *((_DWORD *)v9 + 7) = 1;
        InitializeCriticalSection((LPCRITICAL_SECTION)(v9 + 32));
      }
      else
      {
        *((_DWORD *)v9 + 7) = 0;
      }
    }
  }
  return v5;
}

