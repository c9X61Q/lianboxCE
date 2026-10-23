// busybox.exe @ 0x44c8d8 size=188

int __usercall sub_44C8D8@<eax>(unsigned __int8 *a1@<eax>, _DWORD *a2@<edx>, char a3@<cl>)
{
  int v3; // esi
  int v5; // edi
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // dl

  v3 = a2[6];
  if ( a2[10] <= v3 )
  {
    a1[4] = 2;
    return 0;
  }
  v5 = a2[1];
  v6 = *(_BYTE *)(v5 + v3);
  *a1 = v6;
  if ( v6 == 92 )
  {
    if ( (a3 & 1) != 0 && v3 + 1 < a2[8] )
    {
      a2[6] = v3 + 1;
      *a1 = *(_BYTE *)(v5 + v3 + 1);
    }
    goto LABEL_28;
  }
  if ( v6 != 91 )
  {
    if ( v6 == 94 )
    {
      a1[4] = 25;
      return 1;
    }
    if ( v6 <= 0x5Eu )
    {
      if ( v6 == 45 )
      {
        a1[4] = 22;
        return 1;
      }
      if ( v6 == 93 )
      {
        a1[4] = 21;
        return 1;
      }
    }
LABEL_28:
    a1[4] = 1;
    return 1;
  }
  if ( v3 + 1 < a2[8] )
  {
    v7 = *(_BYTE *)(v5 + v3 + 1);
    *a1 = v7;
    if ( v7 == 61 )
    {
      a1[4] = 28;
      return 2;
    }
    if ( v7 <= 0x3Du )
    {
      if ( v7 != 46 )
      {
        if ( v7 == 58 && (a3 & 4) != 0 )
        {
          a1[4] = 30;
          return 2;
        }
        goto LABEL_19;
      }
      a1[4] = 26;
      return 2;
    }
  }
LABEL_19:
  a1[4] = 1;
  *a1 = 91;
  return 1;
}

