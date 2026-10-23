// gettime.exe @ 0x408c0e size=49

void __thiscall std::_Fac_node::~_Fac_node(std::_Fac_node *this)
{
  void (__thiscall ***v1)(_DWORD, int); // eax

  v1 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 8))(*((_DWORD *)this + 1));
  if ( v1 != nullptr )
    (**v1)(v1, 1);
}

