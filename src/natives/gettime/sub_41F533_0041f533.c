// gettime.exe @ 0x41f533 size=198

int __cdecl sub_41F533(LPCWCH lpWideCharStr, struct __crt_win32_buffer_empty_debug_info *a2, int a3, unsigned int a4)
{
  struct __crt_win32_buffer_empty_debug_info *v4; // esi
  int result; // eax
  size_t v6; // eax
  DWORD v7; // eax
  int v8; // eax
  DWORD LastError; // eax

  if ( lpWideCharStr == nullptr )
  {
    v4 = a2;
    unknown_libname_84((int)a2);
    *((_DWORD *)a2 + 2) = 0;
    *((_DWORD *)a2 + 3) = 0;
LABEL_3:
    *((_DWORD *)v4 + 4) = 0;
    return 0;
  }
  if ( *lpWideCharStr != 0 )
  {
    v6 = __acrt_WideCharToMultiByte(a4, 0, lpWideCharStr, -1, nullptr, 0, nullptr, nullptr);
    if ( v6 != 0 )
    {
      if ( v6 <= *((_DWORD *)a2 + 3) || (result = sub_41FAD1(a2, v6)) == 0 )
      {
        v8 = unknown_libname_83(a4, lpWideCharStr, *((LPSTR *)a2 + 2), *((_DWORD *)a2 + 3));
        if ( v8 != 0 )
        {
          *((_DWORD *)a2 + 4) = v8 - 1;
          return 0;
        }
        else
        {
          LastError = GetLastError();
          __acrt_errno_map_os_error(LastError);
          return *_errno();
        }
      }
    }
    else
    {
      v7 = GetLastError();
      __acrt_errno_map_os_error(v7);
      return *_errno();
    }
  }
  else
  {
    v4 = a2;
    if ( *((_DWORD *)a2 + 3) != 0 || (result = sub_41FAD1(a2, 1u)) == 0 )
    {
      **((_BYTE **)a2 + 2) = 0;
      goto LABEL_3;
    }
  }
  return result;
}

