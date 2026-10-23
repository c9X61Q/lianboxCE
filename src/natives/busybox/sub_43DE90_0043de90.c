// busybox.exe @ 0x43de90 size=37

int __usercall sub_43DE90@<eax>(int a1@<eax>, const char *a2@<edx>)
{
  int v3; // ebx
  int v5; // [esp+0h] [ebp-8h]

  sub_42F128(a2);
  v3 = sub_456BC0(v5, a1);
  _errno();
  return v3;
}

