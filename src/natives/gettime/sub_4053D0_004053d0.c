// gettime.exe @ 0x4053d0 size=313

int __thiscall sub_4053D0(_BYTE *this, std::_Locinfo *a2, char a3)
{
  char *v3; // eax
  char *v4; // eax
  _BYTE *v6; // [esp+8h] [ebp-6Ch] BYREF
  struct lconv *v7; // [esp+Ch] [ebp-68h]
  char *Str; // [esp+10h] [ebp-64h]
  _BYTE *v9; // [esp+14h] [ebp-60h]
  struct _Cvtvec v10; // [esp+18h] [ebp-5Ch] BYREF
  struct _Cvtvec v11; // [esp+44h] [ebp-30h] BYREF

  v9 = this;
  v7 = sub_4050E0();
  std::_Locinfo::_Getcvt(a2, &v11);
  *((_DWORD *)v9 + 2) = 0;
  *((_DWORD *)v9 + 4) = 0;
  *((_DWORD *)v9 + 5) = 0;
  v6 = v9;
  if ( a3 != 0 )
    Str = (char *)&unk_429264;
  else
    Str = v7->grouping;
  std::_Locinfo::_Getcvt(a2, &v10);
  *((_DWORD *)v9 + 2) = sub_401D10(Str);
  v3 = (char *)sub_4050D0();
  *((_DWORD *)v9 + 4) = sub_401D10(v3);
  v4 = (char *)sub_405150();
  *((_DWORD *)v9 + 5) = sub_401D10(v4);
  v6 = nullptr;
  if ( a3 != 0 )
  {
    v9[12] = unknown_libname_3(46);
    v9[13] = unknown_libname_3(44);
  }
  else
  {
    std::numpunct<char>::_Getvals<char>(
      v9,
      0,
      &v7->decimal_point,
      v11._Page,
      v11._Mbcurmax,
      v11._Isclocale,
      *(int *)v11._Isleadbyte,
      *(int *)&v11._Isleadbyte[4],
      *(int *)&v11._Isleadbyte[8],
      *(int *)&v11._Isleadbyte[12],
      *(int *)&v11._Isleadbyte[16],
      *(_DWORD *)&v11._Isleadbyte[20],
      *(int *)&v11._Isleadbyte[24],
      *(int *)&v11._Isleadbyte[28]);
  }
  return sub_4034C0(&v6);
}

