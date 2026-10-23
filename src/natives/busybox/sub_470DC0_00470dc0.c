// busybox.exe @ 0x470dc0 size=39

int *__usercall sub_470DC0@<eax>(int a1@<eax>)
{
  int *result; // eax

  result = sub_436354(a1);
  if ( result == nullptr )
    sub_41784C("unknown uid %u", a1);
  return result;
}

