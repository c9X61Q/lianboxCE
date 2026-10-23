// busybox.exe @ 0x45bd78 size=96

void __usercall __noreturn sub_45BD78(const char *a1@<eax>, int *a2@<edx>)
{
  int Code; // [esp+0h] [ebp-10h]

  if ( sub_43C594((int)a1, (int)"busybox") != 0 )
  {
    Code = sub_41A06C(0, a2);
    exit(Code);
  }
  if ( sub_430048(a1) >= 0 )
    sub_45BDD8(a2, a1);
  sub_4326F8(dword_485AD0);
  sub_4326F8(": applet not found\n");
  exit(127);
}

