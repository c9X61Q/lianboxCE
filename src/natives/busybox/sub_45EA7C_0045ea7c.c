// busybox.exe @ 0x45ea7c size=36

void __usercall sub_45EA7C(int a1@<eax>, int a2@<ecx>)
{
  _DWORD *v3; // eax

  v3 = (_DWORD *)sub_4728CC(a2);
  v3[3] = a1;
  v3[1] = sub_469060;
  v3[2] = "unlzma";
  sub_431588(v3);
}

