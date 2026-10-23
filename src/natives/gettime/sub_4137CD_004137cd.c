// gettime.exe @ 0x4137cd size=29

int __cdecl sub_4137CD(LPCCH lpMultiByteStr, struct __crt_win32_buffer_empty_debug_info *a2, UINT CodePage)
{
  int v3; // ecx
  int var1; // [esp+1h] [ebp-1h] BYREF

  LOBYTE(var1) = HIBYTE(v3);
  return __acrt_convert_wcs_mbs_cp<char,wchar_t,_lambda_62f6974d9771e494a5ea317cc32e971c_,__crt_win32_buffer_internal_dynamic_resizing>(
           lpMultiByteStr,
           a2,
           (int)&var1,
           CodePage);
}

