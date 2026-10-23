// gettime.exe @ 0x410acb size=656

errno_t __cdecl common_localtime_s<__int64>(struct tm *Tm, __time64_t *a2)
{
  errno_t result; // eax
  __int64 tm_sec; // kr00_8
  int v4; // eax
  __int64 v5; // kr08_8
  __int64 v6; // kr18_8
  __int64 v7; // kr28_8
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  int tm_mday; // eax
  int v12; // eax
  int v13; // edx
  __time64_t Time; // [esp+4h] [ebp-14h] BYREF
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h] BYREF
  int v17; // [esp+14h] [ebp-4h] BYREF

  if ( Tm == nullptr || (memset(Tm, 0xFFu, sizeof(struct tm)), a2 == nullptr) )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( *((int *)a2 + 1) < 0 || *a2 > 0x793582AFFLL )
  {
    *_errno() = 22;
    return 22;
  }
  __tzset();
  v16 = 0;
  v15 = 0;
  v17 = 0;
  if ( sub_4191B7(&v16) != 0 || sub_4191E3(&v15) != 0 || sub_41920F(&v17) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( (unsigned __int64)(*a2 - 259201) > 0x7935041FDLL )
  {
    result = _gmtime64_s(Tm, a2);
    if ( result == 0 )
    {
      tm_sec = Tm->tm_sec;
      if ( v16 != 0 && _isindst(Tm) != 0 )
      {
        v4 = v15 + v17;
        Tm->tm_isdst = 1;
      }
      else
      {
        v4 = v17;
      }
      v5 = tm_sec - v4;
      Tm->tm_sec = v5 % 60;
      if ( v5 % 60 < 0 )
      {
        Tm->tm_sec = v5 % 60 + 60;
        v5 -= 60;
      }
      v6 = Tm->tm_min + v5 / 60;
      Tm->tm_min = v6 % 60;
      if ( v6 % 60 < 0 )
      {
        Tm->tm_min = v6 % 60 + 60;
        v6 -= 60;
      }
      v7 = Tm->tm_hour + v6 / 60;
      Tm->tm_hour = v7 % 24;
      if ( v7 % 24 < 0 )
      {
        Tm->tm_hour = v7 % 24 + 24;
        v7 -= 24;
      }
      v8 = v7 / 24;
      v9 = v7 / 24;
      if ( (((unsigned __int64)(v7 / 24) >> 32) & 0x80000000) != 0LL )
      {
        tm_mday = Tm->tm_mday;
        Tm->tm_wday = (v9 + Tm->tm_wday + 7) % 7;
        v12 = v9 + tm_mday;
        v13 = v9 + Tm->tm_yday;
        Tm->tm_mday = v12;
        if ( v12 > 0 )
        {
          Tm->tm_yday = v13;
        }
        else
        {
          Tm->tm_mon = 11;
          --Tm->tm_year;
          Tm->tm_mday = v12 + 31;
          Tm->tm_yday = v13 + 365;
        }
      }
      else if ( v8 > 0 )
      {
        v10 = v8 + Tm->tm_wday;
        Tm->tm_mday += v9;
        Tm->tm_yday += v9;
        Tm->tm_wday = v10 % 7;
      }
      return 0;
    }
  }
  else
  {
    Time = *a2 - v17;
    result = _gmtime64_s(Tm, &Time);
    if ( result == 0 )
    {
      if ( v16 == 0 || _isindst(Tm) == 0 )
        return 0;
      Time -= v15;
      result = _gmtime64_s(Tm, &Time);
      if ( result == 0 )
      {
        Tm->tm_isdst = 1;
        return 0;
      }
    }
  }
  return result;
}

