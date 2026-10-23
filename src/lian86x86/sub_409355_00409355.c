// lian86.exe @ 0x00409355  size=380  name=sub_409355
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_409355(int a1, wchar_t *Source, int a3)
{
  size_t v3; // edi
  HMODULE LibraryW; // eax
  HMODULE v5; // ebp
  BOOL (__stdcall *SHGetPathFromIDListW)(LPCITEMIDLIST, LPWSTR); // eax
  const wchar_t *v7; // ecx
  signed int v8; // eax
  int v9; // ecx
  const wchar_t *v10; // esi
  size_t v11; // eax
  FARPROC pv; // [esp+Ch] [ebp-230h]
  ITEMIDLIST *pva; // [esp+Ch] [ebp-230h]
  BOOL (__stdcall *v15)(LPCITEMIDLIST, LPWSTR); // [esp+10h] [ebp-22Ch]
  _DWORD v16[8]; // [esp+14h] [ebp-228h] BYREF
  wchar_t Destination[260]; // [esp+34h] [ebp-208h] BYREF

  v3 = 0;
  if ( dword_418140 == 0 )
  {
    dword_418140 = 1;
    CoInitialize(nullptr);
  }
  memset(v16, 0, sizeof(v16));
  LibraryW = LoadLibraryW(L"SHELL32.DLL");
  v5 = LibraryW;
  if ( LibraryW == nullptr )
    goto LABEL_13;
  pv = GetProcAddress(LibraryW, "SHBrowseForFolderW");
  SHGetPathFromIDListW = (BOOL (__stdcall *)(LPCITEMIDLIST, LPWSTR))GetProcAddress(v5, "SHGetPathFromIDListW");
  v7 = Source;
  v15 = SHGetPathFromIDListW;
  if ( Source == nullptr )
    v7 = (const wchar_t *)&unk_413024;
  wcsncpy(Destination, v7, 0x103u);
  Destination[259] = 0;
  v8 = wcslen(Destination);
  v9 = 92;
  if ( v8 > 3 && *((_WORD *)&v16[7] + v8 + 1) == 92 )
  {
    v9 = 0;
    *((_WORD *)&v16[7] + v8 + 1) = 0;
  }
  v16[3] = a1;
  v16[0] = sub_4094D1(v9);
  v16[4] = 80;
  v16[5] = sub_409311;
  v16[6] = Destination;
  sub_409588(1);
  pva = (ITEMIDLIST *)((int (__stdcall *)(_DWORD *))pv)(v16);
  sub_409588(0);
  if ( pva != nullptr )
  {
    v10 = (const wchar_t *)sub_40E900(260, a3);
    *v10 = 0;
    v15(pva, (LPWSTR)v10);
    CoTaskMemFree(pva);
    v11 = wcslen(v10);
    v3 = v11;
    if ( v10[v11 - 1] != 92 )
    {
      v10[v11] = 92;
      v10[v11 + 1] = 0;
      v3 = v11 + 1;
    }
  }
  FreeLibrary(v5);
  if ( v3 == 0 )
LABEL_13:
    *(_WORD *)sub_40E900(260, a3) = 0;
  return sub_40EA90(260 - v3);
}

