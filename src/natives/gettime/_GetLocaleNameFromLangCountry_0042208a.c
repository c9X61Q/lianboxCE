// gettime.exe @ 0x42208a size=153

bool __cdecl GetLocaleNameFromLangCountry(__int16 **a1)
{
  int PrimaryLen; // edi
  __int16 *v2; // ecx
  __int16 v3; // ax
  __int16 *v4; // edx
  int v5; // ecx
  _WORD *v6; // ebx
  __int16 v7; // ax
  bool result; // al

  PrimaryLen = 2;
  v2 = *a1;
  do
    v3 = *v2++;
  while ( v3 != 0 );
  v4 = a1[1];
  v5 = v2 - (*a1 + 1);
  v6 = v4 + 1;
  a1[4] = (__int16 *)(v5 == 3);
  do
    v7 = *v4++;
  while ( v7 != 0 );
  a1[5] = (__int16 *)(v4 - v6 == 3);
  if ( v5 != 3 )
    PrimaryLen = GetPrimaryLen(*a1);
  a1[3] = (__int16 *)PrimaryLen;
  __acrt_EnumSystemLocalesEx((int)LangCountryEnumProcEx, 3, 0, 0);
  result = ((unsigned int)a1[2] & 0x100) != 0;
  if ( ((unsigned int)a1[2] & 0x200) == 0 || ((unsigned __int8)a1[2] & 7) == 0 || !result )
    a1[2] = nullptr;
  return result;
}

