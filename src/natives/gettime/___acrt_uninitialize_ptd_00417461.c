// gettime.exe @ 0x417461 size=26

char __acrt_uninitialize_ptd()
{
  if ( dword_4371A0 != -1 )
  {
    sub_41A2EC(dword_4371A0);
    dword_4371A0 = -1;
  }
  return 1;
}

