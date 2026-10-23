// busybox.exe @ 0x4564ec size=76

int __usercall sub_4564EC@<eax>(int a1@<eax>, int a2@<edx>, char a3@<cl>)
{
  int result; // eax
  unsigned int v5; // ecx

  if ( a2 < 0 )
    return *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 32) == a2 )
    return (a3 & 2) == 0 ? 10 : 8;
  v5 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + a2);
  result = (*(_DWORD *)(*(_DWORD *)(a1 + 52) + 4 * (v5 >> 5)) >> v5) & 1;
  if ( result == 0 && (_BYTE)v5 == 10 && *(_BYTE *)(a1 + 61) != 0 )
    return 2;
  return result;
}

