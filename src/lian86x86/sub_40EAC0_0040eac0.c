// lian86.exe @ 0x0040eac0  size=636  name=sub_40EAC0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_BYTE *__stdcall sub_40EAC0(_BYTE *a1, int a2)
{
  _BYTE *v3; // [esp+0h] [ebp-Ch]
  int v4; // [esp+4h] [ebp-8h]
  char v5; // [esp+8h] [ebp-4h]

  v4 = 0;
  v3 = a1;
  while ( *a1 != 0 && v4 < a2 )
  {
    v5 = *a1;
    if ( (*a1 & 0x80) != 0 )
    {
      if ( (v5 & 0xE0) == 0xC0 )
      {
        if ( (*++a1 & 0xC0) == 0x80 )
        {
          ++a1;
          ++v4;
        }
      }
      else if ( (v5 & 0xF0) == 0xE0 && a1[1] != 0 )
      {
        if ( (a1[1] & 0xC0) == 0x80 && (a1[2] & 0xC0) == 0x80 )
        {
          a1 += 3;
          ++v4;
        }
        else if ( (a1[1] & 0xC0) == 0x80 )
        {
          a1 += 2;
        }
        else
        {
          ++a1;
        }
      }
      else if ( (v5 & 0xF8) == 0xF0 && a1[1] != 0 && a1[2] != 0 )
      {
        if ( (a1[1] & 0xC0) == 0x80 && (a1[2] & 0xC0) == 0x80 && (a1[3] & 0xC0) == 0x80 )
        {
          a1 += 4;
          ++v4;
        }
        else if ( (a1[1] & 0xC0) == 0x80 && (a1[2] & 0xC0) == 0x80 )
        {
          a1 += 3;
        }
        else if ( (a1[1] & 0xC0) == 0x80 )
        {
          a1 += 2;
        }
        else
        {
          ++a1;
        }
      }
      else
      {
        ++a1;
      }
    }
    else
    {
      ++a1;
      ++v4;
    }
  }
  return (_BYTE *)(a1 - v3);
}

