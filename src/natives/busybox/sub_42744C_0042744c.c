// busybox.exe @ 0x42744c size=146

__time32_t __usercall sub_42744C@<eax>(int a1@<eax>)
{
  __time32_t result; // eax
  struct tm Tm; // [esp+24h] [ebp-28h] BYREF

  Tm.tm_isdst = -1;
  if ( (int)sub_462A3C(
              a1,
              "%u %u %u %u %u %u %d",
              &Tm.tm_year,
              &Tm.tm_mon,
              &Tm.tm_mday,
              &Tm.tm_hour,
              &Tm.tm_min,
              &Tm,
              &Tm.tm_isdst) <= 5 )
    return -1;
  result = -1;
  if ( Tm.tm_mon != 0 && Tm.tm_year > 0x76Bu )
  {
    --Tm.tm_mon;
    Tm.tm_year -= 1900;
    return mktime(&Tm);
  }
  return result;
}

