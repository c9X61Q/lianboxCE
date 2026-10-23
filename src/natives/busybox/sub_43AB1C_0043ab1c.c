// busybox.exe @ 0x43ab1c size=76

int __usercall sub_43AB1C@<eax>(int a1@<eax>)
{
  int v2; // esi
  int result; // eax

  v2 = sub_43AC28();
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(a1 + 4);
  sub_43E368();
  sub_43E368();
  sub_43E368();
  result = sub_43E368();
  *(_DWORD *)(a1 + 104) = v2;
  return result;
}

