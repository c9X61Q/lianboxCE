// gettime.exe @ 0x41c060 size=540

int __cdecl _write_nolock(int FileHandle, const void *a2, DWORD a3, __crt_cached_ptd_host *a4)
{
  int v4; // ecx
  int v6; // edi
  int v7; // eax
  char v8; // al
  int v9; // edi
  DWORD *v10; // eax
  DWORD *p_LastError; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  void *v15; // ecx
  int *v16; // esi
  DWORD LastError; // [esp+Ch] [ebp-30h] BYREF
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-2Ch] BYREF
  int v19; // [esp+14h] [ebp-28h]
  DWORD v20; // [esp+18h] [ebp-24h]
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+28h] [ebp-14h]
  int v25; // [esp+2Ch] [ebp-10h]
  DWORD nNumberOfBytesToWrite; // [esp+30h] [ebp-Ch]
  LPCVOID lpBuffer; // [esp+34h] [ebp-8h]
  char v28; // [esp+3Bh] [ebp-1h]

  v4 = FileHandle;
  v25 = FileHandle;
  lpBuffer = a2;
  nNumberOfBytesToWrite = a3;
  if ( a3 != 0 )
  {
    if ( a2 == nullptr
      || ((v6 = 56 * (FileHandle & 0x3F),
           v24 = FileHandle >> 6,
           v7 = dword_438A48[FileHandle >> 6],
           v23 = v6,
           v8 = *(_BYTE *)(v6 + v7 + 41),
           v28 = v8,
           v8 == 2)
       || v8 == 1)
      && (a3 & 1) != 0 )
    {
      *((_BYTE *)a4 + 36) = 1;
      *((_DWORD *)a4 + 8) = 0;
      *((_BYTE *)a4 + 28) = 1;
      *((_DWORD *)a4 + 6) = 22;
      _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a4);
      return -1;
    }
    if ( (*(_BYTE *)(v6 + dword_438A48[v24] + 40) & 0x20) != 0 )
    {
      _lseeki64_nolock_internal(FileHandle, 0, 2u, (int)a4);
      v4 = v25;
    }
    v9 = 0;
    v20 = 0;
    if ( write_requires_double_translation_nolock(v4, a4) )
    {
      if ( v28 != 0 )
      {
        if ( (unsigned int)(v28 - 1) > 1 )
        {
LABEL_28:
          v12 = v24;
          v13 = v23;
LABEL_29:
          if ( v9 != 0 )
          {
            if ( v9 == 5 )
            {
              *((_BYTE *)a4 + 28) = 1;
              *((_DWORD *)a4 + 6) = 9;
              *((_BYTE *)a4 + 36) = 1;
              *((_DWORD *)a4 + 8) = 5;
            }
            else
            {
              __acrt_errno_map_os_error_ptd(v9, (int)a4);
            }
            return -1;
          }
          if ( (*(_BYTE *)(dword_438A48[v12] + v13 + 40) & 0x40) == 0 || *(_BYTE *)lpBuffer != 26 )
          {
            *((_BYTE *)a4 + 28) = 1;
            *((_DWORD *)a4 + 6) = 28;
            *((_BYTE *)a4 + 36) = 1;
            *((_DWORD *)a4 + 8) = 0;
            return -1;
          }
          return 0;
        }
        v10 = write_double_translated_unicode_nolock(&LastError, (unsigned int)lpBuffer, nNumberOfBytesToWrite);
      }
      else
      {
        v10 = write_double_translated_ansi_nolock(&LastError, v25, (void *)lpBuffer, nNumberOfBytesToWrite, a4);
      }
    }
    else
    {
      v12 = v24;
      v13 = v23;
      v14 = dword_438A48[v24];
      if ( *(char *)(v14 + v23 + 40) >= 0 )
      {
        v15 = *(void **)(v14 + v23 + 24);
        LastError = 0;
        NumberOfBytesWritten = 0;
        v19 = 0;
        if ( !WriteFile(v15, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, nullptr) )
          LastError = GetLastError();
        p_LastError = &LastError;
        goto LABEL_26;
      }
      if ( v28 != 0 )
      {
        if ( v28 == 1 )
        {
          v10 = write_text_utf8_nolock(&LastError, v25, (unsigned int)lpBuffer, nNumberOfBytesToWrite);
        }
        else
        {
          if ( v28 != 2 )
            goto LABEL_29;
          v10 = write_text_utf16le_nolock(&LastError, v25, (unsigned __int16 *)lpBuffer, nNumberOfBytesToWrite);
        }
      }
      else
      {
        v10 = write_text_ansi_nolock(&LastError, v25, (unsigned int)lpBuffer, nNumberOfBytesToWrite);
      }
    }
    p_LastError = v10;
LABEL_26:
    v20 = *p_LastError;
    v16 = (int *)(p_LastError + 1);
    v21 = *v16;
    v22 = v16[1];
    if ( v21 != 0 )
      return v21 - v22;
    v9 = v20;
    goto LABEL_28;
  }
  return 0;
}

