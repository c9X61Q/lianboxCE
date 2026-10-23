// gettime.exe @ 0x403a40 size=402

char *__thiscall sub_403A40(char *this, int a2)
{
  std::locale *v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  char *v7; // [esp-Ch] [ebp-64h]
  char v8; // [esp-8h] [ebp-60h]
  int v9; // [esp-4h] [ebp-5Ch]
  int v10; // [esp+0h] [ebp-58h] BYREF
  char v11[8]; // [esp+10h] [ebp-48h] BYREF
  int v12; // [esp+18h] [ebp-40h] BYREF
  _DWORD *v13[2]; // [esp+20h] [ebp-38h] BYREF
  _BYTE v14[8]; // [esp+28h] [ebp-30h] BYREF
  char *v15; // [esp+30h] [ebp-28h]
  const struct std::locale::facet *v16; // [esp+34h] [ebp-24h]
  int v17; // [esp+38h] [ebp-20h]
  int v18; // [esp+3Ch] [ebp-1Ch]
  int v19; // [esp+40h] [ebp-18h]
  char *v20; // [esp+44h] [ebp-14h]
  int *v21; // [esp+48h] [ebp-10h]
  int v22; // [esp+54h] [ebp-4h]

  v21 = &v10;
  v20 = this;
  v19 = 0;
  sub_403360(v14, (int)this);
  if ( (unsigned __int8)unknown_libname_12(v14) != 0 )
  {
    v2 = (std::locale *)std::ios_base::getloc(&v20[*(_DWORD *)(*(_DWORD *)v20 + 4)], v13);
    v16 = sub_4025F0(v2);
    sub_4038D0(v13);
    v18 = unknown_libname_35(&v20[*(_DWORD *)(*(_DWORD *)v20 + 4)]) & 0xE00;
    if ( v18 == 1024 || v18 == 2048 )
      v17 = a2;
    else
      v17 = a2;
    v22 = 0;
    v9 = v17;
    v8 = std::ios::fill(&v20[*(_DWORD *)(*(_DWORD *)v20 + 4)]);
    v7 = &v20[*(_DWORD *)(*(_DWORD *)v20 + 4)];
    v3 = unknown_libname_40(v7);
    v4 = std::ostreambuf_iterator<char>::ostreambuf_iterator<char>(&v12, v3);
    v5 = sub_407BA0(v11, *v4, v4[1], v7, v8, v9);
    if ( (unsigned __int8)std::ostreambuf_iterator<char>::failed(v5) != 0 )
      v19 |= 4u;
    v22 = -1;
  }
  sub_408150(v19, 0);
  v15 = v20;
  sub_403920(v14);
  return v15;
}

