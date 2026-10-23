// busybox.exe @ 0x418cb4 size=12

int __usercall sub_418CB4@<eax>(int result@<eax>)
{
  int i; // edx

  for ( i = 0; i != 8; ++i )
    *(_DWORD *)(result + 4 * i) = ~*(_DWORD *)(result + 4 * i);
  return result;
}

