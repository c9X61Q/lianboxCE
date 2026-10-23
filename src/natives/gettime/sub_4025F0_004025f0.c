// gettime.exe @ 0x4025f0 size=194

const struct std::locale::facet *__cdecl sub_4025F0(std::locale *a1)
{
  const struct std::locale::facet *v2; // [esp+0h] [ebp-1Ch]
  char v3[4]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+Ch] [ebp-10h] BYREF
  const struct std::locale::facet *v6; // [esp+10h] [ebp-Ch]
  struct std::_Facet_base *v7; // [esp+14h] [ebp-8h]
  struct std::_Facet_base *v8; // [esp+18h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v3, 0);
  v8 = (struct std::_Facet_base *)dword_437FDC;
  v4 = std::locale::id::operator unsigned int(&unk_437FD0);
  v6 = std::locale::_Getfacet(a1, v4);
  if ( v6 == nullptr )
  {
    if ( v8 != nullptr )
    {
      v6 = v8;
    }
    else
    {
      if ( sub_404EA0(&v8, a1) == -1 )
        sub_405DA0();
      v7 = v8;
      std::_Unique_ptr_base<std::_Facet_base,std::default_delete<std::_Facet_base>>::_Unique_ptr_base<std::_Facet_base,std::default_delete<std::_Facet_base>>(
        &v5,
        (char)v8);
      std::_Facet_Register(v7);
      (*(void (__thiscall **)(struct std::_Facet_base *))(*(_DWORD *)v7 + 4))(v7);
      dword_437FDC = (int)v8;
      v6 = v8;
      sub_407C60(&v5);
      sub_4036D0(&v5);
    }
  }
  v2 = v6;
  std::_Lockit::~_Lockit((std::_Lockit *)v3);
  return v2;
}

