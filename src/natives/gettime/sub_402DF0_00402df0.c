// gettime.exe @ 0x402df0 size=126

int __thiscall sub_402DF0(int this, char *Locale)
{
  std::_Lockit::_Lockit((std::_Lockit *)this, 0);
  std::_Yarn<char>::_Yarn<char>((_BYTE *)(this + 4));
  std::_Yarn<char>::_Yarn<char>((_BYTE *)(this + 12));
  std::_Yarn<wchar_t>::_Yarn<wchar_t>((_WORD *)(this + 20));
  std::_Yarn<wchar_t>::_Yarn<wchar_t>((_WORD *)(this + 28));
  std::_Yarn<char>::_Yarn<char>((_BYTE *)(this + 36));
  std::_Yarn<char>::_Yarn<char>((_BYTE *)(this + 44));
  if ( Locale == nullptr )
    sub_408B5C("bad locale name");
  std::_Locinfo::_Locinfo_ctor((struct std::_Locinfo *)this, Locale);
  return this;
}

