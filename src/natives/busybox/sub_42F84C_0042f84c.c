// busybox.exe @ 0x42f84c size=108

int __usercall sub_42F84C@<eax>(_QWORD *a1@<eax>)
{
  __int64 v1; // kr00_8
  int v2; // ebx

  v1 = *a1 - 116444736000000000LL;
  v2 = sub_4023F0(v1, 10000000);
  sub_402540(v1, 10000000);
  return v2;
}

