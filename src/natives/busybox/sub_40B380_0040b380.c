// busybox.exe @ 0x40b380 size=88

int __usercall sub_40B380@<eax>(char *a1@<eax>, int a2@<edx>)
{
  char *Str; // ebx
  signed int v4; // eax
  int v5; // eax

  Str = a1;
  if ( a1 == nullptr )
    Str = "(null)";
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 < 0 )
    v5 = strlen(Str);
  else
    v5 = (int)sub_4041C0(Str, v4);
  return sub_40B2B0(Str, v5, a2);
}

