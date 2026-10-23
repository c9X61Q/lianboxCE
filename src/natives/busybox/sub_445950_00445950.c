// busybox.exe @ 0x445950 size=91

int __usercall sub_445950@<eax>(const char *a1@<eax>, void (*a2)(void)@<ecx>)
{
  const char *v2; // ebx
  char v4; // al
  int result; // eax

  v2 = a1;
  v4 = *a1;
  if ( v4 == 39 || v4 == 34 )
    v2 = (const char *)sub_46C538();
  *_errno() = 0;
  a2();
  result = *_errno();
  if ( result != 0 )
  {
    sub_41783C("invalid number '%s'", v2);
    return 1;
  }
  return result;
}

