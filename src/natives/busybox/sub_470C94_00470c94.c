// busybox.exe @ 0x470c94 size=56

FILE *__usercall sub_470C94@<eax>(int a1@<eax>)
{
  unsigned int v1; // eax
  const char *Format; // edx
  FILE *result; // eax
  int v4; // ecx

  v1 = 2 * a1 + 1;
  Format = L"rr";
  if ( (v1 & 1) != 0 )
    Format = L"wrr";
  result = fdopen_0(v1 >> 1, Format);
  if ( result == nullptr )
    sub_416F78(v4);
  return result;
}

