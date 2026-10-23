// gettime.exe @ 0x426fe1 size=34

unsigned int __cdecl __crt_mbstring::return_illegal_sequence(__crt_mbstring *this, struct _Mbstatet *a2)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  LOBYTE(a2[3]._Byte) = 1;
  a2[3]._Wchar = 42;
  return -1;
}

