// busybox.exe @ 0x436788 size=22

int *__usercall sub_436788@<eax>(int a1@<eax>)
{
  int *result; // eax

  result = sub_436774(a1);
  if ( result == nullptr )
    return (int *)sub_46C538();
  return result;
}

