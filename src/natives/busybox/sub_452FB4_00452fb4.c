// busybox.exe @ 0x452fb4 size=37

void __usercall __noreturn sub_452FB4(const char *a1@<eax>)
{
  int v1; // ecx

  v1 = *((_DWORD *)off_473358 + 1);
  *(_DWORD *)(dword_485FF0 + 20) = v1;
  sub_415B40(v1, "syntax error: %s", a1);
}

