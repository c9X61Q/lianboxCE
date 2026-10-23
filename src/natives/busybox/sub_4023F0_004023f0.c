// busybox.exe @ 0x4023f0 size=330

__int64 __cdecl sub_4023F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // esi
  int v7; // ecx
  __int64 result; // rax
  unsigned int v9; // esi
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // rtt
  unsigned int v12; // ebx
  int v13; // ebp
  unsigned __int64 v14; // rax
  __int64 v15; // [esp+0h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-24h]
  unsigned int v17; // [esp+Ch] [ebp-20h]

  v16 = 0;
  LODWORD(v2) = a2;
  v3 = HIDWORD(a1);
  LODWORD(v15) = a1;
  if ( a1 < 0 )
  {
    v16 = -1;
    v15 = -a1;
    v3 = (unsigned __int64)-a1 >> 32;
  }
  v4 = HIDWORD(a2);
  if ( a2 < 0 )
  {
    v16 = ~v16;
    v2 = -a2;
    v4 = (unsigned __int64)-a2 >> 32;
  }
  v5 = v2;
  if ( v4 != 0 )
  {
    if ( v4 <= v3 )
    {
      _BitScanReverse(&v9, v4);
      v6 = v9 ^ 0x1F;
      if ( v6 != 0 )
      {
        v17 = (v4 << v6) | ((unsigned int)v2 >> (32 - v6));
        LODWORD(v11) = ((unsigned int)v15 >> (32 - v6)) | (v3 << v6);
        HIDWORD(v11) = v3 >> (32 - v6);
        v12 = v11 % v17;
        v13 = v11 / v17;
        v14 = (unsigned int)((_DWORD)v2 << v6) * (unsigned __int64)(unsigned int)v13;
        if ( v12 < HIDWORD(v14) || (_DWORD)v15 << v6 < (unsigned int)v14 && v12 == HIDWORD(v14) )
        {
          v7 = v13 - 1;
          v6 = 0;
        }
        else
        {
          v7 = v13;
          v6 = 0;
        }
      }
      else if ( v4 < v3 || (v7 = 0, (unsigned int)v2 <= (unsigned int)v15) )
      {
        v7 = 1;
      }
    }
    else
    {
      v6 = 0;
      v7 = 0;
    }
  }
  else if ( (unsigned int)v2 <= v3 )
  {
    if ( (_DWORD)v2 == 0 )
      v5 = 1 / 0u;
    v6 = v3 / v5;
    LODWORD(v10) = v15;
    HIDWORD(v10) = v3 % v5;
    v7 = v10 / v5;
  }
  else
  {
    v6 = 0;
    v7 = __PAIR64__(v3, v15) / (unsigned int)v2;
  }
  result = __PAIR64__(v6, v7);
  if ( v16 != 0 )
    return -__SPAIR64__(v6, v7);
  return result;
}

