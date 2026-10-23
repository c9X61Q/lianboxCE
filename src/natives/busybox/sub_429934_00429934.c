// busybox.exe @ 0x429934 size=41

char *__usercall sub_429934@<eax>(char *result@<eax>)
{
  char v1; // dl

  v1 = *result;
  if ( *result == 95 )
  {
LABEL_3:
    while ( 1 )
    {
      v1 = *++result;
      if ( *result == 0 )
        break;
      if ( v1 != 95 && (unsigned __int8)(v1 - 48) > 9u )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( (unsigned __int8)((v1 | 0x20) - 97) <= 0x19u )
      goto LABEL_3;
  }
  return result;
}

