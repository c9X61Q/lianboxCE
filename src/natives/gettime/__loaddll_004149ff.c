// gettime.exe @ 0x4149ff size=22

intptr_t __cdecl _loaddll(char *FileName)
{
  intptr_t result; // eax

  common_exit((UINT)FileName, _crt_exit_full_cleanup, _crt_exit_terminate_process);
  return result;
}

