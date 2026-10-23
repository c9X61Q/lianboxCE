// gettime.exe @ 0x41d86c size=30

DWORD __cdecl _lseeki64_nolock_internal(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod, int a4)
{
  return common_lseek_nolock<__int64>(FileHandle, liDistanceToMove, dwMoveMethod, a4);
}

