// gettime.exe @ 0x414709 size=232

void __thiscall _lambda_6e4b09c48022b2350581041d5f6b0c4c_::operator()(int **this)
{
  int v2; // eax
  void (__thiscall *v3)(_DWORD, _DWORD, _DWORD, _DWORD); // esi
  int v4; // [esp+14h] [ebp-20h]

  if ( byte_4389F0 == 0 )
  {
    _InterlockedExchange(&dword_4389E8, 1);
    v2 = **this;
    if ( v2 != 0 )
    {
      if ( v2 == 1 )
        _execute_onexit_table(&Table);
    }
    else
    {
      if ( dword_4389EC != v4 )
      {
        v3 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))unknown_libname_87(dword_4389EC);
        v3(v3, 0, 0, 0);
      }
      _execute_onexit_table(&stru_438A18);
    }
    if ( **this == 0 )
      _initterm((_PVFV *)&dword_429198, (_PVFV *)&dword_4291A8);
    _initterm((_PVFV *)&dword_4291AC, (_PVFV *)&dword_4291B0);
    if ( **(this + 1) == 0 )
    {
      byte_4389F0 = 1;
      *(_BYTE *)*(this + 2) = 1;
    }
  }
}

