// busybox.exe @ 0x4716d4 size=40

const char *__usercall sub_4716D4@<eax>(int a1@<eax>, char *a2@<edx>, int a3@<ecx>)
{
  const char *result; // eax

  result = (const char *)sub_459DFC(a3, a2, a1);
  if ( result != nullptr )
    sub_41784C("bad regex '%s': %s", a2, result);
  return result;
}

