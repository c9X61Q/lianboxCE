// busybox.exe @ 0x45ec34 size=37

int __usercall sub_45EC34@<eax>(int a1@<eax>, double a2)
{
  int v3; // ecx

  sub_41CBC4(a1);
  *(_DWORD *)a1 |= 1u;
  *(double *)(a1 + 8) = a2;
  sub_437B2C((signed __int32 *)a1, v3);
  return a1;
}

