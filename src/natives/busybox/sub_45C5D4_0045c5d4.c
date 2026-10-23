// busybox.exe @ 0x45c5d4 size=57

int __usercall sub_45C5D4@<eax>(int a1@<ecx>, int a2@<edx>, DWORD a3@<eax>)
{
  int v6; // ebx

  do
    v6 = sub_46DB18(a3, a2, a1);
  while ( v6 == -1 && *_errno() == 4 );
  return v6;
}

