// busybox.exe @ 0x451074 size=35

int __usercall sub_451074@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // edx
  bool v5; // zf
  int v6; // edx

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 != *(_DWORD *)(a2 + 8) )
    return 2 * (v3 != 1) - 1;
  v5 = v3 == 1;
  v6 = a2;
  if ( v5 )
    v6 = a1;
  return sub_451098(a2, v6);
}

