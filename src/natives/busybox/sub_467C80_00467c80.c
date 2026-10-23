// busybox.exe @ 0x467c80 size=17

int *__usercall sub_467C80@<eax>(int a1@<eax>)
{
  int *result; // eax

  result = sub_436354(a1);
  if ( result != nullptr )
    return (int *)*result;
  return result;
}

