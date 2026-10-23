// busybox.exe @ 0x452830 size=31

int __usercall sub_452830@<eax>(_DWORD *a1@<eax>)
{
  int v1; // ecx

  v1 = dword_485FF4;
  *a1 = *(_DWORD *)dword_485FF4;
  a1[1] = *(_DWORD *)(v1 + 4);
  a1[2] = *(_DWORD *)(v1 + 12);
  return sub_462C74();
}

