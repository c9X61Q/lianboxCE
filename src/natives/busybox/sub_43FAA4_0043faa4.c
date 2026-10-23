// busybox.exe @ 0x43faa4 size=176

int __cdecl sub_43FAA4(_BYTE *a1, unsigned int a2, _BYTE *a3, _DWORD *a4, int a5)
{
  unsigned int v5; // eax
  _BYTE *v6; // edx
  _BYTE *v7; // edi
  char v8; // cl
  unsigned int v9; // ecx
  _BYTE *v10; // esi

  if ( a2 <= 0xD )
  {
    v5 = a2;
    v6 = a3;
  }
  else
  {
    v5 = sub_426644(a1, a2, a3, a4, a5);
    v6 = &a3[*a4];
  }
  if ( v5 != 0 )
  {
    v7 = v6 + 1;
    if ( v5 > 0xEE || (v8 = v5 + 17, v6 != a3) )
    {
      if ( v5 <= 3 )
      {
        *(v6 - 2) |= v5;
LABEL_16:
        v7 = v6;
LABEL_17:
        v10 = &a1[a2 - v5];
        v6 = &v7[v5];
        do
          *v7++ = *v10++;
        while ( v7 != v6 );
        goto LABEL_19;
      }
      if ( v5 > 0x12 )
      {
        v9 = v5 - 18;
        *v6 = 0;
        while ( 1 )
        {
          v6 = v7 + 1;
          if ( v9 <= 0xFF )
            break;
          v9 -= 255;
          *v7++ = 0;
        }
        *v7 = v9;
        goto LABEL_16;
      }
      v8 = v5 - 3;
    }
    *v6 = v8;
    goto LABEL_17;
  }
LABEL_19:
  *(_WORD *)v6 = 17;
  v6[2] = 0;
  *a4 = v6 + 3 - a3;
  return 0;
}

