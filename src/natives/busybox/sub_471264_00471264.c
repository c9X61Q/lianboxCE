// busybox.exe @ 0x471264 size=72

CHAR *__usercall sub_471264@<eax>(const CHAR *a1@<eax>, int a2@<ecx>)
{
  CHAR *v3; // ebx
  int ErrorMessage; // edx
  char *v5; // eax

  v3 = sub_471218(a1, a2);
  if ( v3 == nullptr )
  {
    ErrorMessage = *_errno();
    v5 = "not a symlink";
    if ( ErrorMessage != 22 )
      v5 = strerror(ErrorMessage);
    sub_41783C("%s: cannot read link: %s", a1, v5);
  }
  return v3;
}

