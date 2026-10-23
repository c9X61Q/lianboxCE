// busybox.exe @ 0x417fe4 size=47

int __usercall sub_417FE4@<eax>(int a1@<edx>, const char *a2, ...)
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
  return ErrorMessage;
}

