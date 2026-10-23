// busybox.exe @ 0x4213fc size=62

int __usercall sub_4213FC@<eax>(__int64 a1@<edx:eax>, int a2@<ecx>)
{
  int v2; // eax
  _BYTE v5[28]; // [esp+18h] [ebp-1Ch] BYREF

  v2 = sub_43129C(v5, 24, "%lld", a1);
  return sub_442AD0(a2, v2);
}

