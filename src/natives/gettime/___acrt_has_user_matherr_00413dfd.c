// gettime.exe @ 0x413dfd size=29

bool __acrt_has_user_matherr()
{
  return __ROR4__(__security_cookie ^ dword_4388C8, __security_cookie & 0x1F) != 0;
}

