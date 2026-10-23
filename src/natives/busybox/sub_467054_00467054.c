// busybox.exe @ 0x467054 size=149

int __usercall sub_467054@<eax>(int a1@<eax>, void *a2@<edx>, unsigned int a3@<ecx>)
{
  unsigned int v5; // edx
  int v6; // edi
  int v7; // ebp
  int v8; // edx
  int v9; // eax
  int result; // eax
  int v11; // edx

  v5 = *(_DWORD *)(a1 + 20);
  if ( v5 != 0 )
  {
    v6 = *(_DWORD *)(a1 + 24);
    v7 = a3 + v6;
    *(_DWORD *)(a1 + 24) = a3 + v6;
    if ( v5 >= a3 + v6 )
    {
      v9 = sub_471600(a3, v7 + 1);
      *(_DWORD *)(a1 + 28) = v9;
      qmemcpy((void *)(v6 + v9), a2, a3);
      *(_BYTE *)(*(_DWORD *)(a1 + 28) + v7) = 0;
      return a3;
    }
    free(*(void **)(a1 + 28));
    *(_DWORD *)(a1 + 28) = 0;
    sub_417FE4(v8, "buffer %u too small", *(_DWORD *)(a1 + 20));
  }
  else
  {
    result = sub_43269C(a3, (char *)a2);
    if ( a3 == result )
      return result;
    sub_418224("write", v11);
  }
  return -1;
}

