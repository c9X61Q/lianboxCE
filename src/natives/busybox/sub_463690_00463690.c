// busybox.exe @ 0x463690 size=18

int __usercall sub_463690@<eax>(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edx

  v1 = a1;
  while ( *a1 != 0 )
    ++a1;
  return a1 - v1;
}

