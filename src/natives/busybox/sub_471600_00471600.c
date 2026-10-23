// busybox.exe @ 0x471600 size=36

void *__usercall sub_471600@<eax>(void *Block@<eax>, size_t Size@<edx>)
{
  void *result; // eax
  int v4; // ecx

  result = realloc(Block, Size);
  if ( result == nullptr && Size != 0 )
    sub_416F78(v4);
  return result;
}

