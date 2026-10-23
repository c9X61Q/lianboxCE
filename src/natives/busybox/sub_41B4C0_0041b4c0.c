// busybox.exe @ 0x41b4c0 size=96

int __usercall sub_41B4C0@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<ebx>)
{
  int v3; // ebx
  int v4; // edx
  int v5; // ecx

  v3 = dword_486010;
  v4 = *(_DWORD *)(dword_486010 + 64);
  if ( a1 == 1 )
  {
    if ( v4 == *(_DWORD *)(dword_486010 + 60) )
      return sub_44F07C(a2, a3);
    goto LABEL_6;
  }
  if ( v4 != 1 )
  {
    v5 = 1;
    if ( a1 == 0 )
    {
LABEL_7:
      *(_DWORD *)(dword_486010 + 64) = v5;
      free(*(void **)(v3 + 68));
      *(_DWORD *)(v3 + 68) = sub_47188C();
      return sub_45A198();
    }
LABEL_6:
    v5 = a1 + v4;
    goto LABEL_7;
  }
  return sub_44F07C(a2, a3);
}

