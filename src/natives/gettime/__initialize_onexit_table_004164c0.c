// gettime.exe @ 0x4164c0 size=41

int __cdecl _initialize_onexit_table(_onexit_table_t *Table)
{
  _PVFV *v2; // eax

  if ( Table == nullptr )
    return -1;
  if ( Table->_first == Table->_end )
  {
    v2 = (_PVFV *)__security_cookie;
    Table->_first = (_PVFV *)__security_cookie;
    Table->_last = v2;
    Table->_end = v2;
  }
  return 0;
}

