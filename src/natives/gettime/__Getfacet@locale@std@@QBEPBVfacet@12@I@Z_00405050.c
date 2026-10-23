// gettime.exe @ 0x405050 size=122

const struct std::locale::facet *__thiscall std::locale::_Getfacet(std::locale *this, unsigned int a2)
{
  int v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+8h] [ebp-8h]

  if ( a2 >= *(_DWORD *)(*((_DWORD *)this + 1) + 12) )
    v4 = 0;
  else
    v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 8) + 4 * a2);
  if ( v4 != 0 || *(_BYTE *)(*((_DWORD *)this + 1) + 20) == 0 )
    return (const struct std::locale::facet *)v4;
  v3 = sub_408D33();
  if ( a2 >= *(_DWORD *)(v3 + 12) )
    return nullptr;
  else
    return *(const struct std::locale::facet **)(*(_DWORD *)(v3 + 8) + 4 * a2);
}

