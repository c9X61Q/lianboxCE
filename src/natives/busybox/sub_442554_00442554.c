// busybox.exe @ 0x442554 size=107

unsigned int __usercall sub_442554@<eax>(int a1@<eax>, char *a2@<edx>, unsigned int a3@<ecx>)
{
  unsigned int v5; // ebx
  unsigned int result; // eax
  int v7; // [esp+0h] [ebp-18h]
  unsigned int v8; // [esp+4h] [ebp-14h]

  v8 = a3;
  v7 = *(_DWORD *)(a1 + 72) & 0x3F;
  *(_QWORD *)(a1 + 72) += a3;
  while ( 1 )
  {
    v5 = 64 - v7;
    if ( 64 - v7 > v8 )
      v5 = v8;
    qmemcpy((void *)(a1 + v7), a2, v5);
    a2 += v5;
    result = v5 + v7;
    if ( v5 + v7 != 64 )
      break;
    v8 -= v5;
    (*(void (**)(void))(a1 + 64))();
    v7 = 0;
  }
  return result;
}

