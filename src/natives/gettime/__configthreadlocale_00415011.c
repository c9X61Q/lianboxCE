// gettime.exe @ 0x415011 size=98

int __cdecl _configthreadlocale(int Flag)
{
  int v1; // esi
  int v2; // ecx
  int result; // eax
  unsigned int v4; // ecx

  v1 = __acrt_getptd();
  v2 = *(_DWORD *)(v1 + 848);
  result = ((v2 & 2) == 0) + 1;
  if ( Flag == -1 )
  {
    dword_437458 = -1;
  }
  else
  {
    switch ( Flag )
    {
      case 0:
        return result;
      case 1:
        v4 = v2 | 2;
        break;
      case 2:
        v4 = v2 & 0xFFFFFFFD;
        break;
      default:
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    *(_DWORD *)(v1 + 848) = v4;
  }
  return result;
}

