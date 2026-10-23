// busybox.exe @ 0x41b468 size=88

int __usercall sub_41B468@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax
  _DWORD v5[2]; // [esp+10h] [ebp-28h] BYREF
  _BYTE v6[31]; // [esp+19h] [ebp-1Fh] BYREF

  sub_436500(v5);
  sub_4626DC(v6, a2, v5[0], v5[1]);
  result = sub_45EB78(64, v6);
  *(_DWORD *)(a1 + 4) &= ~0x40u;
  return result;
}

