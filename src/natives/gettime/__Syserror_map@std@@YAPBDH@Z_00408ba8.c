// gettime.exe @ 0x408ba8 size=37

const char *__cdecl std::_Syserror_map(int a1)
{
  const char *v1; // eax

  v1 = (const char *)&unk_429788;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 8;
    if ( v1 == "address family not supported" )
      return "unknown error";
  }
  return *((const char **)v1 + 1);
}

