// gettime.exe @ 0x420c02 size=26

_BYTE *sub_420C02()
{
  _BYTE *result; // eax

  result = (_BYTE *)dword_4389D8;
  if ( (void *)dword_4389D8 == dword_4389E4 )
  {
    result = copy_environment<char>((const char **)dword_4389D8);
    dword_4389D8 = (int)result;
  }
  return result;
}

