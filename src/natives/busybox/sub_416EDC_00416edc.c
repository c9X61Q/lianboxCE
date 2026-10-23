// busybox.exe @ 0x416edc size=105

int __stdcall sub_416EDC(__int64 a1)
{
  int v1; // ecx
  __int64 v2; // rax
  unsigned int v4; // [esp+8h] [ebp-18h]

  v2 = sub_416F48(a1, HIDWORD(a1));
  v4 = v2;
  LODWORD(v2) = (SHIDWORD(a1) >> 31) ^ a1;
  if ( abs64(a1) != __PAIR64__(HIDWORD(v2), v4) )
  {
    if ( __PAIR64__(HIDWORD(v2), v4) == -1 )
      sub_470D44(v1, v1);
    sub_418210(v1, v1);
  }
  return v2;
}

