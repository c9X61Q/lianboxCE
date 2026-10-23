// gettime.exe @ 0x4090b7 size=115

_Cvtvec *__cdecl _Getcvt(_Cvtvec *__return_ptr retstr)
{
  int v1; // esi
  wchar_t *v2; // ecx
  const unsigned __int16 *v3; // ebx

  v1 = 0;
  memset(retstr, 0, sizeof(_Cvtvec));
  retstr->_Page = ___lc_codepage_func();
  retstr->_Mbcurmax = ___mb_cur_max_func();
  v2 = ___lc_locale_name_func()[2];
  retstr->_Isclocale = v2 == nullptr;
  if ( v2 != nullptr )
  {
    v3 = __pctype_func();
    do
    {
      if ( (v3[v1] & 0x8000u) != 0 )
        retstr->_Isleadbyte[(unsigned int)v1 >> 3] |= 1 << (v1 & 7);
      ++v1;
    }
    while ( v1 < 256 );
  }
  return retstr;
}

