// gettime.exe @ 0x41370b size=194

int __cdecl __acrt_convert_wcs_mbs_cp<wchar_t,char,_lambda_0fec1a7b3f42a53036604e18c2d5e07e_,__crt_win32_buffer_no_resizing>(
        LPCWCH lpWideCharStr,
        int a2,
        int a3,
        unsigned int a4)
{
  int result; // eax
  unsigned int v5; // eax
  DWORD v6; // eax
  int v7; // eax
  DWORD LastError; // eax

  if ( lpWideCharStr != nullptr )
  {
    if ( *lpWideCharStr != 0 )
    {
      v5 = __acrt_WideCharToMultiByte(a4, 0, lpWideCharStr, -1, nullptr, 0, 0, 0);
      if ( v5 != 0 )
      {
        if ( v5 <= *(_DWORD *)(a2 + 12) || (result = unknown_libname_85(v5)) == 0 )
        {
          v7 = unknown_libname_83(a4, lpWideCharStr, *(LPSTR *)(a2 + 8), *(_DWORD *)(a2 + 12));
          if ( v7 != 0 )
          {
            *(_DWORD *)(a2 + 16) = v7 - 1;
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
        v6 = GetLastError();
        __acrt_errno_map_os_error(v6);
        return *_errno();
      }
    }
    else if ( *(_DWORD *)(a2 + 12) != 0 || (result = unknown_libname_85(1)) == 0 )
    {
      **(_BYTE **)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 16) = 0;
      return 0;
    }
  }
  else
  {
    __crt_win32_buffer<char,__crt_win32_buffer_no_resizing>::set_to_nullptr(a2);
    return 0;
  }
  return result;
}

