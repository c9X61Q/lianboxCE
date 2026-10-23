// busybox.exe @ 0x415b10 size=14

int __usercall sub_415B10@<eax>(int a1@<ecx>, int a2, ...)
{
  va_list va; // [esp+8h] [ebp+8h] BYREF

  va_start(va, a2);
  return sub_415B64(a1, va);
}

