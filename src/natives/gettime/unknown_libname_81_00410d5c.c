// gettime.exe @ 0x410d5c size=39

// Microsoft VisualC universal runtime
struct tm *__cdecl unknown_libname_81(__time64_t *a1)
{
  struct tm *result; // eax

  result = (struct tm *)__getgmtimebuf();
  if ( result != nullptr )
    return common_localtime_s<__int64>(result, a1) == 0 ? result : nullptr;
  return result;
}

