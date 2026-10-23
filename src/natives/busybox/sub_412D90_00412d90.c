// busybox.exe @ 0x412d90 size=49

u_long __usercall sub_412D90@<eax>(int a1@<eax>, int a2@<edx>)
{
  u_long result; // eax

  MultiByteStr = sub_4405C8(a2, a1);
  result = sub_4408BC(a2, a1);
  *(&MultiByteStr + 1) = result;
  return result;
}

