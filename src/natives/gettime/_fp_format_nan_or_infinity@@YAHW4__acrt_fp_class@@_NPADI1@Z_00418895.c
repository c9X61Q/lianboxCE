// gettime.exe @ 0x418895 size=148

errno_t __cdecl fp_format_nan_or_infinity(
        int a1,
        unsigned __int8 a2,
        char *Destination,
        rsize_t SizeInBytes,
        unsigned __int8 a5)
{
  rsize_t v5; // edx
  errno_t result; // eax
  char *v7; // ecx

  v5 = SizeInBytes;
  if ( SizeInBytes >= (unsigned int)a2 + 4 )
  {
    v7 = Destination;
    if ( a2 != 0 )
    {
      *Destination = 45;
      v7 = Destination + 1;
      Destination[1] = 0;
      if ( SizeInBytes != -1 )
        v5 = SizeInBytes - 1;
    }
    result = strcpy_s(
               v7,
               v5,
               (&(&off_42CE68)[2 * (a5 ^ 1)])[(__PAIR64__(
                                                 4 * a1 - 4 + 1,
                                                 strlen((&(&off_42CE68)[4 * a1 - 4])[2 * (a5 ^ 1)]))
                                             - v5) >> 32]);
    if ( result != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  else
  {
    *Destination = 0;
    return 12;
  }
  return result;
}

