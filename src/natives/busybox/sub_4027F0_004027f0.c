// busybox.exe @ 0x4027f0 size=333

int __cdecl sub_4027F0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  unsigned int v4; // ebp
  unsigned int v5; // ebp
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rtt
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  unsigned int v12; // [esp+8h] [ebp-24h]

  if ( HIDWORD(a2) != 0 )
  {
    HIDWORD(v2) = a1;
    if ( HIDWORD(a2) <= HIDWORD(a1) )
    {
      _BitScanReverse(&v3, HIDWORD(a2));
      v4 = v3 ^ 0x1F;
      if ( v4 != 0 )
      {
        v12 = ((unsigned int)a2 >> (32 - v4)) | (HIDWORD(a2) << v4);
        LODWORD(v7) = (HIDWORD(a1) << v4) | ((unsigned int)a1 >> (32 - v4));
        HIDWORD(v7) = HIDWORD(a1) >> (32 - v4);
        v8 = v7 % v12;
        v9 = (unsigned int)((_DWORD)a2 << v4) * (unsigned __int64)(unsigned int)(v7 / v12);
        v10 = v9;
        if ( __PAIR64__(v8, (_DWORD)a1 << v4) < v9 )
          v10 = v9 - __PAIR64__(v12, (_DWORD)a2 << v4);
        LODWORD(v2) = ((unsigned int)(((_DWORD)a1 << v4) - v10) >> v4)
                    | ((__PAIR64__(v8, (_DWORD)a1 << v4) - v10) >> 32 << (32 - (unsigned __int8)v4));
      }
      else
      {
        if ( HIDWORD(a2) < HIDWORD(a1) || (unsigned int)a2 <= (unsigned int)a1 )
          HIDWORD(v2) = a1 - a2;
        LODWORD(v2) = HIDWORD(v2);
      }
    }
    else
    {
      LODWORD(v2) = a1;
    }
  }
  else if ( (unsigned int)a2 <= HIDWORD(a1) )
  {
    v5 = a2;
    if ( (_DWORD)a2 == 0 )
      v5 = 1 / 0u;
    LODWORD(v6) = a1;
    HIDWORD(v6) = HIDWORD(a1) % v5;
    return v6 % v5;
  }
  else
  {
    return a1 % (unsigned int)a2;
  }
  return v2;
}

