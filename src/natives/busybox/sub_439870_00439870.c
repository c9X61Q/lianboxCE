// busybox.exe @ 0x439870 size=67

int __usercall sub_439870@<eax>(int a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  char v6; // dl

  if ( sub_43C594(a3, a2) == 0 )
    return a1;
  v6 = *(_BYTE *)(a3 + strlen(a2));
  if ( v6 != 32 && (unsigned __int8)(v6 - 9) > 4u )
    return a1;
  sub_460FB8();
  return sub_47188C();
}

