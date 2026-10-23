// busybox.exe @ 0x436774 size=17

int *__usercall sub_436774@<eax>(int a1@<eax>)
{
  int *result; // eax

  result = sub_435A28(a1);
  if ( result != nullptr )
    return (int *)*result;
  return result;
}

