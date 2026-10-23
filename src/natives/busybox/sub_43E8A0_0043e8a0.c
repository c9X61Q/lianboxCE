// busybox.exe @ 0x43e8a0 size=35

size_t __usercall sub_43E8A0@<eax>(int a1@<eax>)
{
  const char **v1; // ebx

  v1 = (const char **)dword_48600C;
  sub_45C5AC(*((_DWORD *)dword_48600C + 7), a1);
  return strlen(v1[8]);
}

