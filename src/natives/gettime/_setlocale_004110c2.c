// gettime.exe @ 0x4110c2 size=56

char *__cdecl setlocale(int Category, const char *Locale)
{
  _DWORD v3[2]; // [esp+0h] [ebp-14h] BYREF
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF

  __acrt_eagerly_load_locale_apis();
  v3[0] = &Category;
  v3[1] = &Locale;
  v5 = 4;
  v4 = 4;
  return (char *)sub_410E6D(&v4, (int)v3, &v5);
}

