// busybox.exe @ 0x4108f0 size=267

double __cdecl sub_4108F0(int a1, _DWORD *a2)
{
  unsigned int v2; // esi
  int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // ebp
  unsigned int v6; // eax
  signed int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  int v11; // edi
  int v12; // edx
  double v13; // [esp+0h] [ebp-1Ch]
  double v14; // [esp+0h] [ebp-1Ch]

  v2 = a1 + 20;
  v3 = a1 + 20 + 4 * *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(v3 - 4);
  v5 = v3 - 4;
  _BitScanReverse(&v6, v4);
  v7 = v6 ^ 0x1F;
  *a2 = 32 - v7;
  if ( v7 > 10 )
  {
    v8 = v7 - 11;
    if ( v2 >= v5 )
    {
      v9 = 0;
      if ( v8 != 0 )
      {
        v9 = 0;
        HIDWORD(v13) = (v4 << v8) | 0x3FF00000;
        goto LABEL_5;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v3 - 8);
      if ( v8 != 0 )
      {
        v12 = (v9 >> (32 - v8)) | (v4 << v8);
        v9 <<= v8;
        HIDWORD(v13) = v12 | 0x3FF00000;
        if ( v2 < v3 - 8 )
          v9 |= *(_DWORD *)(v3 - 12) >> (32 - v8);
        goto LABEL_5;
      }
    }
    HIDWORD(v13) = v4 | 0x3FF00000;
LABEL_5:
    LODWORD(v13) = v9;
    return v13;
  }
  v11 = 0;
  if ( v2 < v5 )
    v11 = *(_DWORD *)(v3 - 8) >> (11 - v7);
  LODWORD(v14) = v11 | (v4 << (v7 + 21));
  HIDWORD(v14) = (v4 >> (11 - v7)) | 0x3FF00000;
  return v14;
}

