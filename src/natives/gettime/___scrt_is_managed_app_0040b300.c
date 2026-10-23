// gettime.exe @ 0x40b300 size=67

bool __scrt_is_managed_app()
{
  HMODULE ModuleHandleW; // eax
  char *v1; // ecx
  bool result; // al

  ModuleHandleW = GetModuleHandleW(nullptr);
  result = false;
  if ( ModuleHandleW != nullptr && *(_WORD *)ModuleHandleW == 23117 )
  {
    v1 = (char *)ModuleHandleW + *((_DWORD *)ModuleHandleW + 15);
    if ( *(_DWORD *)v1 == 17744
      && *((_WORD *)v1 + 12) == 267
      && *((_DWORD *)v1 + 29) > 0xEu
      && *((_DWORD *)v1 + 58) != 0 )
    {
      return true;
    }
  }
  return result;
}

