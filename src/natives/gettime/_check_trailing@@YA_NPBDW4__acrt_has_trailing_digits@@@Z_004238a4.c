// gettime.exe @ 0x4238a4 size=35

bool __cdecl check_trailing(_BYTE *a1, int a2)
{
  if ( a2 == 0 )
    return true;
  while ( *a1 == 48 )
    ++a1;
  return *a1 != 0;
}

