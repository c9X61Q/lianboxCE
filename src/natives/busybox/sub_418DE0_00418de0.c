// busybox.exe @ 0x418de0 size=62

_DWORD *__usercall sub_418DE0@<eax>(_DWORD *result@<eax>, int a2@<edx>)
{
  int v2; // ebx
  int v3; // esi
  _BYTE *v4; // ecx

  while ( 1 )
  {
    v2 = result[18];
    v3 = result[17];
    if ( v2 <= 7 )
      break;
    v4 = (_BYTE *)result[15];
    result[15] = v4 + 1;
    *v4 = HIBYTE(v3);
    result[17] <<= 8;
    result[18] -= 8;
  }
  result[17] = v3 | (a2 << (16 - v2));
  result[18] = v2 + 16;
  return result;
}

