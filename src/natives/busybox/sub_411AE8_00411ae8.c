// busybox.exe @ 0x411ae8 size=56

int __usercall sub_411AE8@<eax>(int result@<eax>, int a2@<edx>)
{
  int i; // ecx
  unsigned int v3; // ebx

  for ( i = 0; i != 16; i += 4 )
  {
    v3 = *(_DWORD *)(a2 + i);
    *(_DWORD *)(result + 4 * i) ^= HIBYTE(v3);
    *(_DWORD *)(result + 4 * i + 4) ^= BYTE2(v3);
    *(_DWORD *)(result + 4 * i + 8) ^= BYTE1(v3);
    *(_DWORD *)(result + 4 * i + 12) ^= (unsigned __int8)v3;
  }
  return result;
}

