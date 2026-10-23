// busybox.exe @ 0x4227a8 size=202

_BYTE *__usercall sub_4227A8@<eax>(_BYTE **a1@<eax>, _BYTE *a2@<edx>)
{
  _BYTE *v3; // ebx
  _BYTE *v4; // edi
  int v5; // esi
  char *v6; // eax
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // al
  _BYTE *v10; // [esp+8h] [ebp-18h]
  char v11; // [esp+Ch] [ebp-14h]
  unsigned __int8 v12; // [esp+Dh] [ebp-13h]
  unsigned __int8 v13; // [esp+Eh] [ebp-12h]
  char v14; // [esp+Fh] [ebp-11h]

  v3 = *a1;
LABEL_2:
  v4 = a2;
  v5 = 0;
  while ( *a2 != 0 )
  {
    v10 = a2 + 1;
    v6 = strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=", (unsigned __int8)*a2);
    a2 = v10;
    if ( v6 != nullptr )
    {
      if ( v6 == "=" )
      {
        if ( v5 <= 1 )
          goto LABEL_2;
LABEL_11:
        v7 = v12;
        *v3 = (4 * v11) | (v12 >> 4);
        if ( v5 == 2 )
        {
          ++v3;
        }
        else
        {
          v8 = v13;
          v3[1] = (v13 >> 2) | (16 * v7);
          if ( v5 == 4 )
          {
            v3[2] = v14 | (v8 << 6);
            v3 += 3;
          }
          else
          {
            v3 += 2;
          }
        }
        goto LABEL_2;
      }
      *(&v11 + v5++) = v6 - "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
      if ( v5 == 4 )
        goto LABEL_11;
    }
  }
  if ( v5 == 0 )
    v4 = a2;
  *a1 = v3;
  return v4;
}

