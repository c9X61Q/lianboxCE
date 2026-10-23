// numcomp.exe @ 0x401b60 size=724

int __cdecl sub_401B60(int a1, char *Str)
{
  __int64 v2; // rax
  __int64 v4; // [esp-8h] [ebp-78h]
  char v5; // [esp-4h] [ebp-74h]
  char v6; // [esp-4h] [ebp-74h]
  int v7; // [esp+0h] [ebp-70h] BYREF
  _BYTE v8[8]; // [esp+10h] [ebp-60h] BYREF
  __int64 v9; // [esp+18h] [ebp-58h]
  __int64 v10; // [esp+20h] [ebp-50h]
  __int64 v11; // [esp+28h] [ebp-48h]
  __int64 v12; // [esp+30h] [ebp-40h]
  __int64 v13; // [esp+38h] [ebp-38h]
  __int64 v14; // [esp+40h] [ebp-30h]
  int v15; // [esp+48h] [ebp-28h]
  int v16; // [esp+4Ch] [ebp-24h] BYREF
  int v17; // [esp+50h] [ebp-20h] BYREF
  int v18; // [esp+54h] [ebp-1Ch] BYREF
  int v19; // [esp+58h] [ebp-18h] BYREF
  int v20; // [esp+5Ch] [ebp-14h]
  int *v21; // [esp+60h] [ebp-10h]
  int v22; // [esp+6Ch] [ebp-4h]

  v21 = &v7;
  v20 = 0;
  v13 = (unsigned int)sub_404BE0(Str);
  v11 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1));
  if ( v11 <= 0 || (v10 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1))) <= v13 )
  {
    v12 = 0;
  }
  else
  {
    v2 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1));
    v12 = v2 - v13;
  }
  v14 = v12;
  sub_402DE0(a1);
  if ( (unsigned __int8)unknown_libname_9(v8) != 0 )
  {
    v22 = 0;
    if ( (unknown_libname_20(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1) & 0x1C0) != 0x40 )
    {
      while ( v14 > 0 )
      {
        v5 = std::ios::fill(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        unknown_libname_22(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v19 = sub_404FC0(v5);
        v18 = std::numeric_limits<unsigned int>::max();
        if ( (unsigned __int8)unknown_libname_19(&v18, &v19) != 0 )
        {
          v20 |= 4u;
          break;
        }
        --v14;
      }
    }
    if ( v20 == 0 )
    {
      v4 = v13;
      unknown_libname_22(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
      v9 = sub_405030(Str, v4, HIDWORD(v4));
      if ( v9 != v13 )
        v20 |= 4u;
    }
    if ( v20 == 0 )
    {
      while ( v14 > 0 )
      {
        v6 = std::ios::fill(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        unknown_libname_22(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v17 = sub_404FC0(v6);
        v16 = std::numeric_limits<unsigned int>::max();
        if ( (unsigned __int8)unknown_libname_19(&v16, &v17) != 0 )
        {
          v20 |= 4u;
          break;
        }
        --v14;
      }
    }
    std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1), 0);
    v22 = -1;
  }
  else
  {
    v20 |= 4u;
  }
  sub_404F70(v20, 0);
  v15 = a1;
  sub_4031E0(v8);
  return v15;
}

