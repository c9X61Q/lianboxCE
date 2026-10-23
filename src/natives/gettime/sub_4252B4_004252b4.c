// gettime.exe @ 0x4252b4 size=70

int __cdecl sub_4252B4(int a1, _DWORD *a2, int a3)
{
  unsigned __int16 **v3; // ecx
  int v4; // esi
  unsigned __int16 *v6; // [esp-10h] [ebp-40h] BYREF
  unsigned __int16 **v7; // [esp-Ch] [ebp-3Ch]
  int v8; // [esp-8h] [ebp-38h]
  int v9; // [esp-4h] [ebp-34h]
  _BYTE v10[44]; // [esp+4h] [ebp-2Ch] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v10, nullptr);
  v9 = 1;
  v8 = a3;
  v7 = v3;
  v6 = (unsigned __int16 *)v3;
  unknown_libname_62(&v6, a1, a2);
  v4 = __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>,1>(
         (__crt_cached_ptd_host *)v10,
         v6,
         v7,
         v8,
         v9);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v10);
  return v4;
}

