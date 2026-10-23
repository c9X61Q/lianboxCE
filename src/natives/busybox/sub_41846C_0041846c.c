// busybox.exe @ 0x41846c size=163

_BYTE *__userpurge sub_41846C@<eax>(_BYTE *result@<eax>, _BYTE *a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned int v5; // ebp
  _BYTE *v6; // ecx
  unsigned int v7; // [esp+0h] [ebp-18h]

  while ( a3 > 0 )
  {
    a3 -= 3;
    v5 = 0;
    v7 = 0;
    if ( a3 != -2 )
    {
      v7 = (unsigned __int8)a2[1];
      if ( a3 != -1 )
        v5 = (unsigned __int8)a2[2];
    }
    *result = *(_BYTE *)(a4 + (*a2 >> 2));
    result[1] = *(_BYTE *)(((16 * *a2) & 0x30) + a4 + (v7 >> 4));
    result[2] = *(_BYTE *)(a4 + ((4 * (_BYTE)v7) & 0x3C) + (v5 >> 6));
    result += 4;
    *(result - 1) = *(_BYTE *)(a4 + (v5 & 0x3F));
    a2 += 3;
  }
  *result = 0;
  v6 = &result[a3];
  while ( v6 != result )
    *--result = *(_BYTE *)(a4 + 64);
  return result;
}

