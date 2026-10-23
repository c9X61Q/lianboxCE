// busybox.exe @ 0x41f49c size=76

int __usercall sub_41F49C@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // ebx
  const char *v4; // esi
  int v5; // ecx

  v3 = sub_470E78();
  v4 = "\nn\tt\rr";
  v5 = a2;
  while ( *v4 != 0 )
  {
    v5 = sub_449D44(v5, a1, *((unsigned __int8 *)v4 + 1), *(unsigned __int8 *)v4);
    v4 += 2;
    a1 = v3;
  }
  return v3;
}

