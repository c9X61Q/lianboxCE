// busybox.exe @ 0x432f4c size=24

int __usercall sub_432F4C@<eax>(unsigned __int8 *a1@<eax>)
{
  return a1[2] + ((a1[1] + (*a1 << 8)) << 8);
}

