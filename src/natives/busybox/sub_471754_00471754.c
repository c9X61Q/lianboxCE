// busybox.exe @ 0x471754 size=42

char *__usercall sub_471754@<eax>(char *Str1@<eax>, const char *a2@<edx>)
{
  char *result; // eax

  result = sub_44328C(Str1);
  if ( result == nullptr )
    return (char *)sub_471730(Str1, a2);
  return result;
}

