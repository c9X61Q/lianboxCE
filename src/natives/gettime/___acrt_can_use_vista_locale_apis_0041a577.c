// gettime.exe @ 0x41a577 size=11

bool __acrt_can_use_vista_locale_apis()
{
  return try_get_CompareStringEx() != nullptr;
}

