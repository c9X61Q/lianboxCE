// gettime.exe @ 0x409471 size=148

struct std::_Facet_base *__cdecl sub_409471(std::locale *a1)
{
  int v1; // esi
  unsigned int v2; // eax
  struct std::_Facet_base *v3; // edi
  _BYTE v5[4]; // [esp+10h] [ebp-14h] BYREF
  struct std::_Facet_base *v6; // [esp+14h] [ebp-10h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v5, 0);
  v1 = dword_4381DC;
  v7 = 0;
  v6 = (struct std::_Facet_base *)dword_4381DC;
  v2 = std::locale::id::operator unsigned int(&dword_4381D0);
  v3 = std::locale::_Getfacet(a1, v2);
  if ( v3 == nullptr )
  {
    if ( v1 != 0 )
    {
      v3 = (struct std::_Facet_base *)v1;
    }
    else
    {
      if ( std::codecvt<char,char,_Mbstatet>::_Getcat(&v6, a1) == -1 )
        sub_405DA0();
      v3 = v6;
      LOBYTE(v7) = 1;
      std::_Facet_Register(v6);
      (*(void (__thiscall **)(struct std::_Facet_base *))(*(_DWORD *)v3 + 4))(v3);
      dword_4381DC = (int)v3;
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)v5);
  return v3;
}

