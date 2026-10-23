// gettime.exe @ 0x408f4e size=107

_Ctypevec *__cdecl _Getctype(_Ctypevec *__return_ptr retstr)
{
  const __int16 *v1; // eax
  const unsigned __int16 *v2; // eax
  __int16 *Table; // edi
  const __int16 *v4; // eax
  wchar_t *v5; // eax

  retstr->_Page = ___lc_codepage_func();
  v1 = (const __int16 *)calloc(0x100u, 2u);
  retstr->_Table = v1;
  if ( v1 != nullptr )
  {
    v2 = __pctype_func();
    Table = (__int16 *)retstr->_Table;
    retstr->_Delfl = 1;
    qmemcpy(Table, v2, 0x200u);
  }
  else
  {
    v4 = (const __int16 *)__pctype_func();
    retstr->_Delfl = 0;
    retstr->_Table = v4;
  }
  v5 = ___lc_locale_name_func()[1];
  retstr->_LocaleName = v5;
  if ( v5 != nullptr )
    retstr->_LocaleName = _wcsdup(v5);
  return retstr;
}

