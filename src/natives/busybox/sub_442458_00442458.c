// busybox.exe @ 0x442458 size=58

int __usercall sub_442458@<eax>(int result@<eax>)
{
  char *i; // esi
  char v2; // dl

  for ( i = (char *)result; ; ++i )
  {
    v2 = *i;
    if ( *i == 0 )
      break;
    if ( (unsigned __int8)(v2 - 43) > 0x4Fu
      || v2 == 96
      || (unsigned __int8)(v2 - 59) <= 4u
      || (unsigned __int8)(v2 - 91) <= 1u )
    {
      return sub_460B38();
    }
  }
  return result;
}

