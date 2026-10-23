// busybox.exe @ 0x451138 size=33

int __usercall sub_451138@<eax>(int *a1@<eax>)
{
  int result; // eax
  unsigned int v3; // edx

  result = *a1;
  if ( result != 0 )
  {
    v3 = *(_DWORD *)(a1[3] + 4 * result - 4);
    result = 32 * (result - 1);
    while ( v3 != 0 )
    {
      ++result;
      v3 >>= 1;
    }
  }
  return result;
}

