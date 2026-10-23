// gettime.exe @ 0x41cca6 size=333

int __cdecl translate_text_mode_nolock<char>(int FileHandle, _BYTE *a2, int a3)
{
  int v3; // edi
  int v4; // eax
  DWORD v5; // ecx
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  char v8; // dl
  bool v9; // zf
  int v10; // ecx
  char v11; // dl
  _BYTE *v12; // eax
  int v13; // ecx
  char v14; // al
  HANDLE hFile; // [esp+10h] [ebp-14h]
  DWORD NumberOfBytesRead; // [esp+14h] [ebp-10h] BYREF
  int v18; // [esp+18h] [ebp-Ch]
  _BYTE *v19; // [esp+1Ch] [ebp-8h]
  char Buffer; // [esp+23h] [ebp-1h] BYREF

  v3 = 56 * (FileHandle & 0x3F);
  v4 = dword_438A48[FileHandle >> 6];
  v18 = FileHandle >> 6;
  hFile = *(HANDLE *)(v3 + v4 + 24);
  if ( a3 != 0 && *a2 == 10 )
    *(_BYTE *)(v3 + v4 + 40) |= 4u;
  else
    *(_BYTE *)(v3 + v4 + 40) &= ~4u;
  v5 = (DWORD)&a2[a3];
  v6 = a2;
  NumberOfBytesRead = (DWORD)&a2[a3];
  v7 = a2;
  v19 = a2;
  if ( a2 < &a2[a3] )
  {
    do
    {
      v8 = *v6;
      if ( *v6 == 26 )
      {
        v13 = dword_438A48[v18];
        v14 = *(_BYTE *)(v13 + v3 + 40);
        if ( (v14 & 0x40) == 0 )
        {
          *(_BYTE *)(v13 + v3 + 40) = v14 | 2;
          return v7 - a2;
        }
        *v7 = 26;
        return ++v7 - a2;
      }
      ++v6;
      if ( v8 == 13 )
      {
        if ( (unsigned int)v6 >= v5 )
        {
          if ( ReadFile(hFile, &Buffer, 1u, &NumberOfBytesRead, nullptr) && NumberOfBytesRead != 0 )
          {
            v10 = v18;
            if ( (*(_BYTE *)(dword_438A48[v18] + v3 + 40) & 0x48) != 0 )
            {
              v11 = Buffer;
              v12 = v7 + 1;
              if ( Buffer == 10 )
              {
                *v7 = 10;
              }
              else
              {
                *v7 = 13;
                *(_BYTE *)(dword_438A48[v10] + v3 + 42) = v11;
                v12 = v7 + 1;
              }
              v7 = v12;
              return v7 - a2;
            }
            if ( Buffer == 10 && v7 == a2 )
            {
              *v7 = 10;
              return ++v7 - a2;
            }
            _lseeki64_nolock(FileHandle, (LARGE_INTEGER)-1LL, 1u);
            if ( Buffer == 10 )
              return v7 - a2;
          }
          *v7 = 13;
          return ++v7 - a2;
        }
        v9 = *v6 == 10;
        v19 += v9 + 1;
        *v7 = v9 ? 10 : 13;
        v6 = v19;
        v5 = NumberOfBytesRead;
      }
      else
      {
        v19 = v6;
        *v7 = v8;
      }
      ++v7;
    }
    while ( (unsigned int)v6 < v5 );
  }
  return v7 - a2;
}

