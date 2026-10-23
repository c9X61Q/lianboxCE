// busybox.exe @ 0x41ea10 size=35

int __usercall sub_41EA10@<eax>(const char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  if ( a2 != 0
    && *(_BYTE *)a2 == 46
    && ((LOBYTE(a3) = *(_BYTE *)(a2 + 1), (_BYTE)a3 == 0) || (_BYTE)a3 == 46 && *(_BYTE *)(a2 + 2) == 0) )
  {
    return 0;
  }
  else
  {
    return sub_41E9A4(a1, (const char *)a2, a3);
  }
}

