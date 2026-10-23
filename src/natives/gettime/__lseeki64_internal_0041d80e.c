// gettime.exe @ 0x41d80e size=30

int __cdecl _lseeki64_internal(
        int FileHandle,
        LARGE_INTEGER liDistanceToMove,
        DWORD dwMoveMethod,
        __crt_cached_ptd_host *a4)
{
  return common_lseek<__int64>(FileHandle, liDistanceToMove, dwMoveMethod, a4);
}

