// busybox.exe @ 0x4309f0 size=108

_BYTE *__usercall sub_4309F0@<eax>(_BYTE *a1@<eax>, unsigned __int8 a2@<dl>)
{
  int v3; // eax
  char v4; // bl
  int v5; // edx
  _BYTE *result; // eax
  int v7; // edi

  v3 = (strchr("()[]{}", a2) - "()[]{}") ^ 1;
  v4 = asc_47B3B8[v3];
  v5 = ((2 * (_BYTE)v3) & 2) - 1;
  result = a1;
  v7 = 1;
  while ( 1 )
  {
    result += v5;
    if ( *(_DWORD *)dword_486010 > (unsigned int)result || *(_DWORD *)(dword_486010 + 4) <= (unsigned int)result )
      break;
    if ( *result == a2 )
      ++v7;
    if ( *result == v4 && --v7 == 0 )
      return result;
  }
  return nullptr;
}

