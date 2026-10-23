// gettime.exe @ 0x419d07 size=118

void __cdecl tzset_nolock()
{
  wchar_t *tz_environment_variable; // eax
  wchar_t *v1; // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-204h] BYREF

  dword_43744C = -1;
  dword_437440 = -1;
  dword_438C68 = 0;
  tz_environment_variable = get_tz_environment_variable((wchar_t (*)[256])Buffer);
  v1 = Buffer != tz_environment_variable ? tz_environment_variable : nullptr;
  if ( tz_environment_variable != nullptr && *tz_environment_variable != 0 )
    tzset_from_environment_nolock(tz_environment_variable);
  else
    tzset_from_system_nolock();
  _free_base(v1);
}

