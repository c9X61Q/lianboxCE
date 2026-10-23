// busybox.exe @ 0x416b48 size=53

int __usercall sub_416B48@<eax>(int a1@<eax>, int a2@<edx>, const char *a3@<ecx>)
{
  int v3; // ebx

  if ( a1 <= 0 || *(_DWORD *)(dword_486010 + 4) < a2 || (v3 = 0, a1 > a2) )
  {
    sub_41783C("bad line range for %s", a3);
    return 1;
  }
  return v3;
}

