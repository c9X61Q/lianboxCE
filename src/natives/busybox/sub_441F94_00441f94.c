// busybox.exe @ 0x441f94 size=39

void *__usercall sub_441F94@<eax>(size_t Size@<eax>)
{
  void *v2; // eax
  void *v3; // ebx

  v2 = malloc(Size);
  v3 = v2;
  if ( Size != 0 && v2 == nullptr )
    sub_4181F8("out of memory");
  return v3;
}

