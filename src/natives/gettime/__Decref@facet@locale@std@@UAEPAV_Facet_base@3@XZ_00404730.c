// gettime.exe @ 0x404730 size=34

struct std::_Facet_base *__thiscall std::locale::facet::_Decref(std::locale::facet *this)
{
  if ( _InterlockedDecrement((volatile signed __int32 *)this + 1) != 0 )
    return nullptr;
  else
    return this;
}

