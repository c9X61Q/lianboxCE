// busybox.exe @ 0x415b40 size=36

void __usercall __noreturn sub_415B40(int a1@<ecx>, const char *a2, ...)
{
  va_list va; // [esp+8h] [ebp+8h] BYREF

  va_start(va, a2);
  *(_BYTE *)dword_485FF0 = 2;
  sub_415B64(a1, va);
  sub_431174();
  sub_453074();
}

