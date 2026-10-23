// busybox.exe @ 0x44537c size=52

int __cdecl sub_44537C(char *TemplateName)
{
  char *v1; // edx
  int result; // eax

  v1 = mktemp(TemplateName);
  result = -1;
  if ( v1 != nullptr )
    return open(v1, 258, 384);
  return result;
}

