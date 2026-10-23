// busybox.exe @ 0x41af70 size=74

int __usercall sub_41AF70@<eax>(const char *Str@<eax>, int a2@<edx>, int a3@<ecx>)
{
  size_t v6; // eax

  v6 = strlen(Str);
  return sub_46F088(
           "%*s%*s",
           ((a2 - v6) >> 1) + v6,
           Str,
           a3 + ((a2 - v6) >> 1) + (((_BYTE)a2 - (_BYTE)v6) & 1),
           (const char *)&unk_476EB4);
}

