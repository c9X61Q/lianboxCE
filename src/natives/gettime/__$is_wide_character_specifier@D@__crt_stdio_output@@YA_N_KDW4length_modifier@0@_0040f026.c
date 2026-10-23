// gettime.exe @ 0x40f026 size=49

bool __cdecl __crt_stdio_output::is_wide_character_specifier<char>(int a1, int a2, char a3, int a4)
{
  return a4 != 2 && (a4 == 3 || a4 == 12 || a4 != 13 && a3 != 99 && a3 != 115);
}

