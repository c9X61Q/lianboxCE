// gettime.exe @ 0x407580 size=74

_Cnd_internal_imp_t *__stdcall sub_407580(_Cnd_internal_imp_t *a1, int a2)
{
  char *v3; // eax

  if ( a2 == 1 )
  {
    sub_402B70(a1, "iostream stream error", 0x15u);
  }
  else
  {
    v3 = (char *)std::_Syserror_map(a2);
    sub_402B10(a1, v3);
  }
  return a1;
}

