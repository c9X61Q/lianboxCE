// busybox.exe @ 0x42f0a8 size=112

int __usercall sub_42F0A8@<eax>(int a1@<eax>, unsigned __int8 *a2@<edx>, int a3@<ecx>)
{
  int v6; // ebx
  unsigned __int8 v7; // al
  int v8; // edx

  v6 = -1;
  while ( 1 )
  {
    sub_42F118(a3, a1);
    v7 = a2[4];
    if ( v7 == 2 )
      return -2;
    v8 = *a2;
    if ( (_BYTE)v8 == 44 || v7 == 24 )
      return v6;
    if ( v7 != 1 || (unsigned __int8)(v8 - 48) > 9u || v6 == -2 )
    {
LABEL_6:
      v6 = -2;
    }
    else if ( v6 == -1 )
    {
      v6 = v8 - 48;
    }
    else
    {
      v6 = 10 * v6 + v8 - 48;
      if ( v6 > 0x7FFF )
        goto LABEL_6;
    }
  }
}

