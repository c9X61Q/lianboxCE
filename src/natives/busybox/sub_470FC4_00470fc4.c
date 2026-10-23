// busybox.exe @ 0x470fc4 size=33

int __usercall sub_470FC4@<eax>(FILE *a1@<eax>, const char *a2@<edx>, int *a3@<ecx>)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( a3 == nullptr )
  {
    v4 = 2147479552;
    a3 = &v4;
  }
  return sub_470EF4(a1, a2, 0, a3);
}

