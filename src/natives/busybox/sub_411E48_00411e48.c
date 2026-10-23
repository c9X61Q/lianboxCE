// busybox.exe @ 0x411e48 size=63

int __usercall sub_411E48@<eax>(unsigned int a1@<eax>)
{
  return ((unsigned __int8)byte_483B60[BYTE1(a1)] << 8)
       | ((unsigned __int8)byte_483B60[BYTE2(a1)] << 16)
       | (unsigned __int8)byte_483B60[(unsigned __int8)a1]
       | ((unsigned __int8)byte_483B60[HIBYTE(a1)] << 24);
}

