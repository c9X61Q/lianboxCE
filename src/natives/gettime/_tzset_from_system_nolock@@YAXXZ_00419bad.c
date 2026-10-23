// gettime.exe @ 0x419bad size=345

void __cdecl tzset_from_system_nolock()
{
  void **v0; // edi
  void **v1; // ebx
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  v0 = (void **)sub_4191AB();
  v1 = (void **)sub_4191B1();
  v10 = 0;
  v9 = 0;
  v8 = 0;
  if ( sub_41920F(&v10) != 0 || sub_4191B7(&v9) != 0 || sub_4191E3(&v8) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  _free_base(Block);
  Block = nullptr;
  if ( GetTimeZoneInformation(&TimeZoneInformation) != -1 )
  {
    v2 = 1;
    dword_438C68 = 1;
    v10 = 60 * TimeZoneInformation.Bias;
    if ( TimeZoneInformation.StandardDate.wMonth != 0 )
      v10 = 60 * TimeZoneInformation.Bias + 60 * TimeZoneInformation.StandardBias;
    if ( TimeZoneInformation.DaylightDate.wMonth != 0 && TimeZoneInformation.DaylightBias != 0 )
    {
      v3 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
    }
    else
    {
      v3 = 0;
      v2 = 0;
    }
    v9 = v2;
    v8 = v3;
    memset(*v1, 0, 0x80u);
    memset(v1[1], 0, 0x80u);
    memset(*v0, 0, 0x40u);
    memset(v0[1], 0, 0x40u);
    v4 = ___lc_codepage_func();
    tzset_os_copy_to_tzname(TimeZoneInformation.StandardName, (wchar_t *const)*v1, (LPSTR)*v0, v4);
    tzset_os_copy_to_tzname(TimeZoneInformation.DaylightName, (wchar_t *const)v1[1], (LPSTR)v0[1], v4);
  }
  v5 = v10;
  *sub_4191A5() = v5;
  v6 = v9;
  *sub_419199() = v6;
  v7 = v8;
  *sub_41919F() = v7;
}

