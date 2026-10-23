// gettime.exe @ 0x41d7ce size=64

__int64 __cdecl _lseeki64(int FileHandle, __int64 Offset, int Origin)
{
  int v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // edi
  _BYTE v7[40]; // [esp+8h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v7, nullptr);
  v3 = common_lseek<__int64>(FileHandle, (LARGE_INTEGER)Offset, Origin, (__crt_cached_ptd_host *)v7);
  v5 = v4;
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v7);
  return __PAIR64__(v5, v3);
}

