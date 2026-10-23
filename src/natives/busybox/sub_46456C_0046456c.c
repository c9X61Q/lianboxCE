// busybox.exe @ 0x46456c size=75

void __usercall __noreturn sub_46456C(const char *a1@<eax>, const char *a2@<edx>)
{
  if ( a1 != nullptr && *a1 != 0 )
    sub_41783C("%s: %s", a1, a2);
  else
    sub_41783C("%s", a2);
  longjmp((int *)dword_486000 + 4, 2);
}

