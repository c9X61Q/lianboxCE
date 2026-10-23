// gettime.exe @ 0x42548b size=11

errno_t __cdecl _wgetenv_s(size_t *RequiredCount, wchar_t *Buffer, size_t BufferCount, const wchar_t *VarName)
{
  return common_getenv_s<wchar_t>((int)RequiredCount, Buffer, BufferCount, (wchar_t *)VarName);
}

