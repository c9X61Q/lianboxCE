// busybox.exe @ 0x46b680 size=76

int __usercall sub_46B680@<eax>(__int64 a1@<edx:eax>)
{
  unsigned int v1; // esi
  unsigned int v2; // ebx

  v1 = a1;
  LODWORD(a1) = a1 | HIDWORD(a1);
  if ( (_DWORD)a1 != 0 )
  {
    v2 = HIDWORD(a1);
    a1 = sub_443400(3, __SPAIR64__(HIDWORD(a1), v1), 1);
    if ( HIDWORD(a1) == -1 )
    {
      LODWORD(a1) = a1 + 1;
      if ( (_DWORD)a1 == 0 )
        LODWORD(a1) = sub_416EDC(__SPAIR64__(v2, v1));
    }
  }
  return a1;
}

