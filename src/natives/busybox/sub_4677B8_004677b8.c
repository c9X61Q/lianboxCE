// busybox.exe @ 0x4677b8 size=53

char *__usercall sub_4677B8@<eax>(char *a1@<eax>)
{
  char *i; // edx
  char *Buffer; // [esp+0h] [ebp-8h]

  for ( i = a1; *i != 0; ++i )
    ;
  while ( i != a1 )
  {
    if ( (unsigned __int8)(*(i - 1) - 9) > 4u && *(i - 1) != 32 )
    {
      *i = 0;
      break;
    }
    --i;
  }
  sub_46F108(a1);
  return Buffer;
}

