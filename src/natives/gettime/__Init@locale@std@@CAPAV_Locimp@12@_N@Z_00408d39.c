// gettime.exe @ 0x408d39 size=144

static struct std::locale::_Locimp *__cdecl std::locale::_Init(bool a1)
{
  struct std::locale::_Locimp *v1; // edi
  _BYTE v3[12]; // [esp+10h] [ebp-10h] BYREF
  int v4; // [esp+1Ch] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v3, 0);
  v1 = (struct std::locale::_Locimp *)dword_4380DC;
  v4 = 0;
  if ( dword_4380DC == 0 )
  {
    v1 = std::locale::_Locimp::_New_Locimp(false);
    std::locale::_Setgloballocale(v1);
    *((_DWORD *)v1 + 4) = 63;
    std::_Yarn<char>::operator=((void **)v1 + 6, byte_42A040);
    dword_4380B4 = (int)v1;
    (*(void (__thiscall **)(struct std::locale::_Locimp *))(*(_DWORD *)v1 + 4))(v1);
    dword_4380D0 = dword_4380B4;
  }
  if ( a1 )
    (*(void (__thiscall **)(struct std::locale::_Locimp *))(*(_DWORD *)v1 + 4))(v1);
  std::_Lockit::~_Lockit((std::_Lockit *)v3);
  return v1;
}

