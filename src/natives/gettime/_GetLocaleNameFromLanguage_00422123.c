// gettime.exe @ 0x422123 size=89

int __cdecl GetLocaleNameFromLanguage(__int16 **a1)
{
  int PrimaryLen; // edx
  __int16 *v2; // ecx
  __int16 v3; // ax
  int v4; // ecx
  int result; // eax

  PrimaryLen = 2;
  v2 = *a1;
  do
    v3 = *v2++;
  while ( v3 != 0 );
  v4 = v2 - (*a1 + 1);
  a1[4] = (__int16 *)(v4 == 3);
  if ( v4 != 3 )
    PrimaryLen = GetPrimaryLen(*a1);
  a1[3] = (__int16 *)PrimaryLen;
  result = __acrt_EnumSystemLocalesEx((int)LanguageEnumProcEx, 3, 0, 0);
  if ( ((_BYTE)a1[2] & 4) == 0 )
    a1[2] = nullptr;
  return result;
}

