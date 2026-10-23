// gettime.exe @ 0x411259 size=39

wchar_t **__cdecl ___lc_locale_name_func()
{
  int v0; // ecx
  int v1; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v0;
  v1 = __acrt_getptd();
  v3 = *(_DWORD *)(v1 + 76);
  sub_417F5D(v1, &v3);
  return (wchar_t **)(v3 + 160);
}

