// gettime.exe @ 0x408e39 size=75

static void __cdecl std::_Locinfo::_Locinfo_ctor(void **a1, char *Locale)
{
  char *v2; // eax
  char *v3; // eax

  v2 = setlocale(0, nullptr);
  if ( v2 == nullptr )
    v2 = (char *)&unk_429264;
  std::_Yarn<char>::operator=(a1 + 9, v2);
  if ( Locale == nullptr || (v3 = setlocale(0, Locale)) == nullptr )
    v3 = (char *)&unk_42A03C;
  std::_Yarn<char>::operator=(a1 + 11, v3);
}

