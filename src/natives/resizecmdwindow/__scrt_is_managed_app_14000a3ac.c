// resizecmdwindow.exe @ 0x14000a3ac size=81

bool _scrt_is_managed_app()
{
  HMODULE ModuleHandleW; // rax
  char *v1; // rcx

  ModuleHandleW = GetModuleHandleW(nullptr);
  return ModuleHandleW != nullptr
      && *(_WORD *)ModuleHandleW == 23117
      && *(_DWORD *)(v1 = (char *)ModuleHandleW + *((int *)ModuleHandleW + 15)) == 17744
      && *((_WORD *)v1 + 12) == 523
      && *((_DWORD *)v1 + 33) > 0xEu
      && *((_DWORD *)v1 + 62) != 0;
}

