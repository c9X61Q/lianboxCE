// busybox.exe @ 0x420c50 size=86

_BYTE *__thiscall sub_420C50(void *this)
{
  _DWORD *v1; // ebx
  int v2; // esi
  _BYTE *result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // edx

  v1 = dword_48600C;
  v2 = *((_DWORD *)dword_48600C + 8);
  while ( 1 )
  {
    result = (_BYTE *)v1[5];
    v4 = (unsigned __int8)result[v2];
    if ( (_BYTE)v4 == 0 )
      break;
    if ( (_BYTE)v4 != 32 && *(_BYTE *)sub_4635B0(this, v4) == 0 )
    {
      do
      {
        sub_43B1AC();
        result = (_BYTE *)v1[5];
        v6 = (unsigned __int8)result[v2];
        if ( (v6 & 0xDF) == 0 )
          break;
        result = (_BYTE *)sub_4635B0(v5, v6);
      }
      while ( *result == 0 );
      return result;
    }
    sub_43B1AC();
  }
  return result;
}

