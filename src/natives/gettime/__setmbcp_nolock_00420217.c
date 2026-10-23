// gettime.exe @ 0x420217 size=517

int __cdecl _setmbcp_nolock(UINT a1, struct __crt_multibyte_data *a2)
{
  UINT SystemCP; // ebx
  unsigned int v3; // edi
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // zf
  BYTE *j; // eax
  BYTE v8; // cl
  unsigned int v9; // edi
  char *v10; // edx
  int v11; // ecx
  char *v12; // eax
  int k; // ecx
  _BYTE *v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 v17; // al
  unsigned int v18; // edx
  _BYTE *v19; // ebx
  _WORD *v20; // ecx
  __int16 *v21; // edx
  int i; // edi
  __int16 v23; // ax
  int v24; // [esp+Ch] [ebp-24h]
  int v25; // [esp+10h] [ebp-20h]
  int v26; // [esp+14h] [ebp-1Ch]
  _BYTE *v27; // [esp+14h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+18h] [ebp-18h] BYREF

  SystemCP = getSystemCP(a1);
  v25 = SystemCP;
  if ( SystemCP == 0 )
  {
LABEL_36:
    setSBCS(a2);
    return 0;
  }
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v26 = 0;
  do
  {
    if ( dword_437990[v5] == SystemCP )
    {
      memset((char *)a2 + 24, 0, 0x101u);
      v24 = 48 * v26;
      v15 = (char *)&unk_4379A0 + 48 * v26;
      v27 = v15;
      do
      {
        v16 = v15;
        if ( *v15 != 0 )
        {
          do
          {
            v17 = v16[1];
            if ( v17 == 0 )
              break;
            v18 = *v16;
            if ( v18 <= v17 )
            {
              v19 = (char *)a2 + v18 + 25;
              do
              {
                if ( v18 >= 0x100 )
                  break;
                *v19 |= byte_437988[v3];
                ++v18;
                ++v19;
              }
              while ( v18 <= v16[1] );
            }
            v16 += 2;
          }
          while ( *v16 != 0 );
          v15 = v27;
        }
        ++v3;
        v15 += 8;
        v27 = v15;
      }
      while ( v3 < 4 );
      *((_DWORD *)a2 + 1) = v25;
      *((_DWORD *)a2 + 2) = 1;
      *((_DWORD *)a2 + 135) = CPtoLocaleName(v25);
      v20 = (_WORD *)((char *)a2 + 12);
      v21 = (__int16 *)((char *)&unk_437994 + v24);
      for ( i = 6; i != 0; --i )
      {
        v23 = *v21++;
        *v20++ = v23;
      }
      goto LABEL_35;
    }
    ++v4;
    v5 += 12;
    v26 = v4;
  }
  while ( v5 < 60 );
  if ( SystemCP == 65000 || !IsValidCodePage((unsigned __int16)SystemCP) )
    return -1;
  if ( SystemCP == 65001 )
  {
    *((_DWORD *)a2 + 1) = 65001;
    *((_DWORD *)a2 + 135) = 0;
    *((_DWORD *)a2 + 6) = 0;
    *((_WORD *)a2 + 14) = 0;
    goto LABEL_9;
  }
  if ( !GetCPInfo(SystemCP, &CPInfo) )
  {
    if ( dword_438E28 != 0 )
      goto LABEL_36;
    return -1;
  }
  memset((char *)a2 + 24, 0, 0x101u);
  *((_DWORD *)a2 + 1) = SystemCP;
  v6 = CPInfo.MaxCharSize == 2;
  *((_DWORD *)a2 + 135) = 0;
  if ( v6 )
  {
    for ( j = CPInfo.LeadByte; *j != 0; j += 2 )
    {
      v8 = j[1];
      if ( v8 == 0 )
        break;
      v9 = *j;
      if ( v9 <= v8 )
      {
        v10 = (char *)a2 + v9 + 25;
        v11 = v8 - v9 + 1;
        do
        {
          *v10++ |= 4u;
          --v11;
        }
        while ( v11 != 0 );
      }
    }
    v12 = (char *)a2 + 26;
    for ( k = 254; k != 0; --k )
      *v12++ |= 8u;
    *((_DWORD *)a2 + 135) = CPtoLocaleName(*((_DWORD *)a2 + 1));
    v3 = 1;
  }
LABEL_9:
  *((_DWORD *)a2 + 2) = v3;
  *((_DWORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 4) = 0;
  *((_DWORD *)a2 + 5) = 0;
LABEL_35:
  setSBUpLow(a2);
  return 0;
}

