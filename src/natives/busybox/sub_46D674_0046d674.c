// busybox.exe @ 0x46d674 size=170

int __usercall sub_46D674@<eax>(int a1@<eax>)
{
  _DWORD *v2; // ebx
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  int v11; // [esp+0h] [ebp-10h]

  v2 = dword_48600C;
  v3 = *((_DWORD *)dword_48600C + 8);
  v11 = *(unsigned __int8 *)(v3 + *((_DWORD *)dword_48600C + 5));
  if ( (unsigned __int8)sub_411B90(*(_BYTE *)(v3 + *((_DWORD *)dword_48600C + 5))) != 0 )
  {
    while ( 1 )
    {
      v5 = v2[5];
      if ( v5 >= v2[6] )
        break;
      if ( (unsigned __int8)sub_411B90(*(_BYTE *)(v3 + v5 + 1)) == 0 )
        goto LABEL_7;
      sub_43B1AC(v4, v6);
    }
  }
  else if ( *sub_4635B0("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~", v11) != 0 )
  {
    while ( 1 )
    {
      v7 = v2[5];
      if ( v7 >= v2[6] )
        break;
      if ( *sub_4635B0("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~", *(unsigned __int8 *)(v3 + v7 + 1)) == 0 )
        goto LABEL_6;
      sub_43B1AC(v4, v6);
    }
  }
  else
  {
LABEL_6:
    if ( v2[5] < v2[6] )
LABEL_7:
      sub_43B1AC(v4, v6);
  }
  if ( a1 != 0 )
  {
    while ( 1 )
    {
      v8 = v2[5];
      if ( v8 >= v2[6] )
        break;
      LOBYTE(v8) = *(_BYTE *)(v3 + v8);
      v9 = v8 - 9;
      if ( (_BYTE)v8 != 32 && (unsigned __int8)v9 > 4u )
        break;
      sub_43B1AC(v4, v9);
    }
  }
  return v11;
}

