// gettime.exe @ 0x4148b9 size=66

bool __scrt_is_managed_app_0()
{
  HMODULE ModuleHandleW; // eax
  char *v1; // ecx

  ModuleHandleW = GetModuleHandleW(nullptr);
  return ModuleHandleW != nullptr
      && *(_WORD *)ModuleHandleW == 23117
      && *(_DWORD *)(v1 = (char *)ModuleHandleW + *((_DWORD *)ModuleHandleW + 15)) == 17744
      && *((_WORD *)v1 + 12) == 267
      && *((_DWORD *)v1 + 29) > 0xEu
      && *((_DWORD *)v1 + 58) != 0;
}

