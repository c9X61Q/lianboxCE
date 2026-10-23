// busybox.exe @ 0x43d49c size=59

unsigned int __usercall sub_43D49C@<eax>(int a1@<eax>, int a2@<ebx>)
{
  int v3; // edi
  unsigned int result; // eax
  int v5; // [esp-2h] [ebp-Ch]

  v5 = a2;
  do
  {
    v3 = dword_486010;
    *(_DWORD *)(dword_486010 + 12) = a1;
    result = sub_43598C(v5);
    *(_DWORD *)(v3 + 12) = -1;
    HIBYTE(v5) = result != 13;
  }
  while ( result <= 0x1F && result != 13 && result != 8 );
  return result;
}

