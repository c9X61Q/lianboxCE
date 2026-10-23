// gettime.exe @ 0x426951 size=149

BOOL __cdecl __acrt_SetEnvironmentVariableA(LPCCH lpMultiByteStr, LPCCH a2)
{
  BOOL v2; // ebx
  WCHAR *v3; // esi
  UINT utf8_acp_compatibility_codepage; // eax
  UINT v5; // eax
  int v6; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-30h] BYREF
  LPCWSTR lpName; // [esp+10h] [ebp-28h]
  int v10; // [esp+14h] [ebp-24h]
  int v11; // [esp+18h] [ebp-20h]
  char v12; // [esp+1Ch] [ebp-1Ch]
  _DWORD v13[2]; // [esp+20h] [ebp-18h] BYREF
  LPCWSTR lpValue; // [esp+28h] [ebp-10h]
  int v15; // [esp+2Ch] [ebp-Ch]
  int v16; // [esp+30h] [ebp-8h]
  char v17; // [esp+34h] [ebp-4h]

  v2 = false;
  v3 = nullptr;
  v8[0] = 0;
  v8[1] = 0;
  lpName = nullptr;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13[0] = 0;
  v13[1] = 0;
  lpValue = nullptr;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  utf8_acp_compatibility_codepage = __acrt_get_utf8_acp_compatibility_codepage();
  if ( sub_4137CD(lpMultiByteStr, (struct __crt_win32_buffer_empty_debug_info *)v8, utf8_acp_compatibility_codepage) == 0 )
  {
    v5 = __acrt_get_utf8_acp_compatibility_codepage();
    v6 = sub_4137CD(a2, (struct __crt_win32_buffer_empty_debug_info *)v13, v5);
    v3 = (WCHAR *)lpValue;
    if ( v6 == 0 )
      v2 = SetEnvironmentVariableW(lpName, lpValue);
  }
  if ( v17 != 0 )
    _free_base(v3);
  if ( v12 != 0 )
    _free_base((void *)lpName);
  return v2;
}

