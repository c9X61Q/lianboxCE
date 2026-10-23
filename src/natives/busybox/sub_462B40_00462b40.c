// busybox.exe @ 0x462b40 size=43

char *__usercall sub_462B40@<eax>(const char *Str@<eax>)
{
  char *result; // eax
  unsigned int v3; // [esp+4h] [ebp-Ch]

  v3 = strlen(Str) + 1;
  result = (char *)sub_462C74();
  qmemcpy(result, Str, v3);
  return result;
}

