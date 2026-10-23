// busybox.exe @ 0x432984 size=86

int __fastcall sub_432984(int a1, int a2)
{
  int v3; // eax
  int v4; // edx
  char v5; // cl
  int v6; // edx
  bool v7; // sf
  bool v8; // of
  int v9; // ecx

  v3 = time(nullptr) - *(_DWORD *)(a2 + 56);
  v4 = 86400 * *(_DWORD *)(a1 + 12);
  v5 = *(_BYTE *)(a1 + 8);
  if ( v5 == 43 )
  {
    v6 = v4 + 86399;
    v8 = __OFSUB__(v6, v3);
    v7 = v6 - v3 < 0;
LABEL_5:
    LOBYTE(v9) = v7 ^ v8;
    return (unsigned __int8)v9;
  }
  if ( v5 == 45 )
  {
    v8 = __OFSUB__(v3, v4);
    v7 = v3 - v4 < 0;
    goto LABEL_5;
  }
  v9 = 0;
  if ( v3 >= v4 )
  {
    LOBYTE(v9) = v4 + 86399 >= v3;
    return (unsigned __int8)v9;
  }
  return v9;
}

