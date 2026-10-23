// busybox.exe @ 0x452990 size=52

int __usercall sub_452990@<eax>(unsigned int a1@<eax>, int a2@<ecx>)
{
  int v3; // edx
  unsigned int v4; // eax
  int result; // eax
  int v6; // ecx

  v3 = dword_486010;
  v4 = *(_DWORD *)(dword_486010 - 16);
  if ( v4 > 0x3FFB )
  {
    sub_45292C((unsigned __int16)a1, a2);
    return sub_45292C(HIWORD(a1), v6);
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(dword_486010 - 80) + v4) = a1;
    result = v4 + 4;
    *(_DWORD *)(v3 - 16) = result;
  }
  return result;
}

