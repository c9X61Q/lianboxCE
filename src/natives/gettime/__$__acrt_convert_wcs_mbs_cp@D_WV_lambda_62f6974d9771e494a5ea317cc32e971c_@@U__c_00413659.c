// gettime.exe @ 0x413659 size=178

int __cdecl __acrt_convert_wcs_mbs_cp<char,wchar_t,_lambda_62f6974d9771e494a5ea317cc32e971c_,__crt_win32_buffer_internal_dynamic_resizing>(
        LPCCH lpMultiByteStr,
        struct __crt_win32_buffer_empty_debug_info *a2,
        int a3,
        UINT CodePage)
{
  struct __crt_win32_buffer_empty_debug_info *v4; // esi
  int result; // eax
  unsigned int v6; // eax
  DWORD LastError; // eax
  int v8; // eax

  if ( lpMultiByteStr == nullptr )
  {
    v4 = a2;
    unknown_libname_84(a2);
    *((_DWORD *)a2 + 2) = 0;
    *((_DWORD *)a2 + 3) = 0;
LABEL_3:
    *((_DWORD *)v4 + 4) = 0;
    return 0;
  }
  if ( *lpMultiByteStr != 0 )
  {
    v6 = __acrt_MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, -1, nullptr, 0);
    if ( v6 != 0 )
    {
      if ( v6 > *((_DWORD *)a2 + 3) )
      {
        result = sub_41384F(a2, v6);
        if ( result != 0 )
          return result;
      }
      v8 = __acrt_MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, -1, *((LPWSTR *)a2 + 2), *((_DWORD *)a2 + 3));
      if ( v8 != 0 )
      {
        *((_DWORD *)a2 + 4) = v8 - 1;
        return 0;
      }
    }
    LastError = GetLastError();
    __acrt_errno_map_os_error(LastError);
    return *_errno();
  }
  v4 = a2;
  if ( *((_DWORD *)a2 + 3) != 0 || (result = sub_41384F(a2, 1)) == 0 )
  {
    **((_WORD **)a2 + 2) = 0;
    goto LABEL_3;
  }
  return result;
}

