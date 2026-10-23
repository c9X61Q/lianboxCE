// gettime.exe @ 0x41b7ad size=962

DWORD *__cdecl write_double_translated_ansi_nolock(DWORD *a1, int a2, void *a3, int a4, __crt_cached_ptd_host *a5)
{
  int v5; // eax
  UINT ConsoleOutputCP; // eax
  bool v7; // zf
  DWORD *v8; // esi
  int v9; // ecx
  CHAR *v10; // edx
  int v11; // edi
  int v12; // ebx
  int v13; // ecx
  unsigned __int8 *v14; // eax
  int v15; // edi
  int v16; // edi
  _BYTE *v17; // ebx
  int v18; // edx
  int v19; // esi
  signed int v20; // ecx
  size_t v21; // eax
  size_t v22; // ecx
  char v23; // ah
  int v24; // eax
  DWORD v25; // eax
  CHAR *v26; // eax
  int v27; // esi
  unsigned __int8 v28; // cl
  int v29; // edx
  int v30; // esi
  struct _Mbstatet *v32; // [esp-4h] [ebp-94h]
  struct __crt_cached_ptd_host *v33; // [esp+0h] [ebp-90h]
  unsigned int v34[2]; // [esp+10h] [ebp-80h] BYREF
  unsigned int v35[2]; // [esp+18h] [ebp-78h] BYREF
  int v36; // [esp+20h] [ebp-70h]
  unsigned int v37; // [esp+24h] [ebp-6Ch]
  wchar_t v38[2]; // [esp+28h] [ebp-68h] BYREF
  HANDLE hFile; // [esp+2Ch] [ebp-64h]
  void *Src; // [esp+30h] [ebp-60h]
  DWORD NumberOfBytesWritten; // [esp+34h] [ebp-5Ch] BYREF
  __int16 v42; // [esp+38h] [ebp-58h] BYREF
  unsigned int v43; // [esp+3Ch] [ebp-54h]
  int v44; // [esp+40h] [ebp-50h]
  size_t Size; // [esp+44h] [ebp-4Ch]
  unsigned __int8 *v46; // [esp+48h] [ebp-48h]
  int v47; // [esp+4Ch] [ebp-44h]
  WCHAR WideCharStr[2]; // [esp+50h] [ebp-40h] BYREF
  struct _Mbstatet *v49; // [esp+54h] [ebp-3Ch]
  wchar_t v50[2]; // [esp+58h] [ebp-38h] BYREF
  int cchWideChar; // [esp+5Ch] [ebp-34h]
  CHAR v52; // [esp+63h] [ebp-2Dh]
  CHAR *v53; // [esp+64h] [ebp-2Ch]
  CHAR Buffer[8]; // [esp+68h] [ebp-28h] BYREF
  CHAR v55[8]; // [esp+70h] [ebp-20h] BYREF
  _BYTE v56[8]; // [esp+78h] [ebp-18h] BYREF

  Src = a3;
  v49 = (struct _Mbstatet *)a5;
  v47 = a2 >> 6;
  v5 = dword_438A48[a2 >> 6];
  v44 = 56 * (a2 & 0x3F);
  hFile = *(HANDLE *)(v44 + v5 + 24);
  v43 = (unsigned int)a3 + a4;
  ConsoleOutputCP = GetConsoleOutputCP();
  v7 = *((_BYTE *)a5 + 20) == 0;
  v37 = ConsoleOutputCP;
  if ( v7 )
    __crt_cached_ptd_host::update_locale_slow(a5);
  v8 = a1;
  v9 = *(_DWORD *)(*((_DWORD *)a5 + 3) + 8);
  *a1 = 0;
  v36 = v9;
  a1[1] = 0;
  a1[2] = 0;
  v10 = (CHAR *)Src;
  v53 = (CHAR *)Src;
  if ( (unsigned int)Src < v43 )
  {
    v11 = v44;
    v12 = 0;
    v46 = nullptr;
    while ( 1 )
    {
      v52 = *v10;
      *(_DWORD *)WideCharStr = 0;
      cchWideChar = 1;
      if ( v9 == 65001 )
      {
        v13 = 0;
        v14 = (unsigned __int8 *)(v11 + dword_438A48[v47] + 46);
        v46 = v14;
        do
        {
          if ( *v14 == 0 )
            break;
          ++v13;
          ++v14;
        }
        while ( v13 < 5 );
        v15 = v43 - (_DWORD)v10;
        cchWideChar = v13;
        if ( v13 <= 0 )
        {
          v20 = byte_437460[(unsigned __int8)*v10] + 1;
          Size = v20;
          if ( v20 > v15 )
          {
            if ( v15 > 0 )
            {
              v30 = v44;
              do
              {
                *(_BYTE *)(v30 + dword_438A48[v47] + v12 + 46) = v10[v12];
                ++v12;
              }
              while ( v12 < v15 );
LABEL_44:
              v8 = a1;
            }
LABEL_45:
            v8[1] += v15;
            return v8;
          }
          v34[0] = 0;
          v34[1] = 0;
          *(_DWORD *)v50 = v10;
          cchWideChar = (v20 == 4) + 1;
          if ( __crt_mbstring::__mbsrtowcs_utf8(
                 (__crt_mbstring *)WideCharStr,
                 v50,
                 (const char **)cchWideChar,
                 (unsigned int)v34,
                 v49,
                 v33) == -1 )
            return v8;
          v11 = v44;
        }
        else
        {
          *(_DWORD *)v50 = byte_437460[*v46] + 1;
          Size = *(_DWORD *)v50 - v13;
          if ( *(_DWORD *)v50 - v13 > v15 )
          {
            if ( v15 > 0 )
            {
              v26 = v53;
              v27 = cchWideChar;
              do
              {
                v28 = v26[v12];
                v29 = v12 + v44 + dword_438A48[v47];
                ++v12;
                *(_BYTE *)(v29 + v27 + 46) = v28;
              }
              while ( v12 < v15 );
              goto LABEL_44;
            }
            goto LABEL_45;
          }
          v16 = 0;
          v17 = v46;
          do
            v56[v16++] = *v17++;
          while ( v16 < v13 );
          v12 = 0;
          if ( (int)Size > 0 )
          {
            memmove(&v56[v13], v10, Size);
            v13 = cchWideChar;
          }
          v11 = v44;
          v18 = 0;
          v19 = v47;
          do
            *(_BYTE *)(v11 + dword_438A48[v19] + v18++ + 46) = 0;
          while ( v18 < v13 );
          v8 = a1;
          *(_DWORD *)v38 = v56;
          v35[0] = 0;
          v35[1] = 0;
          cchWideChar = (*(_DWORD *)v50 == 4) + 1;
          if ( __crt_mbstring::__mbsrtowcs_utf8(
                 (__crt_mbstring *)WideCharStr,
                 v38,
                 (const char **)cchWideChar,
                 (unsigned int)v35,
                 v49,
                 v33) == -1 )
            return v8;
        }
        v21 = (size_t)&v53[Size - 1];
      }
      else
      {
        v22 = dword_438A48[v47];
        Size = v22;
        v23 = *(_BYTE *)(v22 + v11 + 45);
        if ( (v23 & 4) != 0 )
        {
          v32 = v49;
          v55[0] = *(_BYTE *)(v22 + v11 + 46);
          v55[1] = *v10;
          *(_BYTE *)(v22 + v11 + 45) = v23 & 0xFB;
          v24 = _mbtowc_internal((__crt_mbstring *)WideCharStr, v55, (char *)2, v32);
LABEL_30:
          if ( v24 == -1 )
            return v8;
          v21 = (size_t)v53;
          goto LABEL_32;
        }
        if ( *(__int16 *)(**(_DWORD **)&v49[1]._Byte + 2 * (unsigned __int8)*v10) >= 0 )
        {
          v24 = _mbtowc_internal((__crt_mbstring *)WideCharStr, v10, (char *)1, v49);
          goto LABEL_30;
        }
        *(_DWORD *)v50 = v10 + 1;
        if ( (unsigned int)(v10 + 1) >= v43 )
        {
          *(_BYTE *)(Size + v11 + 46) = *v10;
          *(_BYTE *)(dword_438A48[v47] + v11 + 45) |= 4u;
          v8[1] = (DWORD)(v46 + 1);
          return v8;
        }
        if ( _mbtowc_internal((__crt_mbstring *)WideCharStr, v10, (char *)2, v49) == -1 )
          return v8;
        v21 = *(_DWORD *)v50;
      }
LABEL_32:
      v53 = (CHAR *)(v21 + 1);
      v25 = __acrt_WideCharToMultiByte(v37, 0, WideCharStr, cchWideChar, Buffer, 5, 0, 0);
      *(_DWORD *)v50 = v25;
      if ( v25 == 0 )
        return v8;
      if ( !WriteFile(hFile, Buffer, v25, &NumberOfBytesWritten, nullptr) )
      {
LABEL_51:
        *v8 = GetLastError();
        return v8;
      }
      v10 = v53;
      v46 = (unsigned __int8 *)&v53[v8[2] - (_DWORD)Src];
      v8[1] = (DWORD)v46;
      if ( NumberOfBytesWritten < *(_DWORD *)v50 )
        return v8;
      if ( v52 == 10 )
      {
        v42 = 13;
        if ( !WriteFile(hFile, &v42, 1u, &NumberOfBytesWritten, nullptr) )
          goto LABEL_51;
        if ( NumberOfBytesWritten == 0 )
          return v8;
        ++v8[2];
        ++v8[1];
        v10 = v53;
        v46 = (unsigned __int8 *)v8[1];
      }
      if ( (unsigned int)v10 >= v43 )
        return v8;
      v9 = v36;
    }
  }
  return v8;
}

