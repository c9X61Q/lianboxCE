// gettime.exe @ 0x41f293 size=63

int __cdecl _towlower_internal(wchar_t Source, struct __crt_locale_pointers *a2)
{
  int result; // eax

  LOBYTE(result) = Source;
  if ( Source >= 0x100u )
    return sub_426075(Source, a2);
  if ( (_wctype[(unsigned __int8)Source + 1] & 1) != 0 )
    LOBYTE(result) = *(_BYTE *)((unsigned __int8)Source + *((_DWORD *)a2->locinfo + 37));
  return (unsigned __int8)result;
}

