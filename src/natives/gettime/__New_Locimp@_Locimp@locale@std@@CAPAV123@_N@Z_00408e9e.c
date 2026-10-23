// gettime.exe @ 0x408e9e size=35

static struct std::locale::_Locimp *__cdecl std::locale::_Locimp::_New_Locimp(bool a1)
{
  std::locale::_Locimp *v1; // eax

  v1 = (std::locale::_Locimp *)operator new(0x20u);
  if ( v1 != nullptr )
    return std::locale::_Locimp::_Locimp(v1, a1);
  else
    return nullptr;
}

