// lian86.exe @ 0x0040afec  size=98  name=sub_40AFEC
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

size_t __stdcall sub_40AFEC(int csidl, LPWSTR pszPath)
{
  size_t v2; // esi
  LPITEMIDLIST ppidl; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  if ( SHGetFolderLocation(nullptr, csidl, nullptr, 0, &ppidl) == 0 )
  {
    if ( SHGetPathFromIDListW(ppidl, pszPath) )
    {
      v2 = wcslen(pszPath);
      if ( v2 != 0 && pszPath[v2 - 1] != 92 )
        pszPath[v2++] = 92;
    }
    CoTaskMemFree(ppidl);
  }
  pszPath[v2] = 0;
  return v2;
}

