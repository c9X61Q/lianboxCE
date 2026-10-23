// gettime.exe @ 0x427db0 size=124

int __usercall sub_427DB0@<eax>(double a1@<st0>)
{
  int result; // eax
  unsigned __int16 v2; // cx
  __int16 v4; // [esp+8h] [ebp-Ch]

  if ( dword_4386A4 >= 2 )
    return (int)a1;
  result = HIDWORD(a1);
  v2 = v4 & 0x7FFF;
  if ( (v4 & 0x7FFFu) < 0x3FFF )
    return 0;
  if ( a1 >= 0.0 )
    return 0x80000000;
  if ( v2 < 0x401Eu )
    return (-(v4 < 0) ^ (HIDWORD(a1) >> (62 - v4))) + (v4 < 0);
  if ( v2 > 0x401Eu || (v4 & 0x8000) == 0 || HIDWORD(a1) != 0x80000000 )
    return 0x80000000;
  return result;
}

