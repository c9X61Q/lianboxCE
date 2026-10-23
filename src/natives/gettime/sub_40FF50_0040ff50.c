// gettime.exe @ 0x40ff50 size=345

char __thiscall sub_40FF50(void *this)
{
  char v1; // al
  int v3; // eax
  _BYTE *v4; // eax
  int v5; // eax
  char *v6; // esi
  char v7; // al
  _BYTE *v8; // eax
  int v9; // [esp-4h] [ebp-4h]

  v1 = *((_BYTE *)this + 45);
  if ( v1 == 70 )
  {
    if ( (*(_DWORD *)this & 8) == 0 )
    {
      *((_BYTE *)this + 24) = 7;
      return sub_4100A9(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_DWORD *)this & 8) == 0 )
    {
      *((_BYTE *)this + 24) = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, *((struct __acrt_ptd ***)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) != 0 )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 't':
          *((_DWORD *)this + 10) = 7;
          break;
        case 'w':
          *((_DWORD *)this + 10) = 12;
          break;
        case 'z':
          *((_DWORD *)this + 10) = 6;
          break;
        default:
          break;
      }
      return 1;
    }
    v8 = *((_BYTE **)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_45;
  }
  switch ( v1 )
  {
    case 'j':
      *((_DWORD *)this + 10) = 5;
      return 1;
    case 'I':
      v6 = *((char **)this + 3);
      v7 = *v6;
      if ( *v6 == 51 && v6[1] == 50 )
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      else if ( v7 == 54 )
      {
        if ( v6[1] == 52 )
        {
          *((_DWORD *)this + 10) = 11;
          *((_DWORD *)this + 3) = v6 + 2;
        }
      }
      else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
      {
        *((_DWORD *)this + 10) = 9;
      }
      return 1;
    case 'L':
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 'T':
      *((_DWORD *)this + 10) = 13;
      return 1;
    case 'h':
      v4 = *((_BYTE **)this + 3);
      if ( *v4 == 104 )
      {
        *((_DWORD *)this + 3) = v4 + 1;
        v5 = 1;
LABEL_46:
        *((_DWORD *)this + 10) = v5;
        return 1;
      }
      v9 = 2;
LABEL_45:
      v5 = v9;
      goto LABEL_46;
    default:
      break;
  }
  return 1;
}

