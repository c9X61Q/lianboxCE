// gettime.exe @ 0x41a04d size=203

HMODULE __cdecl try_get_first_available_module(int *a1, int *a2)
{
  HMODULE Library; // esi
  const WCHAR *v4; // ebx
  int v6; // [esp+Ch] [ebp-4h]

  while ( 1 )
  {
    if ( a1 == a2 )
      return nullptr;
    v6 = *a1;
    Library = (HMODULE)dword_438D20[*a1];
    if ( Library == nullptr )
      break;
    if ( Library != (HMODULE)-1 )
      return Library;
LABEL_11:
    ++a1;
  }
  v4 = (&String1)[*a1];
  Library = LoadLibraryExW(v4, nullptr, 0x800u);
  if ( Library == nullptr
    && (GetLastError() != 87
     || wcsncmp(v4, L"api-ms-", 7u) == 0
     || wcsncmp(v4, L"ext-ms-", 7u) == 0
     || (Library = LoadLibraryExW(v4, nullptr, 0)) == nullptr) )
  {
    _InterlockedExchange(&dword_438D20[v6], -1);
    goto LABEL_11;
  }
  if ( _InterlockedExchange(&dword_438D20[v6], (__int32)Library) != 0 )
    FreeLibrary(Library);
  return Library;
}

