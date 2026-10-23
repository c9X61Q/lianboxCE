// busybox.exe @ 0x439448 size=96

u_long *__usercall sub_439448@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v3; // edi
  int v4; // eax
  struct tm *v5; // eax
  int v7[12]; // [esp+11h] [ebp-33h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v4 = sub_463250(a2, "%Y-%m-%d %H:%M:%S");
  sub_4628D4(v4, ".%09u %%z", v3);
  v5 = localtime((const __time32_t *const)a1);
  sub_444C3C((char *)&MultiByteStr, 0x400u, (int)v7, v5);
  return &MultiByteStr;
}

