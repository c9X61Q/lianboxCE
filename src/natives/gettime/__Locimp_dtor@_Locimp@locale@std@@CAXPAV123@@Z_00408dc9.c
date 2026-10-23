// gettime.exe @ 0x408dc9 size=112

static void __cdecl std::locale::_Locimp::_Locimp_dtor(struct std::locale::_Locimp *a1)
{
  int v1; // edi
  void (__thiscall ***v2)(_DWORD, int); // eax
  void (__thiscall ***v3)(_DWORD, int); // eax
  char v4[4]; // [esp+8h] [ebp-8h] BYREF
  void (__thiscall ***v5)(_DWORD, int); // [esp+Ch] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v4, 0);
  v1 = *((_DWORD *)a1 + 3);
  while ( v1 != 0 )
  {
    --v1;
    v2 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)a1 + 2) + 4 * v1);
    v5 = v2;
    if ( v2 != nullptr )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))((int (__thiscall *)(void (__thiscall ***)(_DWORD, int)))(*v2)[2])(v5);
      v5 = v3;
      if ( v3 != nullptr )
        (**v3)(v5, 1);
    }
  }
  free(*((void **)a1 + 2));
  std::_Lockit::~_Lockit((std::_Lockit *)v4);
}

