// gettime.exe @ 0x403360 size=136

_BYTE *__thiscall sub_403360(_BYTE *this, int a2)
{
  int v3; // [esp+0h] [ebp-8h]

  sub_402E70(this, a2);
  if ( (unsigned __int8)sub_407320(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2) != 0 )
  {
    v3 = unknown_libname_47(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2);
    if ( v3 != 0 && v3 != a2 )
    {
      sub_407250(v3);
      *(this + 4) = sub_407320(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2);
    }
    else
    {
      *(this + 4) = 1;
    }
  }
  else
  {
    *(this + 4) = 0;
  }
  return this;
}

