// gettime.exe @ 0x408c3f size=39

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  std::_Fac_node *v1; // ecx
  std::_Fac_node *v2; // esi

  while ( 1 )
  {
    v2 = dword_4380D4;
    if ( dword_4380D4 == nullptr )
      break;
    v1 = dword_4380D4;
    dword_4380D4 = *(std::_Fac_node **)dword_4380D4;
    std::_Fac_node::~_Fac_node(v1);
    sub_40A6BA(v2);
  }
}

