// gettime.exe @ 0x41d29b size=907

unsigned int __cdecl _read_nolock(unsigned int FileHandle, LPWSTR lpWideCharStr, DWORD nNumberOfBytesToRead)
{
  int v3; // edi
  int v4; // eax
  void *v5; // esi
  void *v6; // esi
  size_t v7; // ebx
  wchar_t *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // edx
  char v14; // al
  char *v15; // ecx
  int v16; // edx
  _BYTE *v17; // ecx
  bool v18; // zf
  char v19; // al
  int v20; // edx
  _BYTE *v21; // ecx
  char v22; // al
  CHAR *v23; // ebx
  DWORD LastError; // eax
  unsigned int v25; // edi
  DWORD v27; // ecx
  unsigned int v28; // eax
  DWORD v29; // [esp-10h] [ebp-3Ch]
  DWORD v30; // [esp-10h] [ebp-3Ch]
  unsigned int v31; // [esp-8h] [ebp-34h]
  DWORD Mode; // [esp+8h] [ebp-24h] BYREF
  wchar_t *v33; // [esp+Ch] [ebp-20h]
  int v34; // [esp+10h] [ebp-1Ch]
  DWORD NumberOfCharsRead; // [esp+14h] [ebp-18h] BYREF
  HANDLE hConsoleHandle; // [esp+18h] [ebp-14h]
  int v37; // [esp+1Ch] [ebp-10h]
  LPVOID lpBuffer; // [esp+20h] [ebp-Ch]
  unsigned int v39; // [esp+24h] [ebp-8h]
  char v40; // [esp+2Bh] [ebp-1h]

  if ( FileHandle != -2 )
  {
    if ( (FileHandle & 0x80000000) == 0
      && FileHandle < dword_438C48
      && (v3 = 56 * (FileHandle & 0x3F),
          v39 = FileHandle >> 6,
          v34 = 1,
          v4 = dword_438A48[FileHandle >> 6],
          v37 = v3,
          ((v40 = *(_BYTE *)(v3 + v4 + 40)) & 1) != 0) )
    {
      if ( nNumberOfBytesToRead <= 0x7FFFFFFF )
      {
        if ( nNumberOfBytesToRead == 0 || (v40 & 2) != 0 )
          return 0;
        if ( lpWideCharStr != nullptr )
        {
          v5 = *(void **)(v3 + v4 + 24);
          v40 = *(_BYTE *)(v3 + v4 + 41);
          hConsoleHandle = v5;
          v6 = nullptr;
          if ( v40 == 1 )
          {
            if ( (nNumberOfBytesToRead & 1) != 0 )
            {
LABEL_14:
              *__doserrno() = 0;
              *_errno() = 22;
              _invalid_parameter_noinfo();
LABEL_39:
              v25 = -1;
LABEL_40:
              _free_base(v6);
              return v25;
            }
            v7 = 4;
            if ( nNumberOfBytesToRead >> 1 >= 4 )
              v7 = nNumberOfBytesToRead >> 1;
            v6 = _malloc_base(v7);
            _free_base(nullptr);
            _free_base(nullptr);
            lpBuffer = v6;
            if ( v6 == nullptr )
            {
              *_errno() = 12;
              *__doserrno() = 8;
              goto LABEL_39;
            }
            v9 = _lseeki64_nolock(FileHandle, 0, 1u);
            v10 = dword_438A48[v39];
            *(_DWORD *)(v3 + v10 + 32) = v9;
            *(_DWORD *)(v3 + v10 + 36) = v11;
            v8 = (wchar_t *)v6;
          }
          else
          {
            if ( v40 == 2 && (nNumberOfBytesToRead & 1) != 0 )
              goto LABEL_14;
            v7 = nNumberOfBytesToRead;
            v8 = lpWideCharStr;
            lpBuffer = lpWideCharStr;
          }
          v12 = 0;
          v33 = v8;
          NumberOfCharsRead = dword_438A48[v39];
          v13 = FileHandle;
          if ( (*(_BYTE *)(v37 + NumberOfCharsRead + 40) & 0x48) != 0 )
          {
            v14 = *(_BYTE *)(v37 + NumberOfCharsRead + 42);
            v15 = (char *)lpBuffer;
            if ( v14 != 10 && v7 != 0 )
            {
              v16 = v37;
              v12 = 1;
              *(_BYTE *)lpBuffer = v14;
              v17 = v15 + 1;
              --v7;
              v18 = v40 == 0;
              lpBuffer = v17;
              *(_BYTE *)(v16 + dword_438A48[v39] + 42) = 10;
              v13 = FileHandle;
              if ( !v18 )
              {
                v19 = *(_BYTE *)(v37 + dword_438A48[v39] + 43);
                v13 = FileHandle;
                if ( v19 != 10 && v7 != 0 )
                {
                  v20 = v37;
                  *v17 = v19;
                  v21 = v17 + 1;
                  --v7;
                  v18 = v40 == 1;
                  lpBuffer = v21;
                  v12 = 2;
                  *(_BYTE *)(v20 + dword_438A48[v39] + 43) = 10;
                  v13 = FileHandle;
                  if ( v18 )
                  {
                    v22 = *(_BYTE *)(v37 + dword_438A48[v39] + 44);
                    v13 = FileHandle;
                    if ( v22 != 10 && v7 != 0 )
                    {
                      *v21 = v22;
                      --v7;
                      lpBuffer = v21 + 1;
                      v12 = 3;
                      *(_BYTE *)(v37 + dword_438A48[v39] + 44) = 10;
                    }
                  }
                }
              }
            }
          }
          if ( _isatty(v13) != 0 && *(char *)(v37 + dword_438A48[v39] + 40) < 0 && GetConsoleMode(hConsoleHandle, &Mode) )
          {
            if ( v40 == 2 )
            {
              v29 = v7 >> 1;
              v23 = (CHAR *)lpBuffer;
              if ( !ReadConsoleW(hConsoleHandle, lpBuffer, v29, &NumberOfCharsRead, nullptr) )
              {
                LastError = GetLastError();
LABEL_38:
                __acrt_errno_map_os_error(LastError);
                goto LABEL_39;
              }
              v27 = nNumberOfBytesToRead;
              v25 = v12 + 2 * NumberOfCharsRead;
              goto LABEL_46;
            }
          }
          else
          {
            LOBYTE(v34) = 0;
          }
          v30 = v7;
          v23 = (CHAR *)lpBuffer;
          if ( !ReadFile(hConsoleHandle, lpBuffer, v30, &NumberOfCharsRead, nullptr)
            || (v27 = nNumberOfBytesToRead, NumberOfCharsRead > nNumberOfBytesToRead) )
          {
            LastError = GetLastError();
            if ( LastError == 5 )
            {
              *_errno() = 9;
              *__doserrno() = 5;
              goto LABEL_39;
            }
            if ( LastError == 109 )
            {
              v25 = 0;
              goto LABEL_40;
            }
            goto LABEL_38;
          }
          v25 = NumberOfCharsRead + v12;
LABEL_46:
          if ( *(char *)(v37 + dword_438A48[v39] + 40) < 0 )
          {
            if ( v40 == 2 )
            {
              v31 = v25 >> 1;
              if ( (_BYTE)v34 != 0 )
                v28 = translate_utf16_from_console_nolock(FileHandle, v33, v31);
              else
                v28 = translate_text_mode_nolock<wchar_t>(FileHandle, (__int16 *)v33, v31);
            }
            else
            {
              v28 = translate_ansi_or_utf8_nolock(FileHandle, v23, v25, lpWideCharStr, v27 >> 1);
            }
            v25 = v28;
          }
          goto LABEL_40;
        }
      }
      *__doserrno() = 0;
      *_errno() = 22;
    }
    else
    {
      *__doserrno() = 0;
      *_errno() = 9;
    }
    _invalid_parameter_noinfo();
    return -1;
  }
  *__doserrno() = 0;
  *_errno() = 9;
  return -1;
}

