// busybox.exe @ 0x44d140 size=67

int __usercall sub_44D140@<eax>(char a1@<al>, int a2@<ecx>)
{
  int result; // eax

  if ( dword_485C74 == dword_485C78 )
  {
    dword_485C70 = sub_471600(a2, dword_485C78 + 64);
    dword_485C78 += 64;
  }
  result = dword_485C74++;
  *(_BYTE *)(dword_485C70 + result) = a1;
  return result;
}

