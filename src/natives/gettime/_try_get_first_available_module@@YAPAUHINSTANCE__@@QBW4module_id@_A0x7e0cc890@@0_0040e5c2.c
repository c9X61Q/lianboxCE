// gettime.exe @ 0x40e5c2 size=154

HMODULE __cdecl try_get_first_available_module(_DWORD *a1, _DWORD *a2)
{
  volatile __int32 *v3; // ebx
  HMODULE Library; // esi
  const WCHAR *lpLibFileName; // [esp+Ch] [ebp-4h]

  while ( 1 )
  {
    if ( a1 == a2 )
      return nullptr;
    v3 = (volatile __int32 *)((char *)&unk_438734 + 4 * *a1);
    Library = (HMODULE)*v3;
    if ( *v3 == 0 )
      break;
    if ( Library != (HMODULE)-1 )
      return Library;
LABEL_10:
    ++a1;
  }
  lpLibFileName = (&::lpLibFileName)[*a1];
  Library = LoadLibraryExW(lpLibFileName, nullptr, 0x800u);
  if ( Library == nullptr
    && (GetLastError() != 87
     || wcsncmp(lpLibFileName, L"api-ms-", 7u) == 0
     || (Library = LoadLibraryExW(lpLibFileName, nullptr, 0)) == nullptr) )
  {
    _InterlockedExchange(v3, -1);
    goto LABEL_10;
  }
  if ( _InterlockedExchange(v3, (__int32)Library) != 0 )
    FreeLibrary(Library);
  return Library;
}

