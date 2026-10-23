// gettime.exe @ 0x425786 size=50

wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h] BYREF

  if ( ((int (__cdecl *)())sub_42727D)() != 0 && unknown_libname_105(&Character, 1u, &NumberOfCharsWritten) != 0 )
    return Character;
  else
    return -1;
}

