// busybox.exe @ 0x44f0d4 size=86

void *__usercall sub_44F0D4@<eax>(_DWORD *a1@<eax>, void *a2@<edx>)
{
  void *result; // eax
  _BYTE *i; // ecx
  _BYTE *v5; // ecx
  _BYTE *v6; // eax
  _BYTE *j; // edx
  int v8; // edx

  result = a2;
  for ( i = a2; ; ++i )
  {
    if ( *i == 0 )
    {
      if ( a1 != nullptr )
      {
        v5 = (_BYTE *)(i - (_BYTE *)a2);
        *a1 = v5;
        a1[1] = v5;
        a1[2] = v5;
      }
      return result;
    }
    if ( (unsigned __int8)(*i - 32) > 0x5Eu )
      break;
  }
  v6 = (_BYTE *)sub_47188C();
  for ( j = v6; *j != 0; ++j )
  {
    if ( *j <= 0x1Fu )
      *j = 63;
  }
  if ( a1 != nullptr )
  {
    v8 = j - v6;
    *a1 = v8;
    a1[1] = v8;
    a1[2] = v8;
  }
  return sub_415D34(v6);
}

