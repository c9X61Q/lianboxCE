// busybox.exe @ 0x45e580 size=42

int __usercall sub_45E580@<eax>(int *a1@<eax>)
{
  unsigned int *v2; // eax
  int v3; // ecx
  const char *v5; // [esp+0h] [ebp-Ch]

  v5 = (const char *)sub_417B68();
  v2 = (unsigned int *)sub_4394A8(a1);
  sub_437FC0(v2, v5, v3);
  return sub_45EC9C();
}

