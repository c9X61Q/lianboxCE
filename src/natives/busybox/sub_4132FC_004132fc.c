// busybox.exe @ 0x4132fc size=43

int __usercall sub_4132FC@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax
  int v5; // edx

  result = sub_47168C(*(unsigned __int16 *)(a1 + 4), 1026);
  *(_DWORD *)(a1 + 8) = result;
  v5 = *(unsigned __int16 *)(a1 + 4);
  *(_WORD *)(a1 + 4) = v5 + 1;
  *(_DWORD *)(result + 4 * v5) = a2;
  return result;
}

