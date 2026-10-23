// gettime.exe @ 0x41cdf3 size=442

unsigned int __cdecl translate_text_mode_nolock<wchar_t>(int FileHandle, __int16 *a2, int a3)
{
  int v3; // edi
  int v4; // eax
  __int16 *v5; // eax
  __int16 *v6; // esi
  int v7; // ecx
  unsigned int v8; // edx
  __int16 v9; // ax
  int v10; // edx
  char v11; // ah
  int v12; // edx
  __int16 v13; // ax
  int v14; // edx
  char v15; // al
  HANDLE hFile; // [esp+Ch] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  unsigned int v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h]
  __int16 *Buffer; // [esp+24h] [ebp-4h] BYREF

  v3 = 56 * (FileHandle & 0x3F);
  v22 = FileHandle >> 6;
  v4 = dword_438A48[FileHandle >> 6];
  NumberOfBytesRead = 10;
  hFile = *(HANDLE *)(v4 + v3 + 24);
  if ( a3 != 0 && *a2 == 10 )
    *(_BYTE *)(v4 + v3 + 40) |= 4u;
  else
    *(_BYTE *)(v4 + v3 + 40) &= ~4u;
  v5 = a2;
  v21 = (unsigned int)&a2[a3];
  v6 = a2;
  Buffer = a2;
  if ( (unsigned int)a2 < v21 )
  {
    v20 = 13;
    while ( 1 )
    {
      v7 = (unsigned __int16)*v5;
      v19 = v7;
      v8 = v21;
      if ( v7 == 26 )
        break;
      ++v5;
      if ( (_WORD)v7 == (_WORD)v20 )
      {
        if ( (unsigned int)v5 >= v21 )
        {
          if ( ReadFile(hFile, &Buffer, 2u, &NumberOfBytesRead, nullptr) && NumberOfBytesRead != 0 )
          {
            v10 = v22;
            if ( (*(_BYTE *)(dword_438A48[v22] + v3 + 40) & 0x48) != 0 )
            {
              v11 = BYTE1(Buffer);
              HIWORD(Buffer) = (_WORD)Buffer;
              if ( (_WORD)Buffer == 10 )
              {
                *v6 = 10;
              }
              else
              {
                *v6 = 13;
                *(_BYTE *)(dword_438A48[v10] + v3 + 42) = BYTE2(Buffer);
                v12 = v22;
                *(_BYTE *)(dword_438A48[v22] + v3 + 43) = v11;
                *(_BYTE *)(dword_438A48[v12] + v3 + 44) = 10;
              }
              return ((char *)++v6 - (char *)a2) & 0xFFFFFFFE;
            }
            v13 = 10;
            if ( (_WORD)Buffer == 10 && v6 == a2 )
            {
LABEL_23:
              *v6 = v13;
              return ((char *)++v6 - (char *)a2) & 0xFFFFFFFE;
            }
            _lseeki64_nolock(FileHandle, (LARGE_INTEGER)-2LL, 1u);
            if ( (_WORD)Buffer == 10 )
              return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
          }
          v13 = 13;
          goto LABEL_23;
        }
        v9 = *v5;
        Buffer += (v9 == (__int16)NumberOfBytesRead) + 1;
        v8 = v21;
        *v6 = v9 == 10 ? 10 : 13;
        v5 = Buffer;
      }
      else
      {
        Buffer = v5;
        *v6 = v7;
      }
      ++v6;
      if ( (unsigned int)v5 >= v8 )
        return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
    }
    v14 = dword_438A48[v22];
    v15 = *(_BYTE *)(v14 + v3 + 40);
    if ( (v15 & 0x40) == 0 )
    {
      *(_BYTE *)(v14 + v3 + 40) = v15 | 2;
      return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
    }
    *v6 = 26;
    return ((char *)++v6 - (char *)a2) & 0xFFFFFFFE;
  }
  return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
}

