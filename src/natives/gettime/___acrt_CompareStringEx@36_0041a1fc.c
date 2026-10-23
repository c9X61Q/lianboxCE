// gettime.exe @ 0x41a1fc size=93

int __stdcall __acrt_CompareStringEx(
        wchar_t *a1,
        DWORD dwCmpFlags,
        PCNZWCH lpString1,
        int cchCount1,
        PCNZWCH lpString2,
        int cchCount2,
        int a7,
        int a8,
        int a9)
{
  int (__stdcall *CompareString)(); // eax
  LCID v11; // eax

  CompareString = try_get_CompareStringEx();
  if ( CompareString != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), wchar_t *, DWORD, PCNZWCH, int, PCNZWCH, int, int, int, int))CompareString)(
             CompareString,
             a1,
             dwCmpFlags,
             lpString1,
             cchCount1,
             lpString2,
             cchCount2,
             a7,
             a8,
             a9);
  v11 = __acrt_LocaleNameToLCID(a1, 0);
  return CompareStringW(v11, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}

