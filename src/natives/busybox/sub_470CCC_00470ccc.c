// busybox.exe @ 0x470ccc size=43

FILE *__usercall sub_470CCC@<eax>(char *FileName@<eax>, char *Mode@<edx>)
{
  FILE *result; // eax

  result = sub_442F94(FileName, Mode);
  if ( result == nullptr )
    sub_418014(0, "can't open '%s'", FileName);
  return result;
}

