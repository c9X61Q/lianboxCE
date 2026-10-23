// gettime.exe @ 0x4117c7 size=36

int __cdecl __acrt_errno_map_os_error_ptd(int a1, int a2)
{
  int result; // eax

  *(_BYTE *)(a2 + 36) = 1;
  *(_DWORD *)(a2 + 32) = a1;
  result = __acrt_errno_from_os_error(a1);
  *(_BYTE *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 24) = result;
  return result;
}

