// gettime.exe @ 0x409228 size=82

static void __cdecl std::ios_base::_Addstd(struct std::ios_base *a1)
{
  unsigned int v1; // eax
  int v2; // esi
  struct std::ios_base *v3; // edi
  unsigned int v4; // ecx
  char v5[4]; // [esp+8h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v5, 2);
  v1 = 1;
  v2 = 1;
  *((_DWORD *)a1 + 2) = 1;
  do
  {
    v3 = (struct std::ios_base *)dword_4380E8[v1];
    v4 = v2;
    if ( v3 == nullptr )
      break;
    if ( v3 == a1 )
      break;
    *((_DWORD *)a1 + 2) = ++v1;
    v2 = v1;
    v4 = v1;
  }
  while ( v1 < 8 );
  ++byte_438110[v4];
  dword_4380E8[v4] = (int)a1;
  std::_Lockit::~_Lockit((std::_Lockit *)v5);
}

