// busybox.exe @ 0x460288 size=201

int __usercall sub_460288@<eax>(char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  char *Str; // esi
  char *v6; // edi
  char *v7; // edi

  Str = (char *)sub_4708BC("%s.lzma", a1);
  v6 = strrchr(Str, 46);
  if ( sub_45C0F8(Str, a2, a3) != 0 )
    return 1;
  v7 = v6 + 1;
  strcpy(v7, "xz");
  if ( sub_45C0F8(Str, a2, a3) != 0 )
    return 1;
  strcpy(v7, "bz2");
  if ( sub_45C0F8(Str, a2, a3) != 0 )
    return 1;
  strcpy(v7, "gz");
  if ( sub_45C0F8(Str, a2, a3) != 0 )
    return 1;
  else
    return sub_45C0F8(a1, a2, a3);
}

