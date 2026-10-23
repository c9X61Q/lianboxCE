// busybox.exe @ 0x411b58 size=53

void __usercall __noreturn sub_411B58(int *a1@<eax>)
{
  sub_411B20(*a1, (int)a1);
  byte_4735D4 = (*_errno() == 2) + 126;
  sub_418014("can't execute '%s'", (const char *)*a1);
}

