// gettime.exe @ 0x422f99 size=117

BOOL __cdecl TestDefaultLanguage(int a1, int a2)
{
  struct __acrt_ptd *v2; // edi
  __int16 *v3; // esi
  _WORD *v4; // ecx
  __int16 v5; // ax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h] BYREF

  v2 = __acrt_getptd();
  if ( GetLocaleInfoW(a1 & 0x3FF | 0x400, 0x20000001u, LCData, 2) == 0 )
    return false;
  if ( a1 == *(_DWORD *)LCData || a2 == 0 )
    return true;
  v3 = *((__int16 **)v2 + 20);
  v4 = v3 + 1;
  do
    v5 = *v3++;
  while ( v5 != 0 );
  return GetPrimaryLen_0(*((unsigned __int16 **)v2 + 20)) != v3 - v4;
}

