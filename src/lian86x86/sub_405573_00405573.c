// lian86.exe @ 0x00405573  size=357  name=sub_405573
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_405573()
{
  int v0; // esi
  DWORD dwMajorVersion; // ebx
  DWORD dwMinorVersion; // edi
  int v3; // ebp
  bool v4; // zf
  DWORD v5; // ebx
  DWORD v6; // ebx
  DWORD v7; // ebx
  DWORD v8; // ebx
  DWORD v9; // edi
  DWORD v10; // edi
  DWORD v11; // edi
  struct _OSVERSIONINFOW VersionInformation; // [esp+10h] [ebp-34Ch] BYREF
  _DWORD v15[70]; // [esp+124h] [ebp-238h] BYREF
  char v16; // [esp+23Eh] [ebp-11Eh]
  struct _OSVERSIONINFOW v17; // [esp+240h] [ebp-11Ch] BYREF
  char v18; // [esp+35Ah] [ebp-2h]

  VersionInformation.dwOSVersionInfoSize = 276;
  v0 = 200;
  dwMajorVersion = 0;
  dwMinorVersion = 0;
  if ( !GetVersionExW(&VersionInformation) )
    return v0;
  if ( VersionInformation.dwPlatformId == 1 )
  {
    switch ( VersionInformation.dwMinorVersion )
    {
      case 0u:
        return 10;
      case 0xAu:
        return 30;
      case 0x5Au:
        return 40;
      default:
        break;
    }
    return v0;
  }
  if ( VersionInformation.dwPlatformId != 2 )
    return v0;
  v3 = 0;
  if ( sub_40552C(v15) )
  {
    dwMajorVersion = v15[1];
    dwMinorVersion = v15[2];
    v4 = v16 == 1;
  }
  else
  {
    v17.dwOSVersionInfoSize = 284;
    if ( !GetVersionExW(&v17) )
      goto LABEL_10;
    dwMajorVersion = VersionInformation.dwMajorVersion;
    dwMinorVersion = VersionInformation.dwMinorVersion;
    v4 = v18 == 1;
  }
  if ( v4 )
    v3 = 1;
LABEL_10:
  v5 = dwMajorVersion - 3;
  if ( v5 == 0 )
    return 5;
  v6 = v5 - 1;
  if ( v6 == 0 )
    return 20;
  v7 = v6 - 1;
  if ( v7 != 0 )
  {
    v8 = v7 - 1;
    if ( v8 != 0 )
    {
      if ( v8 == 4 && dwMinorVersion == 0 )
        return 110;
    }
    else if ( dwMinorVersion != 0 )
    {
      v9 = dwMinorVersion - 1;
      if ( v9 != 0 )
      {
        v10 = v9 - 1;
        if ( v10 != 0 )
        {
          if ( v10 == 1 )
            return v3 != 0 ? 100 : 105;
        }
        else
        {
          return v3 != 0 ? 90 : 95;
        }
      }
      else
      {
        return v3 != 0 ? 80 : 85;
      }
    }
    else
    {
      return v3 != 0 ? 70 : 75;
    }
  }
  else
  {
    if ( dwMinorVersion == 0 )
      return 50;
    v11 = dwMinorVersion - 1;
    if ( v11 == 0 )
      return 60;
    if ( v11 == 1 )
      return v3 != 0 ? 60 : 65;
  }
  return v0;
}

