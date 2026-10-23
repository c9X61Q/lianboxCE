// busybox.exe @ 0x441f7c size=23

int __usercall sub_441F7C@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx

  v2 = a2 - *(_DWORD *)(dword_485FF4 + 4);
  return v2 + sub_4371F8(v2 + a1);
}

