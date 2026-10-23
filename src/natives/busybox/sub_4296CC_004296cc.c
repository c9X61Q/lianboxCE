// busybox.exe @ 0x4296cc size=33

int __usercall sub_4296CC@<eax>(_BYTE *a1@<eax>, int a2@<ecx>)
{
  if ( *a1 == 43 )
    LOBYTE(MultiByteStr) = 1;
  return sub_47096C(a2, "b");
}

