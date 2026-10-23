// busybox.exe @ 0x459228 size=81

char __usercall sub_459228@<al>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi
  int *v6; // ebx

  v3 = a1;
  v6 = &dword_473378;
  if ( dword_473388 != 0 )
  {
    ++*(_DWORD *)(dword_485FF0 + 56);
    v6 = (int *)sub_4728CC(a3);
    *(_DWORD *)dword_473388 = v6;
    LOBYTE(a1) = sub_43B8DC();
  }
  dword_473388 = (int)v6;
  v6[1] = v3;
  v6[2] = a2;
  v6[3] = a3;
  return a1;
}

