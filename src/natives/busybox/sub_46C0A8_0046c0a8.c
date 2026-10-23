// busybox.exe @ 0x46c0a8 size=44

int __usercall sub_46C0A8@<eax>(unsigned __int16 *a1@<eax>)
{
  int result; // eax

  result = *a1;
  if ( (unsigned __int16)(result + 10240) <= 0x3FFu )
    return (a1[1] & 0x3FF | (result << 10) & 0xFFC00) + 0x10000;
  return result;
}

