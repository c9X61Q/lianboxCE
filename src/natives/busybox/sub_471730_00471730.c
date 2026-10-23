// busybox.exe @ 0x471730 size=36

int __usercall sub_471730@<eax>(char *VarName@<eax>, const char *a2@<edx>)
{
  int result; // eax
  int v3; // ecx

  result = sub_45E5F8(VarName, a2, 1);
  if ( result != 0 )
    sub_416F78(v3);
  return result;
}

