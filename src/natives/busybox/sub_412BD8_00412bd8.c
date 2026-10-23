// busybox.exe @ 0x412bd8 size=56

void __usercall __noreturn sub_412BD8(_DWORD *a1@<eax>)
{
  sub_43942C();
  sub_43942C();
  a1[19] = 0;
  a1[20] = 0;
  longjmp(a1 + 31, 1);
}

