// busybox.exe @ 0x413e48 size=49

int __usercall sub_413E48@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int i; // ebx
  int result; // eax
  unsigned int v6[18]; // [esp+0h] [ebp-48h] BYREF

  for ( i = 0; i != 16; ++i )
    v6[i] = *(unsigned __int8 *)(a2 + i);
  sub_413CE4(a1, v6);
  for ( result = 0; result != 16; ++result )
    *(_BYTE *)(a3 + result) = v6[result];
  return result;
}

