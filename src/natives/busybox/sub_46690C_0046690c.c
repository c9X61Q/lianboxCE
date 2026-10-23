// busybox.exe @ 0x46690c size=48

int __usercall sub_46690C@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int result; // eax

  result = sub_46693C(a3, "handshake record");
  if ( result < a2 || **(_BYTE **)(a1 + 52) != 22 )
    sub_416B80((unsigned __int8 **)(a1 + 52), "handshake record", result);
  return result;
}

