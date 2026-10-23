// gettime.exe @ 0x409931 size=28

int __thiscall sub_409931(_DWORD *this, std::locale *a2)
{
  struct std::_Facet_base *v3; // eax

  v3 = sub_409471(a2);
  return std::filebuf::_Initcvt(this, (int)v3);
}

