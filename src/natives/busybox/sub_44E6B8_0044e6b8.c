// busybox.exe @ 0x44e6b8 size=189

int __usercall sub_44E6B8@<eax>(int result@<eax>, int a2@<edx>, unsigned __int8 a3@<cl>)
{
  char *Buffer; // esi

  if ( a2 > 0 )
  {
    Buffer = (char *)result;
    if ( qword_485BEC != 0 && unk_485BEB != 0 && qword_485BF8 != a2 - 1 )
      sub_46F108("--");
    unk_485BEB = 1;
    qword_485BF8 = a2;
    if ( unk_485BE9 != 0 )
      sub_46F088("%s%c", (const char *)lpHandles, a3);
    if ( (dword_486008 & 2) != 0 )
      sub_46F088("%i%c", a2, a3);
    result = dword_486008 & 0x2008;
    if ( result != 8200 )
      return sub_46F108(Buffer);
  }
  return result;
}

