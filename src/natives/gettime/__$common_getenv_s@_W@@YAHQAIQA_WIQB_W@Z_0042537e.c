// gettime.exe @ 0x42537e size=95

int __cdecl common_getenv_s<wchar_t>(int a1, wchar_t *Destination, rsize_t SizeInWords, wchar_t *String2)
{
  int v5; // [esp+10h] [ebp-1Ch]

  __acrt_lock(11);
  v5 = common_getenv_s_nolock<wchar_t>(a1, Destination, SizeInWords, String2);
  __acrt_unlock(11);
  return v5;
}

