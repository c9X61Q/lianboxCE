// gettime.exe @ 0x419028 size=176

void __cdecl initialize_stdio_handles_nolock()
{
  int i; // edi
  int v1; // esi
  HANDLE StdHandle; // eax
  HANDLE v3; // ebx
  DWORD FileType; // eax

  for ( i = 0; i != 3; ++i )
  {
    v1 = dword_438A48[i >> 6] + 56 * (i & 0x3F);
    if ( *(_DWORD *)(v1 + 24) == -1 || *(_DWORD *)(v1 + 24) == -2 )
    {
      *(_BYTE *)(v1 + 40) = -127;
      if ( i != 0 )
      {
        if ( i == 1 )
          StdHandle = GetStdHandle(0xFFFFFFF5);
        else
          StdHandle = GetStdHandle(0xFFFFFFF4);
      }
      else
      {
        StdHandle = GetStdHandle(0xFFFFFFF6);
      }
      v3 = StdHandle;
      if ( StdHandle != (HANDLE)-1 && StdHandle != nullptr && (FileType = GetFileType(StdHandle)) != 0 )
      {
        *(_DWORD *)(v1 + 24) = v3;
        if ( (unsigned __int8)FileType == 2 )
        {
          *(_BYTE *)(v1 + 40) |= 0x40u;
        }
        else if ( (unsigned __int8)FileType == 3 )
        {
          *(_BYTE *)(v1 + 40) |= 8u;
        }
      }
      else
      {
        *(_BYTE *)(v1 + 40) |= 0x40u;
        *(_DWORD *)(v1 + 24) = -2;
        if ( dword_4388B8 != nullptr )
          *(_DWORD *)(*((_DWORD *)dword_4388B8 + i) + 16) = -2;
      }
    }
    else
    {
      *(_BYTE *)(v1 + 40) |= 0x80u;
    }
  }
}

