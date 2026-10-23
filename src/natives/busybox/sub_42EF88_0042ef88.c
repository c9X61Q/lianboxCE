// busybox.exe @ 0x42ef88 size=39

char __usercall sub_42EF88@<al>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, char a4)
{
  int v5; // edi
  int v6; // edx
  int i; // ebx
  char result; // al

  v5 = a2;
  LOBYTE(a2) = a4;
  v6 = -a2;
  for ( i = 0; i != 32; ++i )
  {
    result = *(_BYTE *)(v5 + i) ^ v6 & (*(_BYTE *)(a3 + i) ^ *(_BYTE *)(v5 + i));
    *(_BYTE *)(a1 + i) = result;
  }
  return result;
}

