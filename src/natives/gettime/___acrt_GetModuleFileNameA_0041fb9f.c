// gettime.exe @ 0x41fb9f size=161

int __cdecl __acrt_GetModuleFileNameA(HMODULE hModule, int a2, int a3)
{
  DWORD LastError; // eax
  unsigned int utf8_acp_compatibility_codepage; // eax
  int v6[4]; // [esp+0h] [ebp-22Ch] BYREF
  int v7; // [esp+10h] [ebp-21Ch]
  char v8; // [esp+14h] [ebp-218h]
  WCHAR WideCharStr[2]; // [esp+1Bh] [ebp-211h] BYREF

  if ( GetModuleFileNameW(hModule, (WCHAR *)((char *)WideCharStr + 1), 0x105u) != 0 )
  {
    v7 = 0;
    v6[0] = a2;
    v6[1] = a3;
    v6[2] = a2;
    v6[3] = a3;
    v8 = 0;
    utf8_acp_compatibility_codepage = __acrt_get_utf8_acp_compatibility_codepage();
    __acrt_convert_wcs_mbs_cp<wchar_t,char,_lambda_0fec1a7b3f42a53036604e18c2d5e07e_,__crt_win32_buffer_no_resizing>(
      (WCHAR *)((char *)WideCharStr + 1),
      (int)v6,
      (int)WideCharStr,
      utf8_acp_compatibility_codepage);
    return v7;
  }
  else
  {
    LastError = GetLastError();
    __acrt_errno_map_os_error(LastError);
    return 0;
  }
}

