// busybox.exe @ 0x44484c size=12

void *__usercall sub_44484C@<eax>(_DWORD *a1@<eax>)
{
  void *result; // eax

  result = (void *)sub_444858(a1, *a1, environ);
  if ( result != (void *)-1 )
    return (void *)GetProcessId(result);
  return result;
}

