// gettime.exe @ 0x41cfad size=343

int __cdecl translate_ansi_or_utf8_nolock(
        int FileHandle,
        CHAR *lpMultiByteStr,
        unsigned int a3,
        LPWSTR lpWideCharStr,
        unsigned int cchWideChar)
{
  int result; // eax
  int v6; // ecx
  int v7; // edi
  const CHAR *v8; // eax
  const CHAR *v9; // esi
  int v10; // eax
  unsigned int i; // edx
  char v12; // cl
  char *v13; // esi
  char v14; // cl
  char v15; // cl
  int v16; // esi
  int v17; // eax
  DWORD LastError; // eax
  int v19; // [esp+4h] [ebp-8h]
  int v20; // [esp+8h] [ebp-4h]

  result = translate_text_mode_nolock<char>(FileHandle, lpMultiByteStr, a3);
  v6 = result;
  if ( result != 0 )
  {
    v7 = 56 * (FileHandle & 0x3F);
    v20 = FileHandle >> 6;
    v19 = dword_438A48[FileHandle >> 6];
    if ( *(_BYTE *)(v19 + v7 + 41) != 0 )
    {
      v8 = &lpMultiByteStr[result];
      v9 = &lpMultiByteStr[v6 - 1];
      if ( *v9 < 0 )
      {
        v10 = *(unsigned __int8 *)v9;
        for ( i = 1; byte_437460[v10] == 0 && i <= 4 && v9 >= lpMultiByteStr; ++i )
          v10 = *(unsigned __int8 *)--v9;
        v12 = *v9;
        if ( byte_437460[*(unsigned __int8 *)v9] == 0 )
        {
          *_errno() = 42;
          return -1;
        }
        if ( byte_437460[*(unsigned __int8 *)v9] + 1 == i )
        {
          v9 += i;
        }
        else if ( (*(_BYTE *)(v19 + v7 + 40) & 0x48) != 0 )
        {
          v13 = (char *)(v9 + 1);
          *(_BYTE *)(v19 + v7 + 42) = v12;
          if ( i >= 2 )
          {
            v14 = *v13++;
            *(_BYTE *)(v7 + dword_438A48[v20] + 43) = v14;
          }
          if ( i == 3 )
          {
            v15 = *v13++;
            *(_BYTE *)(v7 + dword_438A48[v20] + 44) = v15;
          }
          v9 = &v13[-i];
        }
        else
        {
          _lseeki64_nolock(FileHandle, (LARGE_INTEGER)-i, 1u);
        }
      }
      else
      {
        v9 = v8;
      }
      v16 = v9 - lpMultiByteStr;
      v17 = __acrt_MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr, v16, lpWideCharStr, cchWideChar);
      if ( v17 == 0 )
      {
        LastError = GetLastError();
        __acrt_errno_map_os_error(LastError);
        return -1;
      }
      *(_BYTE *)(v7 + dword_438A48[v20] + 45) = *(_BYTE *)(v7 + dword_438A48[v20] + 45) & 0xFD | (v17 == v16 ? 0 : 2);
      return 2 * v17;
    }
  }
  return result;
}

