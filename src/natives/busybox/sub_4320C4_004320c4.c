// busybox.exe @ 0x4320c4 size=68

void __usercall __noreturn sub_4320C4(const char *a1@<eax>)
{
  DWORD *i; // edx
  const char *v2; // edx

  for ( i = &qword_485BF8; (unsigned __int8)(*(_BYTE *)i - 32) <= 0x5Eu; i = (DWORD *)((char *)i + 1) )
    ;
  *(_BYTE *)i = 0;
  v2 = " to ";
  if ( a1 == nullptr )
  {
    a1 = (const char *)&unk_4753B8;
    v2 = (const char *)&unk_4753B8;
  }
  sub_41784C("unexpected server response%s%s: %s", v2, a1, (const char *)&qword_485BF8);
}

