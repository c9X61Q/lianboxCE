// gettime.exe @ 0x41985d size=119

wchar_t *__cdecl get_tz_environment_variable(wchar_t (*Buffer)[256])
{
  errno_t v1; // eax
  void *v3; // esi
  size_t v4; // [esp+4h] [ebp-8h] BYREF
  size_t RequiredCount; // [esp+8h] [ebp-4h] BYREF

  v1 = _wgetenv_s(&RequiredCount, (wchar_t *)Buffer, 0x100u, L"TZ");
  if ( v1 == 0 )
    return *Buffer;
  if ( v1 != 34 )
    return nullptr;
  v3 = _malloc_base(2 * RequiredCount);
  if ( v3 == nullptr )
  {
    _free_base(nullptr);
    return nullptr;
  }
  if ( _wgetenv_s(&v4, (wchar_t *)v3, RequiredCount, L"TZ") != 0 )
  {
    _free_base(v3);
    return nullptr;
  }
  _free_base(nullptr);
  return (wchar_t *)v3;
}

