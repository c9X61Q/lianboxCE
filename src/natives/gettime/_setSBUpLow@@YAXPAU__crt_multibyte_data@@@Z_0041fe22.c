// gettime.exe @ 0x41fe22 size=421

void __cdecl setSBUpLow(struct __crt_multibyte_data *a1)
{
  int v1; // esi
  unsigned int i; // eax
  unsigned int j; // eax
  BYTE *LeadByte; // ecx
  unsigned int v5; // edx
  char *v6; // eax
  int v7; // ecx
  WORD v8; // dx
  char v9; // dl
  char *v10; // ecx
  int v11; // eax
  int v12; // edx
  char v13; // al
  char v14; // al
  struct _cpinfo CPInfo; // [esp+14h] [ebp-718h] BYREF
  WORD CharType[512]; // [esp+28h] [ebp-704h] BYREF
  WCHAR v17[128]; // [esp+428h] [ebp-304h] BYREF
  WCHAR DestStr[128]; // [esp+528h] [ebp-204h] BYREF
  CHAR MultiByteStr[256]; // [esp+628h] [ebp-104h] BYREF

  if ( *((_DWORD *)a1 + 1) == 65001 || !GetCPInfo(*((_DWORD *)a1 + 1), &CPInfo) )
  {
    v10 = (char *)a1 + 25;
    v11 = -90 - (_DWORD)a1;
    v12 = -25 - (_DWORD)a1;
    while ( 1 )
    {
      if ( (unsigned int)&v10[v11] > 0x19 )
      {
        if ( (unsigned int)&v10[-122 - (_DWORD)a1] > 0x19 )
        {
          v14 = 0;
          goto LABEL_27;
        }
        *v10 |= 0x20u;
        v13 = (_BYTE)v10 - 32;
      }
      else
      {
        *v10 |= 0x10u;
        v13 = (_BYTE)v10 + 32;
      }
      v14 = v12 + v13;
LABEL_27:
      v10[256] = v14;
      ++v10;
      v11 = -90 - (_DWORD)a1;
      if ( (unsigned int)&v10[v12] >= 0x100 )
        return;
    }
  }
  v1 = 256;
  for ( i = 0; i < 0x100; ++i )
    MultiByteStr[i] = i;
  LOBYTE(j) = CPInfo.LeadByte[0];
  LeadByte = CPInfo.LeadByte;
  MultiByteStr[0] = 32;
  while ( (_BYTE)j != 0 )
  {
    v5 = LeadByte[1];
    for ( j = (unsigned __int8)j; j <= v5 && j < 0x100; ++j )
      MultiByteStr[j] = 32;
    LeadByte += 2;
    LOBYTE(j) = *LeadByte;
  }
  __acrt_GetStringTypeA(nullptr, 1u, MultiByteStr, 256, CharType, *((_DWORD *)a1 + 1), 0);
  __acrt_LCMapStringA(
    nullptr,
    *((wchar_t **)a1 + 135),
    0x100u,
    MultiByteStr,
    0x100u,
    DestStr,
    256,
    *((_DWORD *)a1 + 1),
    0);
  __acrt_LCMapStringA(nullptr, *((wchar_t **)a1 + 135), 0x200u, MultiByteStr, 0x100u, v17, 256, *((_DWORD *)a1 + 1), 0);
  v6 = (char *)a1 + 25;
  v7 = 0;
  do
  {
    v8 = CharType[v7];
    if ( (v8 & 1) != 0 )
    {
      *v6 |= 0x10u;
      v9 = *((_BYTE *)DestStr + v7);
    }
    else if ( (v8 & 2) != 0 )
    {
      *v6 |= 0x20u;
      v9 = *((_BYTE *)v17 + v7);
    }
    else
    {
      v9 = 0;
    }
    ++v7;
    v6[256] = v9;
    ++v6;
    --v1;
  }
  while ( v1 != 0 );
}

