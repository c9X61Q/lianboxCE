// busybox.exe @ 0x4718a8 size=42

void *__usercall sub_4718A8@<eax>(_BYTE *a1@<eax>, unsigned int a2@<edx>)
{
  void *result; // eax
  int v3; // ecx

  if ( a1 == nullptr )
    sub_418210("xstrndup bug");
  result = sub_46396C(a1, a2);
  if ( result == nullptr )
    sub_416F78(v3);
  return result;
}

