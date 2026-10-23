// busybox.exe @ 0x418d98 size=69

_DWORD *__usercall sub_418D98@<eax>(_DWORD *result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // edx
  int v5; // edi
  _BYTE *v6; // edx

  while ( 1 )
  {
    v4 = result[18];
    v5 = result[17];
    if ( v4 <= 7 )
      break;
    v6 = (_BYTE *)result[15];
    result[15] = v6 + 1;
    *v6 = HIBYTE(v5);
    result[17] <<= 8;
    result[18] -= 8;
  }
  result[17] = v5 | (a3 << (32 - v4 - a2));
  result[18] = a2 + v4;
  return result;
}

