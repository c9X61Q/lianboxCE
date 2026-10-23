// busybox.exe @ 0x444978 size=12

void *__usercall sub_444978@<eax>(char **a1@<eax>)
{
  void *result; // eax

  result = (void *)sub_444858((int)a1, *a1, (int)environ);
  if ( result != (void *)-1 )
    return (void *)GetProcessId(result);
  return result;
}

