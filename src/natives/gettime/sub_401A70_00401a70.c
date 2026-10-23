// gettime.exe @ 0x401a70 size=644

int __cdecl sub_401A70(int a1, int a2, unsigned int a3)
{
  char v4; // [esp-4h] [ebp-60h]
  char v5; // [esp-4h] [ebp-60h]
  int v6; // [esp+0h] [ebp-5Ch] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-4Ch] BYREF
  unsigned int v8; // [esp+18h] [ebp-44h]
  int v9; // [esp+1Ch] [ebp-40h]
  __int64 v10; // [esp+20h] [ebp-3Ch]
  __int64 v11; // [esp+28h] [ebp-34h]
  int v12; // [esp+30h] [ebp-2Ch]
  int v13; // [esp+34h] [ebp-28h] BYREF
  int v14; // [esp+38h] [ebp-24h] BYREF
  int v15; // [esp+3Ch] [ebp-20h] BYREF
  int v16; // [esp+40h] [ebp-1Ch] BYREF
  int v17; // [esp+44h] [ebp-18h]
  int v18; // [esp+48h] [ebp-14h]
  int *v19; // [esp+4Ch] [ebp-10h]
  int v20; // [esp+58h] [ebp-4h]

  v19 = &v6;
  v18 = 0;
  v11 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1));
  if ( v11 > 0 && (unsigned int)std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1)) > a3 )
    v17 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1)) - a3;
  else
    v17 = 0;
  sub_403360(a1);
  if ( (unsigned __int8)unknown_libname_12(v7) != 0 )
  {
    v20 = 0;
    if ( (unknown_libname_35(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1) & 0x1C0) != 0x40 )
    {
      while ( v17 != 0 )
      {
        v4 = std::ios::fill(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        unknown_libname_40(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v16 = sub_4081B0(v4);
        v15 = std::numeric_limits<unsigned int>::max();
        if ( (unsigned __int8)unknown_libname_34(&v15, &v16) != 0 )
        {
          v18 |= 4u;
          break;
        }
        --v17;
      }
    }
    if ( v18 != 0
      || (unknown_libname_40(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1),
          v10 = sub_408220(a2, a3, 0),
          v8 = a3,
          v9 = 0,
          v10 == a3) )
    {
      while ( v17 != 0 )
      {
        v5 = std::ios::fill(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        unknown_libname_40(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v14 = sub_4081B0(v5);
        v13 = std::numeric_limits<unsigned int>::max();
        if ( (unsigned __int8)unknown_libname_34(&v13, &v14) != 0 )
        {
          v18 |= 4u;
          break;
        }
        --v17;
      }
    }
    else
    {
      v18 |= 4u;
    }
    std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1), 0);
    v20 = -1;
  }
  else
  {
    v18 |= 4u;
  }
  sub_408150(v18, 0);
  v12 = a1;
  sub_403920(v7);
  return v12;
}

