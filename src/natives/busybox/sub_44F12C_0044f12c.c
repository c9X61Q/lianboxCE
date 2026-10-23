// busybox.exe @ 0x44f12c size=42

int __usercall sub_44F12C@<eax>(int a1@<eax>)
{
  const char *v2; // eax

  v2 = (const char *)sub_460B38();
  return sub_4480E8("%s=%s\n", *(const char **)(a1 + 4), v2);
}

