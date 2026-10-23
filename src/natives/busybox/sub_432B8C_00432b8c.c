// busybox.exe @ 0x432b8c size=74

BOOL __usercall sub_432B8C@<eax>(char *a1@<eax>, int a2@<ecx>)
{
  int v3; // eax
  int v5[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = sub_459FE8(a2 + 8, a1, 1, (int)v5, 0);
  return (v5[0] | v3) == 0 && a1[v5[1]] == 0;
}

