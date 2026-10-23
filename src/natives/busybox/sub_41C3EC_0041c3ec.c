// busybox.exe @ 0x41c3ec size=65

int __usercall sub_41C3EC@<eax>(int a1@<eax>, int a2@<ecx>)
{
  _DWORD *v2; // ebx
  int v3; // edx
  int v4; // eax

  v2 = dword_486000;
  *((_DWORD *)dword_486000 + 1) = &unk_4804D8;
  v3 = 0;
  if ( a1 != 0 )
  {
    v4 = sub_439918(a2, a1);
    v3 = 39;
    if ( v4 >= 0 )
    {
      v2[1] = &byte_4806A0[2 * v4];
      return (unsigned __int8)byte_4806A0[2 * v4];
    }
  }
  return v3;
}

