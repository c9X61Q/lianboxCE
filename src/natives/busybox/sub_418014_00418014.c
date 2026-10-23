// busybox.exe @ 0x418014 size=49

void __usercall __noreturn sub_418014(int a1@<eax>, const char *a2, ...)
{
  int *v2; // eax
  char *v3; // ecx
  int *v4; // eax
  int ErrorMessage; // [esp+0h] [ebp-8h]

  ErrorMessage = a1;
  v2 = _errno();
  v3 = nullptr;
  if ( *v2 != 0 )
  {
    v4 = _errno();
    v3 = strerror(*v4);
  }
  sub_418510(v3);
  sub_470D44(ErrorMessage);
}

