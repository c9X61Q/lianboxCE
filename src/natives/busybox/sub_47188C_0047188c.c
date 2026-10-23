// busybox.exe @ 0x47188c size=25

char *__usercall sub_47188C@<eax>(char *result@<eax>)
{
  int v1; // ecx

  if ( result != nullptr )
  {
    result = strdup(result);
    if ( result == nullptr )
      sub_416F78(v1);
  }
  return result;
}

