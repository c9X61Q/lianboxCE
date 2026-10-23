// gettime.exe @ 0x418f72 size=182

void __cdecl initialize_inherited_file_handles_nolock()
{
  LPBYTE lpReserved2; // ebx
  int v1; // esi
  int v2; // edi
  HANDLE *v3; // eax
  BYTE v4; // dl
  int v5; // edx
  struct _STARTUPINFOW StartupInfo; // [esp+0h] [ebp-48h] BYREF
  BYTE *v7; // [esp+44h] [ebp-4h]

  GetStartupInfoW(&StartupInfo);
  if ( StartupInfo.cbReserved2 != 0 )
  {
    lpReserved2 = StartupInfo.lpReserved2;
    if ( StartupInfo.lpReserved2 != nullptr )
    {
      v1 = *(_DWORD *)StartupInfo.lpReserved2;
      v7 = &StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
      if ( v1 >= 0x2000 )
        v1 = 0x2000;
      __acrt_lowio_ensure_fh_exists(v1);
      if ( v1 > dword_438C48 )
        v1 = dword_438C48;
      v2 = 0;
      if ( v1 != 0 )
      {
        v3 = (HANDLE *)v7;
        do
        {
          if ( *v3 != (HANDLE)-1 && *v3 != (HANDLE)-2 )
          {
            v4 = lpReserved2[v2 + 4];
            if ( (v4 & 1) != 0 )
            {
              if ( (v4 & 8) != 0 || GetFileType(*v3) != 0 )
              {
                v5 = dword_438A48[v2 >> 6] + 56 * (v2 & 0x3F);
                *(_DWORD *)(v5 + 24) = *(_DWORD *)v7;
                *(_BYTE *)(v5 + 40) = lpReserved2[v2 + 4];
              }
              v3 = (HANDLE *)v7;
            }
          }
          ++v2;
          v7 = (BYTE *)++v3;
        }
        while ( v2 != v1 );
      }
    }
  }
}

