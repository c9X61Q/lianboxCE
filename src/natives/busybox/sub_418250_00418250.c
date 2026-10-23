// busybox.exe @ 0x418250 size=106

_BYTE *__usercall sub_418250@<eax>(_BYTE *result@<eax>)
{
  _BYTE *v1; // esi
  char *i; // edx
  char v3; // cl
  char *v4; // edi
  char v5; // bl
  char v6; // bl

  v1 = result;
  for ( i = result; ; ++i )
  {
    v3 = *i;
    v4 = i + 1;
    if ( *result != 47 )
      goto LABEL_13;
    if ( v3 == 47 )
      goto LABEL_14;
    if ( v3 != 46 )
    {
LABEL_13:
      *++result = v3;
      goto LABEL_14;
    }
    v5 = i[1];
    if ( v5 != 0 && v5 != 47 )
    {
      if ( v5 != 46 )
        goto LABEL_13;
      v6 = i[2];
      if ( v6 != 0 && v6 != 47 )
        goto LABEL_13;
      ++i;
      if ( result > v1 )
      {
        do
          --result;
        while ( *result != 47 );
        i = v4;
      }
    }
LABEL_14:
    if ( i[1] == 0 )
      break;
  }
  if ( result == v1 || *result != 47 )
    ++result;
  *result = 0;
  return result;
}

