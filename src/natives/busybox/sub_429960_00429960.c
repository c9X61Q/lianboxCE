// busybox.exe @ 0x429960 size=26

int __usercall sub_429960@<eax>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-8h]

  v6 = a3;
  v4 = sub_433658(*a2, a1);
  *a2 = v6 + v4;
  return v6;
}

