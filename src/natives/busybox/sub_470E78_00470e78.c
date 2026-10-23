// busybox.exe @ 0x470e78 size=28

void *__usercall sub_470E78@<eax>(size_t Size@<eax>)
{
  void *result; // eax
  int v3; // ecx

  result = malloc(Size);
  if ( result == nullptr && Size != 0 )
    sub_416F78(v3);
  return result;
}

