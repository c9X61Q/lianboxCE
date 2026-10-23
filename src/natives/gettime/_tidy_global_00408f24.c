// gettime.exe @ 0x408f24 size=42

void __thiscall tidy_global(void *this)
{
  void *v1; // [esp+0h] [ebp-4h] BYREF

  v1 = this;
  std::_Lockit::_Lockit((std::_Lockit *)&v1, 0);
  _Deletegloballocale(&dword_4380DC);
  dword_4380DC = 0;
  std::_Lockit::~_Lockit((std::_Lockit *)&v1);
}

