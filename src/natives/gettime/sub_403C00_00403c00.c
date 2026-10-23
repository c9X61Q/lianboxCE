// gettime.exe @ 0x403c00 size=346

char *__thiscall sub_403C00(char *this, int a2, int a3)
{
  std::locale *v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  char *v8; // [esp-10h] [ebp-60h]
  char v9; // [esp-Ch] [ebp-5Ch]
  int v10; // [esp+0h] [ebp-50h] BYREF
  char v11[8]; // [esp+10h] [ebp-40h] BYREF
  int v12; // [esp+18h] [ebp-38h] BYREF
  _DWORD *v13[2]; // [esp+20h] [ebp-30h] BYREF
  _BYTE v14[8]; // [esp+28h] [ebp-28h] BYREF
  char *v15; // [esp+30h] [ebp-20h]
  const struct std::locale::facet *v16; // [esp+34h] [ebp-1Ch]
  int v17; // [esp+38h] [ebp-18h]
  char *v18; // [esp+3Ch] [ebp-14h]
  int *v19; // [esp+40h] [ebp-10h]
  int v20; // [esp+4Ch] [ebp-4h]

  v19 = &v10;
  v18 = this;
  v17 = 0;
  sub_403360(v14, (int)this);
  if ( (unsigned __int8)unknown_libname_12(v14) != 0 )
  {
    v3 = (std::locale *)std::ios_base::getloc(&v18[*(_DWORD *)(*(_DWORD *)v18 + 4)], v13);
    v16 = sub_4025F0(v3);
    sub_4038D0(v13);
    v20 = 0;
    v9 = std::ios::fill(&v18[*(_DWORD *)(*(_DWORD *)v18 + 4)]);
    v8 = &v18[*(_DWORD *)(*(_DWORD *)v18 + 4)];
    v4 = unknown_libname_40(v8);
    v5 = std::ostreambuf_iterator<char>::ostreambuf_iterator<char>(&v12, v4);
    v6 = sub_407BE0(v11, *v5, v5[1], v8, v9, a2, a3);
    if ( (unsigned __int8)std::ostreambuf_iterator<char>::failed(v6) != 0 )
      v17 |= 4u;
    v20 = -1;
  }
  sub_408150(v17, 0);
  v15 = v18;
  sub_403920(v14);
  return v15;
}

