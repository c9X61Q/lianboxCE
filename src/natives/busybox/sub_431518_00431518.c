// busybox.exe @ 0x431518 size=53

FILE *__usercall sub_431518@<eax>(char *a1@<eax>)
{
  FILE *result; // eax

  result = off_4730E8(0);
  if ( a1 != "standard input" && (*a1 != 45 || a1[1] != 0) )
    return (FILE *)sub_4314F0(a1, (char *)L"r");
  return result;
}

