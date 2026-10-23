// busybox.exe @ 0x462b6c size=95

int __usercall sub_462B6C@<eax>(char *a1@<eax>)
{
  const char *v2; // ebx
  size_t v3; // edi
  size_t v4; // eax
  int v5; // eax
  int v6; // edi

  v2 = (const char *)sub_4460B4(a1);
  v3 = strlen(a1);
  v4 = 0;
  if ( v2 != nullptr )
    v4 = strlen(v2);
  v5 = sub_4371F8(v3 + v4 + 5);
  v6 = v5;
  if ( v2 == nullptr )
    v2 = (const char *)&unk_476425;
  sub_4626DC(v5, (int)"%s%s", v2, a1);
  return v6;
}

