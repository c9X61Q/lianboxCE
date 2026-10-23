// busybox.exe @ 0x45e41c size=34

int __usercall sub_45E41C@<eax>(int a1@<eax>)
{
  _DWORD *v2; // eax
  int v3; // edx

  v2 = sub_42FF18(a1);
  if ( v2 == nullptr )
    return 0;
  v3 = dword_486010;
  *(_DWORD *)dword_486010 = a1;
  *(_DWORD *)(v3 + 16) = v2;
  return 1;
}

