// gettime.exe @ 0x420c1c size=26

_BYTE *sub_420C1C()
{
  _BYTE *result; // eax

  result = (_BYTE *)dword_4389DC;
  if ( (void *)dword_4389DC == dword_4389E0 )
  {
    result = copy_environment<wchar_t>((const wchar_t **)dword_4389DC);
    dword_4389DC = (int)result;
  }
  return result;
}

