// busybox.exe @ 0x4026e0 size=266

int __cdecl sub_4026E0(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  int result; // eax
  unsigned int v4; // edi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rtt
  unsigned int v8; // esi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  int v11; // [esp+8h] [ebp-24h]

  if ( a3 != 0 )
  {
    if ( a3 <= HIDWORD(a1) )
    {
      _BitScanReverse(&v4, a3);
      v5 = v4 ^ 0x1F;
      if ( v5 != 0 )
      {
        v11 = (a2 >> (32 - v5)) | (a3 << v5);
        LODWORD(v7) = ((unsigned int)a1 >> (32 - v5)) | (HIDWORD(a1) << v5);
        HIDWORD(v7) = HIDWORD(a1) >> (32 - v5);
        v8 = v7 % (unsigned int)v11;
        v9 = v7 / (unsigned int)v11;
        v10 = (a2 << v5) * (unsigned __int64)v9;
        if ( v8 < HIDWORD(v10) || (_DWORD)a1 << v5 < (unsigned int)v10 && v8 == HIDWORD(v10) )
          return v9 - 1;
        else
          return v9;
      }
      else
      {
        if ( a3 < HIDWORD(a1) )
          return 1;
        result = 0;
        if ( a2 <= (unsigned int)a1 )
          return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else if ( a2 <= HIDWORD(a1) )
  {
    v6 = a2;
    if ( a2 == 0 )
      v6 = 1 / 0u;
    return __PAIR64__(HIDWORD(a1) % v6, a1) / v6;
  }
  else
  {
    return a1 / a2;
  }
  return result;
}

