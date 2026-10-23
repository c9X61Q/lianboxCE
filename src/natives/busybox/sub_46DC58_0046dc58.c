// busybox.exe @ 0x46dc58 size=47

char *__usercall sub_46DC58@<eax>(const CHAR *a1@<eax>)
{
  char *result; // eax
  int v3; // edx

  result = sub_402D50(a1);
  if ( result == nullptr )
  {
    sub_417FE4(v3, "can't open '%s'", a1);
    return nullptr;
  }
  return result;
}

