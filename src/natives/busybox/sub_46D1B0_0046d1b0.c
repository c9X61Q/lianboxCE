// busybox.exe @ 0x46d1b0 size=82

char __usercall sub_46D1B0@<al>(int a1@<eax>, int a2@<ecx>)
{
  _DWORD *v3; // ebx
  int v4; // edi
  unsigned int v5; // eax
  int v6; // edx
  int v7; // edx

  v3 = dword_48600C;
  v4 = *((_DWORD *)dword_48600C + 8);
  while ( 1 )
  {
    v5 = v3[5];
    if ( v5 >= v3[6] )
      break;
    LOBYTE(v5) = *(_BYTE *)(v4 + v5);
    v6 = v5 - 9;
    if ( (_BYTE)v5 == 32 || (unsigned __int8)v6 <= 4u )
      break;
    sub_43B1AC(a2, v6);
  }
  if ( a1 != 0 )
  {
    while ( 1 )
    {
      v5 = v3[5];
      if ( v5 >= v3[6] )
        break;
      LOBYTE(v5) = *(_BYTE *)(v4 + v5);
      v7 = v5 - 9;
      if ( (_BYTE)v5 != 32 && (unsigned __int8)v7 > 4u )
        break;
      sub_43B1AC(a2, v7);
    }
  }
  return v5;
}

