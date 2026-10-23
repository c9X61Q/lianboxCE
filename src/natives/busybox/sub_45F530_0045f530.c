// busybox.exe @ 0x45f530 size=51

int __usercall sub_45F530@<eax>(int result@<eax>)
{
  int i; // edx
  __int64 v2; // rcx

  for ( i = 0; i != 10; ++i )
  {
    HIDWORD(v2) = dword_480060[i];
    LODWORD(v2) = 0;
    *(_QWORD *)(result + 8 * i) = (unsigned int)dword_4800A0[i] + v2;
  }
  return result;
}

