// busybox.exe @ 0x447a88 size=51

int __usercall sub_447A88@<eax>(int a1@<ecx>, char *lpFileName@<eax>, int a3@<edx>)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-8h]

  result = sub_443508(lpFileName, 0, a1);
  if ( result >= 0 )
    return sub_456B58(v4, a3);
  return result;
}

