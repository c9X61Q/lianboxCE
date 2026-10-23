// gettime.exe @ 0x408d07 size=44

void __cdecl std::_Facet_Register(struct std::_Facet_base *a1)
{
  std::_Fac_node *v1; // eax

  v1 = (std::_Fac_node *)operator new(8u);
  if ( v1 != nullptr )
  {
    *(_DWORD *)v1 = dword_4380D4;
    *((_DWORD *)v1 + 1) = a1;
  }
  else
  {
    v1 = nullptr;
  }
  dword_4380D4 = v1;
}

