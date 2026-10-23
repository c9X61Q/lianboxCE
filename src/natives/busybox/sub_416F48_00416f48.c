// busybox.exe @ 0x416f48 size=48

int __stdcall sub_416F48(__int64 a1)
{
  int result; // eax

  result = a1;
  if ( a1 != 0 )
    return sub_417860(a1, HIDWORD(a1));
  return result;
}

