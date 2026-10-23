// busybox.exe @ 0x402540 size=409

int __cdecl sub_402540(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  unsigned __int64 v9; // rtt
  unsigned int v10; // ebp
  unsigned __int64 v11; // rtt
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // kr18_8
  int v16; // [esp+Ch] [ebp-30h]
  unsigned int v17; // [esp+10h] [ebp-2Ch]
  __int64 v18; // [esp+10h] [ebp-2Ch]
  unsigned int v19; // [esp+14h] [ebp-28h]
  char v20; // [esp+18h] [ebp-24h]

  LODWORD(v2) = a1;
  v16 = 0;
  LODWORD(v3) = a2;
  v4 = HIDWORD(a1);
  if ( a1 < 0 )
  {
    v16 = -1;
    v2 = -a1;
    v4 = (unsigned __int64)-a1 >> 32;
  }
  v5 = HIDWORD(a2);
  if ( a2 < 0 )
  {
    v3 = -a2;
    v5 = (unsigned __int64)-a2 >> 32;
  }
  v17 = v3;
  if ( v5 != 0 )
  {
    v19 = v2;
    if ( v5 <= v4 )
    {
      _BitScanReverse(&v8, v5);
      v20 = v8 ^ 0x1F;
      if ( v8 != 0x1F )
      {
        HIDWORD(v18) = (v17 >> (32 - v20)) | (v5 << v20);
        LODWORD(v18) = v17 << v20;
        v10 = (_DWORD)v2 << v20;
        LODWORD(v11) = (v4 << v20) | ((unsigned int)v2 >> (32 - v20));
        HIDWORD(v11) = v4 >> (32 - v20);
        v12 = v11 % HIDWORD(v18);
        v13 = (unsigned int)v18 * (unsigned __int64)(unsigned int)(v11 / HIDWORD(v18));
        v14 = v13;
        if ( __PAIR64__(v12, (_DWORD)v2 << v20) < v13 )
          v14 = v13 - v18;
        HIDWORD(v7) = (unsigned int)((__PAIR64__(v12, v10) - v14) >> 32) >> v20;
        LODWORD(v7) = ((v10 - (unsigned int)v14) >> v20) | ((__PAIR64__(v12, v10) - v14) >> 32 << (32 - v20));
      }
      else
      {
        if ( v5 < v4 || v17 <= (unsigned int)v2 )
        {
          v4 = (__PAIR64__(v4, v2) - __PAIR64__(v5, v17)) >> 32;
          v19 = v2 - v17;
        }
        v7 = __PAIR64__(v4, v19);
      }
    }
    else
    {
      v7 = __PAIR64__(v4, v2);
    }
  }
  else
  {
    if ( (unsigned int)v3 <= v4 )
    {
      if ( (_DWORD)v3 == 0 )
        v17 = 1 / 0u;
      LODWORD(v9) = v2;
      HIDWORD(v9) = v4 % v17;
      v6 = v9 % v17;
    }
    else
    {
      v6 = __PAIR64__(v4, v2) % (unsigned int)v3;
    }
    v7 = v6;
  }
  if ( v16 != 0 )
    return -(__int64)v7;
  return v7;
}

