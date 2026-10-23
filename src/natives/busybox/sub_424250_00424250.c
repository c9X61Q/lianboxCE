// busybox.exe @ 0x424250 size=32

int __usercall sub_424250@<eax>(int a1@<eax>, int a2)
{
  char *Source; // eax
  char *v3; // eax

  Source = (char *)sub_460AFC(a1);
  v3 = sub_403200(Source);
  sub_46F108(v3);
  return sub_42F128(a2);
}

