// gettime.exe @ 0x407a80 size=273

char *__thiscall sub_407A80(char *this, char a2)
{
  int v3; // [esp+0h] [ebp-3Ch] BYREF
  _BYTE v4[8]; // [esp+10h] [ebp-2Ch] BYREF
  char *v5; // [esp+18h] [ebp-24h]
  int v6; // [esp+1Ch] [ebp-20h] BYREF
  int v7; // [esp+20h] [ebp-1Ch] BYREF
  int v8; // [esp+24h] [ebp-18h]
  char *v9; // [esp+28h] [ebp-14h]
  int *v10; // [esp+2Ch] [ebp-10h]
  int v11; // [esp+38h] [ebp-4h]

  v10 = &v3;
  v9 = this;
  v8 = 0;
  sub_403360(v4, (int)this);
  if ( unknown_libname_12(v4) != 0 )
  {
    v11 = 0;
    unknown_libname_40(&v9[*(_DWORD *)(*(_DWORD *)v9 + 4)]);
    v7 = sub_4081B0(a2);
    v6 = std::numeric_limits<unsigned int>::max();
    if ( unknown_libname_34(&v6, &v7) )
      v8 |= 4u;
    v11 = -1;
  }
  else
  {
    v8 |= 4u;
  }
  sub_408150(v8, 0);
  v5 = v9;
  sub_403920(v4);
  return v5;
}

