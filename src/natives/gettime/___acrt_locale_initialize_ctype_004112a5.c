// gettime.exe @ 0x4112a5 size=1117

int __cdecl __acrt_locale_initialize_ctype(int a1)
{
  int v1; // esi
  int v2; // ebx
  char *v3; // edi
  wchar_t *v4; // ecx
  LPCCH v5; // ecx
  int i; // eax
  BYTE *LeadByte; // edx
  LPCCH v8; // ecx
  BYTE v9; // al
  int v10; // esi
  _WORD *v11; // ecx
  bool v12; // cc
  _BYTE *v13; // edi
  char *v14; // eax
  _BYTE *v15; // edx
  _BYTE *v16; // ecx
  int v17; // edi
  _WORD *v18; // ebx
  char *v19; // ebx
  char v20; // al
  BYTE *v21; // esi
  char *v22; // ebx
  BYTE v23; // al
  int v24; // ecx
  char *v25; // eax
  char *v26; // ebx
  char *v27; // edi
  int v28; // edx
  _WORD *v29; // edi
  char *v30; // eax
  int v31; // esi
  volatile signed __int32 *v32; // ecx
  void *v33; // eax
  volatile signed __int32 *v35; // eax
  wchar_t *v36; // [esp-20h] [ebp-84h]
  UINT v37; // [esp-8h] [ebp-6Ch]
  UINT v38; // [esp-8h] [ebp-6Ch]
  struct __crt_locale_pointers v39; // [esp+Ch] [ebp-58h] BYREF
  _BYTE *v40; // [esp+14h] [ebp-50h]
  char *v41; // [esp+18h] [ebp-4Ch]
  char *v42; // [esp+1Ch] [ebp-48h]
  char *v43; // [esp+20h] [ebp-44h]
  int v44; // [esp+24h] [ebp-40h]
  char *v45; // [esp+28h] [ebp-3Ch]
  unsigned int MaxCharSize_low; // [esp+2Ch] [ebp-38h]
  int v47; // [esp+30h] [ebp-34h]
  void *Block; // [esp+34h] [ebp-30h]
  char *String; // [esp+38h] [ebp-2Ch]
  _BYTE *v50; // [esp+3Ch] [ebp-28h]
  LPCCH lpMultiByteStr; // [esp+40h] [ebp-24h]
  void *v52; // [esp+44h] [ebp-20h]
  void *v53; // [esp+48h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+4Ch] [ebp-18h] BYREF

  v1 = a1;
  v2 = 0;
  v47 = a1;
  v3 = nullptr;
  v53 = nullptr;
  v4 = *(wchar_t **)(a1 + 168);
  v52 = nullptr;
  lpMultiByteStr = nullptr;
  v39.locinfo = (struct __crt_locale_data *)a1;
  v39.mbcinfo = nullptr;
  if ( v4 != nullptr )
  {
    Block = nullptr;
    if ( *(_DWORD *)(a1 + 8) != 0 || __acrt_GetLocaleInfoA(&v39, 0, v4, 0x1004u, a1 + 8) == 0 )
    {
      Block = _calloc_base(1u, 4u);
      _free_base(nullptr);
      v53 = _calloc_base(0x180u, 2u);
      _free_base(nullptr);
      v52 = _calloc_base(0x180u, 1u);
      _free_base(nullptr);
      v3 = (char *)_calloc_base(0x180u, 1u);
      v50 = v3;
      _free_base(nullptr);
      lpMultiByteStr = (LPCCH)_calloc_base(0x101u, 1u);
      _free_base(nullptr);
      if ( Block != nullptr && v53 != nullptr )
      {
        v5 = lpMultiByteStr;
        if ( lpMultiByteStr != nullptr && v52 != nullptr && v3 != nullptr )
        {
          for ( i = 0; i < 256; ++i )
            v5[i] = i;
          if ( GetCPInfo(*(_DWORD *)(a1 + 8), &CPInfo) && CPInfo.MaxCharSize <= 5 )
          {
            MaxCharSize_low = LOWORD(CPInfo.MaxCharSize);
            if ( LOWORD(CPInfo.MaxCharSize) > 1u )
            {
              if ( *(_DWORD *)(a1 + 8) == 65001 )
              {
                memset((void *)(lpMultiByteStr + 128), 32, 0x80u);
              }
              else
              {
                LeadByte = CPInfo.LeadByte;
                if ( CPInfo.LeadByte[0] != 0 )
                {
                  v8 = lpMultiByteStr;
                  do
                  {
                    v9 = LeadByte[1];
                    if ( v9 == 0 )
                      break;
                    v10 = *LeadByte;
                    if ( v10 <= (unsigned int)v9 )
                    {
                      do
                        v8[v10++] = 32;
                      while ( v10 <= LeadByte[1] );
                    }
                    LeadByte += 2;
                  }
                  while ( *LeadByte != 0 );
                  v1 = v47;
                }
              }
            }
            v37 = *(_DWORD *)(v1 + 8);
            v36 = *(wchar_t **)(v1 + 168);
            String = (char *)(lpMultiByteStr + 1);
            if ( __acrt_LCMapStringA(
                   nullptr,
                   v36,
                   0x100u,
                   (char *)lpMultiByteStr + 1,
                   0xFFu,
                   (LPWSTR)((char *)v52 + 129),
                   255,
                   v37,
                   0) != 0
              && __acrt_LCMapStringA(
                   nullptr,
                   *(wchar_t **)(v1 + 168),
                   0x200u,
                   String,
                   0xFFu,
                   (LPWSTR)(v3 + 129),
                   255,
                   *(_DWORD *)(v1 + 8),
                   0) != 0 )
            {
              v38 = *(_DWORD *)(v1 + 8);
              v43 = (char *)v53 + 256;
              if ( __acrt_GetStringTypeA(nullptr, 1u, lpMultiByteStr, 256, (LPWORD)v53 + 128, v38, 0) != 0 )
              {
                v11 = v53;
                v12 = MaxCharSize_low <= 1;
                v13 = v52;
                v14 = (char *)v53 + 254;
                *((_WORD *)v53 + 127) = 0;
                v15 = v50;
                v42 = v14;
                v13[127] = 0;
                v41 = v13 + 128;
                v15[127] = 0;
                v13[128] = 0;
                v40 = v15 + 128;
                v15[128] = 0;
                if ( !v12 )
                {
                  if ( *(_DWORD *)(v1 + 8) == 65001 )
                  {
                    v50 = v11 + 256;
                    v16 = v15 + 256;
                    v17 = v13 - v15;
                    String = (char *)(-128 - (_DWORD)v15);
                    do
                    {
                      v18 = v50;
                      v50 += 2;
                      *v18 = (unsigned int)&v16[-322 - (_DWORD)v15] > 0x32 ? 0 : 0x8000;
                      v19 = String;
                      v20 = (_BYTE)v16 + (_BYTE)String;
                      v16[v17] = (_BYTE)v16 + (_BYTE)String;
                      *v16++ = v20;
                    }
                    while ( (int)&v16[(int)v19] <= 255 );
LABEL_39:
                    v11 = v53;
                    v2 = 0;
                    goto LABEL_40;
                  }
                  v21 = CPInfo.LeadByte;
                  if ( CPInfo.LeadByte[0] != 0 )
                  {
                    v22 = (char *)v53;
                    do
                    {
                      v23 = v21[1];
                      if ( v23 == 0 )
                        break;
                      v24 = *v21;
                      if ( v24 <= (unsigned int)v23 )
                      {
                        String = &v15[v24 + 128];
                        v25 = v22 + 256;
                        v26 = String;
                        v44 = v13 - v15;
                        v27 = &v25[2 * v24];
                        v28 = v44;
                        v45 = v27;
                        do
                        {
                          *(_WORD *)v27 = 0x8000;
                          v27 += 2;
                          v26[v28] = v24;
                          *v26++ = v24++;
                        }
                        while ( v24 <= v21[1] );
                        v15 = v50;
                        v13 = v52;
                        v22 = (char *)v53;
                      }
                      v21 += 2;
                    }
                    while ( *v21 != 0 );
                    goto LABEL_39;
                  }
                }
LABEL_40:
                v29 = v53;
                v30 = (char *)v52;
                qmemcpy(v53, v11 + 256, 0xFCu);
                v29[126] = v11[382];
                qmemcpy(v30, v30 + 256, 0x7Fu);
                qmemcpy(v15, v15 + 256, 0x7Fu);
                v31 = v47;
                v32 = *(volatile signed __int32 **)(v47 + 140);
                if ( v32 != nullptr && _InterlockedExchangeAdd(v32, 0xFFFFFFFF) == 0 )
                {
                  _free_base((void *)(*(_DWORD *)(v31 + 144) - 254));
                  _free_base((void *)(*(_DWORD *)(v31 + 148) - 128));
                  _free_base((void *)(*(_DWORD *)(v31 + 152) - 128));
                  _free_base(*(void **)(v31 + 140));
                }
                v33 = Block;
                *(_DWORD *)Block = 1;
                *(_DWORD *)(v31 + 140) = v33;
                *(_DWORD *)v31 = v43;
                *(_DWORD *)(v31 + 144) = v42;
                *(_DWORD *)(v31 + 148) = v41;
                *(_DWORD *)(v31 + 152) = v40;
                *(_DWORD *)(v31 + 4) = MaxCharSize_low;
                goto LABEL_45;
              }
            }
          }
        }
      }
    }
    _free_base(Block);
    _free_base(v53);
    _free_base(v52);
    _free_base(v3);
    v2 = 1;
LABEL_45:
    _free_base((void *)lpMultiByteStr);
    return v2;
  }
  v35 = *(volatile signed __int32 **)(a1 + 140);
  if ( v35 != nullptr )
    _InterlockedDecrement(v35);
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)a1 = asc_42B2C8;
  *(_DWORD *)(a1 + 148) = &unk_42B548;
  *(_DWORD *)(a1 + 152) = &unk_42B6C8;
  *(_DWORD *)(a1 + 4) = 1;
  return 0;
}

