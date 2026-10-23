// gettime.exe @ 0x408520 size=43

const char *__thiscall std::exception::what(std::exception *this)
{
  if ( *((_DWORD *)this + 1) != 0 )
    return *((const char **)this + 1);
  else
    return "Unknown exception";
}

