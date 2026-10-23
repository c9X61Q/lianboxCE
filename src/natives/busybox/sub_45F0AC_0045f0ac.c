// busybox.exe @ 0x45f0ac size=29

int __usercall sub_45F0AC@<eax>(int result@<eax>)
{
  qmemcpy((void *)(result + 72), &dword_480060, 40);
  *(_DWORD *)(result + 64) = sub_45F0CC;
  return result;
}

