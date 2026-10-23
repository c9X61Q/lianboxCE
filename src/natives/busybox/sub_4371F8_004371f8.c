// busybox.exe @ 0x4371f8 size=22

int __usercall sub_4371F8@<eax>(unsigned int a1@<eax>)
{
  int v1; // ebx
  int v3; // [esp+0h] [ebp-4h]

  v1 = dword_485FF4;
  if ( *(_DWORD *)(dword_485FF4 + 12) < a1 )
    sub_437140(a1, v3);
  return *(_DWORD *)(v1 + 4);
}

