// busybox.exe @ 0x442ad0 size=157

_BYTE *__usercall sub_442AD0@<eax>(_BYTE *a1@<eax>, int a2@<edx>, __int16 a3@<cx>)
{
  int v3; // ebx
  int v6; // ecx
  int v7; // ebp
  _BYTE *v8; // ebx
  int v9; // eax
  _BYTE *v11; // [esp+4h] [ebp-1Ch]
  char v12; // [esp+Fh] [ebp-11h]

  v3 = a2;
  if ( a2 != 0 )
  {
    v7 = sub_441F7C(2 * a2, dword_473334);
    v11 = &a1[v3];
    v8 = (_BYTE *)v7;
    while ( 1 )
    {
      LOBYTE(v6) = *a1++;
      if ( (_BYTE)v6 != 0 )
        break;
      if ( (a3 & 0x200) != 0 )
        goto LABEL_10;
LABEL_11:
      if ( a1 == v11 )
      {
        dword_473334 = (int)v8;
        return &v8[-v7];
      }
    }
    if ( (a3 & 0x11) != 0 )
    {
      v12 = *(a1 - 1);
      v9 = sub_411DE0((unsigned __int8)v6, HIBYTE(a3) & 1, v6);
      LOBYTE(v6) = v12;
      if ( v9 == 12 || (a3 & 0x100) != 0 && v9 == 2 )
        *v8++ = -127;
    }
LABEL_10:
    *v8++ = v6;
    goto LABEL_11;
  }
  return (_BYTE *)v3;
}

