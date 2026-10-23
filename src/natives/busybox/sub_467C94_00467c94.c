// busybox.exe @ 0x467c94 size=22

int *__usercall sub_467C94@<eax>(int a1@<eax>)
{
  int *result; // eax

  result = sub_467C80(a1);
  if ( result == nullptr )
    return (int *)sub_46C538();
  return result;
}

