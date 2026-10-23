// busybox.exe @ 0x45ef04 size=66

unsigned int __usercall sub_45EF04@<eax>(int a1@<eax>, void *a2@<edx>)
{
  int v4; // eax
  int v5; // edx
  unsigned int result; // eax

  sub_41DE34(a1, 1);
  v4 = 3 * (*(_DWORD *)(a1 + 64) != (_DWORD)sub_45EF48) + 5;
  v5 = 0;
  do
  {
    *(_DWORD *)(a1 + 4 * v5 + 80) = _byteswap_ulong(*(_DWORD *)(a1 + 4 * v5 + 80));
    ++v5;
  }
  while ( v4 != v5 );
  result = 4 * v4;
  qmemcpy(a2, (const void *)(a1 + 80), result);
  return result;
}

