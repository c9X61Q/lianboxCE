// busybox.exe @ 0x45b440 size=121

int sub_45B440()
{
  const char *Str1; // eax
  int v1; // ecx
  int v2; // edx

  HIDWORD(qword_485BEC) = 4096;
  sub_45B5D8();
  Str1 = (const char *)sub_45B5D0();
  if ( Str1 != nullptr && strcmp(Str1, "lzma") == 0 )
    sub_45EA7C();
  else
    sub_45EB54(v1, 1);
  sub_416EC0();
  if ( v2 < 0 )
    sub_418210("error unpacking");
  return byte_485FF8;
}

