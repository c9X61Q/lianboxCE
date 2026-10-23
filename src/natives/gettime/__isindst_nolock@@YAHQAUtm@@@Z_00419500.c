// gettime.exe @ 0x419500 size=537

bool __cdecl _isindst_nolock(struct tm *const a1)
{
  int v1; // esi
  struct tm *v2; // ebx
  int tm_year; // edi
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int tm_yday; // ecx
  int v11; // esi
  int wDayOfWeek; // [esp+8h] [ebp-1Ch]
  int wDay; // [esp+Ch] [ebp-18h]
  int v14; // [esp+20h] [ebp-4h] BYREF

  v1 = 0;
  v14 = 0;
  if ( sub_4191B7(&v14) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( v14 == 0 )
    return false;
  v2 = a1;
  tm_year = a1->tm_year;
  if ( tm_year != dword_437440 || tm_year != dword_43744C )
  {
    if ( dword_438C68 != 0 )
    {
      if ( TimeZoneInformation.DaylightDate.wYear != 0 )
      {
        v5 = 0;
        v4 = 0;
        wDayOfWeek = 0;
        wDay = TimeZoneInformation.DaylightDate.wDay;
      }
      else
      {
        v4 = TimeZoneInformation.DaylightDate.wDay;
        v5 = 1;
        wDayOfWeek = TimeZoneInformation.DaylightDate.wDayOfWeek;
        wDay = 0;
      }
      cvtdate(
        0,
        v5,
        tm_year,
        TimeZoneInformation.DaylightDate.wMonth,
        v4,
        wDayOfWeek,
        wDay,
        TimeZoneInformation.DaylightDate.wHour,
        TimeZoneInformation.DaylightDate.wMinute,
        TimeZoneInformation.DaylightDate.wSecond,
        TimeZoneInformation.DaylightDate.wMilliseconds);
      v2 = a1;
      if ( TimeZoneInformation.StandardDate.wYear != 0 )
      {
        v8 = 0;
        v6 = 0;
        v7 = 0;
        v1 = TimeZoneInformation.StandardDate.wDay;
      }
      else
      {
        v6 = TimeZoneInformation.StandardDate.wDay;
        v7 = TimeZoneInformation.StandardDate.wDayOfWeek;
        v8 = 1;
      }
      cvtdate(
        1,
        v8,
        a1->tm_year,
        TimeZoneInformation.StandardDate.wMonth,
        v6,
        v7,
        v1,
        TimeZoneInformation.StandardDate.wHour,
        TimeZoneInformation.StandardDate.wMinute,
        TimeZoneInformation.StandardDate.wSecond,
        TimeZoneInformation.StandardDate.wMilliseconds);
    }
    else
    {
      cvtdate(0, 1, tm_year, (tm_year < 107) + 3, (tm_year >= 107) + 1, 0, 0, 2, 0, 0, 0);
      cvtdate(1, 1, a1->tm_year, (tm_year >= 107) + 10, 4 * (tm_year < 107) + 1, 0, 0, 2, 0, 0, 0);
    }
  }
  tm_yday = v2->tm_yday;
  if ( dword_437444 >= dword_437450 )
  {
    if ( tm_yday < dword_437450 || tm_yday > dword_437444 )
      return true;
    if ( tm_yday <= dword_437450 || tm_yday >= dword_437444 )
      goto LABEL_24;
    return false;
  }
  if ( tm_yday < dword_437444 || tm_yday > dword_437450 )
    return false;
  if ( tm_yday > dword_437444 && tm_yday < dword_437450 )
    return true;
LABEL_24:
  v11 = 1000 * (v2->tm_sec + 60 * (v2->tm_min + 60 * v2->tm_hour));
  if ( tm_yday == dword_437444 )
    return v11 >= dword_437448;
  else
    return v11 < dword_437454;
}

