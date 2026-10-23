// gettime.exe @ 0x40b184 size=33

errno_t _initialize_default_precision()
{
  errno_t result; // eax

  result = _controlfp_s(nullptr, 0x10000u, 0x30000u);
  if ( result != 0 )
  {
    __scrt_fastfail(7);
    __debugbreak();
  }
  return result;
}

