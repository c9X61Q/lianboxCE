// busybox.exe @ 0x446d78 size=166

int __usercall sub_446D78@<eax>(const char *Str@<eax>)
{
  const char *v1; // ebx
  _BYTE *v3; // ebp
  char *v4; // edx
  int v5; // esi
  char v6; // cl

  v1 = Str;
  if ( (dword_486008 & 0x40) != 0 )
    return sub_47188C();
  strlen(Str);
  v3 = (_BYTE *)sub_470E78();
  v4 = v3 + 1;
  *v3 = 39;
  v5 = dword_486008 & 0x8000;
  while ( 1 )
  {
    v6 = *v1;
    if ( *v1 == 0 )
      break;
    if ( v6 == 39 )
    {
      *(_DWORD *)v4 = 656890919;
LABEL_10:
      v4 += 4;
      goto LABEL_17;
    }
    if ( v5 != 0 )
    {
      if ( v6 == 33 )
      {
        *(_DWORD *)v4 = 656497703;
        goto LABEL_10;
      }
      if ( v6 == 10 )
      {
        *(_WORD *)v4 = 28252;
        v4 += 2;
        goto LABEL_17;
      }
      if ( (unsigned __int8)(v6 - 9) <= 4u || v6 == 32 )
      {
        *(_WORD *)v4 = 23591;
        v4[2] = v6;
        v4[3] = 39;
        goto LABEL_10;
      }
    }
    *v4++ = v6;
LABEL_17:
    ++v1;
  }
  *(_WORD *)v4 = 39;
  return (int)v3;
}

