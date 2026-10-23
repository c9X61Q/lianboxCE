// lian86.exe @ 0x0040aeba  size=248  name=sub_40AEBA
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40AEBA(int a1, wchar_t *Source)
{
  size_t v2; // esi
  WCHAR *v3; // edi
  HMODULE LibraryW; // eax
  HMODULE v5; // ebx
  HRESULT (__stdcall *SHGetKnownFolderPath)(const KNOWNFOLDERID *const, DWORD, HANDLE, PWSTR *); // eax
  size_t v7; // eax
  int v9; // [esp-4h] [ebp-14h]

  v2 = 0;
  v3 = (WCHAR *)sub_40E900(260, Source);
  if ( a1 != 2 )
  {
    switch ( a1 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v9 = 38;
        goto LABEL_17;
      case 3:
        v9 = 5;
        goto LABEL_17;
      case 4:
        v9 = 26;
        goto LABEL_17;
      case 5:
        v9 = 35;
        goto LABEL_17;
      case 6:
        v9 = 14;
        goto LABEL_17;
      case 7:
        v9 = 13;
        goto LABEL_17;
      case 8:
        v9 = 39;
        goto LABEL_17;
      case 9:
        v9 = 46;
LABEL_17:
        v2 = v9;
LABEL_18:
        v7 = sub_40AFEC(v2, v3);
        goto LABEL_19;
      default:
        goto LABEL_20;
    }
  }
  LibraryW = LoadLibraryW(L"Shell32.DLL");
  v5 = LibraryW;
  if ( LibraryW == nullptr )
    goto LABEL_7;
  SHGetKnownFolderPath = (HRESULT (__stdcall *)(const KNOWNFOLDERID *const, DWORD, HANDLE, PWSTR *))GetProcAddress(LibraryW, "SHGetKnownFolderPath");
  dword_418160 = (int)SHGetKnownFolderPath;
  if ( SHGetKnownFolderPath != nullptr && SHGetKnownFolderPath(&stru_417114, 0, nullptr, &Source) == 0 )
  {
    wcscpy(v3, Source);
    wcscat(v3, asc_4136D4);
    v2 = wcslen(v3);
    CoTaskMemFree(Source);
  }
  FreeLibrary(v5);
  if ( v2 == 0 )
  {
LABEL_7:
    sub_40AFEC(40, v3);
    wcscat(v3, L"Downloads\\");
    v7 = wcslen(v3);
LABEL_19:
    v2 = v7;
  }
LABEL_20:
  sub_40EA90(260 - v2);
  v3[v2] = 0;
  return 0;
}

