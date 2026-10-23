// busybox.exe @ 0x470a3c size=234

int __usercall sub_470A3C@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE v12[32]; // [esp+0h] [ebp-8Ch] BYREF
  _BYTE v13[32]; // [esp+20h] [ebp-6Ch] BYREF
  _BYTE v14[32]; // [esp+40h] [ebp-4Ch] BYREF
  _BYTE v15[44]; // [esp+60h] [ebp-2Ch] BYREF

  sub_43E434((int)v14, a5, a6);
  sub_43E478((int)v15, a7, a8);
  sub_42EEBC((int)v12, (int)v14, (int)v15);
  sub_43E478((int)v15, a5, a6);
  sub_43E434((int)v14, a7, a8);
  sub_42EEBC((int)v13, (int)v14, (int)v15);
  sub_43E434((int)v14, (int)v12, (int)v13);
  sub_42EEBC((int)v15, (int)v14, (int)v14);
  sub_42EEBC(a1, a4, (int)v15);
  sub_43E478((int)v14, (int)v12, (int)v13);
  sub_42EEBC((int)v15, (int)v14, (int)v14);
  return sub_42EEBC(a2, a3, (int)v15);
}

