// busybox.exe @ 0x459dfc size=100

int __usercall sub_459DFC@<eax>(int a1@<ecx>, char *Str@<edx>, int a3@<eax>)
{
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // ebp

  v4 = sub_459D18(a3, Str, a1);
  v5 = 0;
  if ( v4 != 0 )
  {
    v6 = v4;
    v7 = sub_459E60(v4, a3, 0, 0);
    v5 = sub_470E78();
    sub_459E60(v6, a3, v5, v7);
  }
  return v5;
}

