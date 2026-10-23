// busybox.exe @ 0x418ca0 size=17

int __usercall sub_418CA0@<eax>(int result@<eax>, int a2@<edx>)
{
  int i; // ecx

  for ( i = 0; i != 8; ++i )
    *(_DWORD *)(result + 4 * i) |= *(_DWORD *)(a2 + 4 * i);
  return result;
}

