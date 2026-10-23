// gettime.exe @ 0x422e93 size=225

UINT __cdecl ProcessCodePage_0(unsigned __int16 *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  unsigned __int16 *v4; // esi
  unsigned __int16 *v5; // edx
  bool v6; // cf
  unsigned __int16 v7; // di
  UINT result; // eax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h] BYREF

  if ( a1 != nullptr )
  {
    v2 = 0;
    if ( *a1 != 0 )
    {
      v3 = wcscmp(a1, off_42E4E0);
      if ( v3 != 0 )
        v3 = v3 < 0 ? -1 : 1;
      if ( v3 != 0 )
      {
        v4 = (unsigned __int16 *)&off_42E4F4;
        v5 = a1;
        while ( 1 )
        {
          v6 = *v5 < *v4;
          if ( *v5 != *v4 )
            break;
          if ( *v5 == 0 )
            goto LABEL_13;
          v7 = v5[1];
          v6 = v7 < v4[1];
          if ( v7 != v4[1] )
            break;
          v5 += 2;
          v4 += 2;
          if ( v7 == 0 )
            goto LABEL_13;
        }
        v2 = v6 ? -1 : 1;
LABEL_13:
        if ( v2 != 0 )
          return unknown_libname_95(a1);
        if ( GetLocaleInfoW(*(_DWORD *)(a2 + 8), 0x2000000Bu, LCData, 2) != 0 )
          return *(_DWORD *)LCData;
        return 0;
      }
    }
  }
  if ( GetLocaleInfoW(*(_DWORD *)(a2 + 8), 0x20001004u, LCData, 2) == 0 )
    return 0;
  result = *(_DWORD *)LCData;
  if ( *(_DWORD *)LCData == 0 )
    return GetACP();
  return result;
}

