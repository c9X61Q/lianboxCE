// gettime.exe @ 0x41d82c size=64

DWORD __cdecl _lseeki64_nolock(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  DWORD v3; // esi
  int v5[10]; // [esp+8h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v5, nullptr);
  v3 = common_lseek_nolock<__int64>(FileHandle, liDistanceToMove, dwMoveMethod, (int)v5);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v5);
  return v3;
}

