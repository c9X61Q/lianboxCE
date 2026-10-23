// busybox.exe @ 0x415b20 size=29

void __usercall __noreturn sub_415B20(int a1@<ecx>, int a2, int a3, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a3);
  sub_415B64(a1, va);
  sub_431174();
  sub_453074();
}

