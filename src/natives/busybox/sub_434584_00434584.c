// busybox.exe @ 0x434584 size=171

const char *__usercall sub_434584@<eax>(const char *Source@<eax>)
{
  int v1; // esi
  const char *v2; // edi
  signed int v3; // ebx
  unsigned int v4; // eax
  int v5; // edx

  v1 = dword_486010;
  v2 = (const char *)(dword_486010 + 712);
  strcpy((char *)(dword_486010 + 712), Source);
  *(_DWORD *)(v1 + 60) = 0;
  sub_4367D4();
  sub_46F964();
  v3 = strlen(v2);
  while ( v3 <= 127 )
  {
    v4 = sub_4351A8();
    if ( v4 <= 0x1B )
    {
      v5 = 134226944;
      if ( _bittest(&v5, v4) )
        break;
    }
    if ( v4 == 8 || v4 == 127 )
    {
      --v3;
      *(_BYTE *)(v1 + v3 + 712) = 0;
      sub_46F964();
      if ( v3 <= 0 )
        break;
    }
    else if ( v4 - 1 <= 0xFE )
    {
      *(_BYTE *)(v1 + v3++ + 712) = v4;
      *(_BYTE *)(v1 + v3 + 712) = 0;
      sub_418130(v4);
    }
  }
  sub_459AA4();
  return v2;
}

