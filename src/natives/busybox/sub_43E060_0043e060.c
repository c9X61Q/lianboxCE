// busybox.exe @ 0x43e060 size=351

_BYTE *__usercall sub_43E060@<eax>(int a1@<eax>)
{
  int i; // esi
  int v3; // eax
  int j; // eax
  unsigned int v5; // eax
  int v6; // edx
  char v7; // dl
  int v8; // edi
  _BYTE *v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v15; // [esp+0h] [ebp-14h]

  for ( i = 0; ; i = (int)v9 )
  {
    v3 = sub_458374();
    if ( v3 == 0 )
      break;
    if ( v3 == 1 && (a1 & 1) != 0 )
    {
      sub_44B928();
      return (_BYTE *)i;
    }
    ++byte_4735A8;
    byte_473198 = 7;
    if ( a1 == 2 )
    {
      v5 = sub_458374();
      byte_4735A8 = 1;
      v6 = 572496897;
      if ( _bittest(&v6, v5) )
        return (_BYTE *)i;
    }
    for ( j = sub_44D184(); ; *(_DWORD *)(j + 8) = v8 )
    {
      v9 = (_BYTE *)j;
      v10 = sub_458374();
      if ( v10 == 6 )
      {
        v7 = 5;
        goto LABEL_14;
      }
      if ( v10 != 7 )
        break;
      v7 = 6;
LABEL_14:
      v15 = v7;
      byte_473198 = 7;
      v8 = sub_44D184();
      j = sub_463A54();
      *(_BYTE *)j = v15;
      *(_DWORD *)(j + 4) = v9;
    }
    byte_4735A8 = 1;
    v11 = sub_458374();
    if ( v11 == 5 )
    {
      if ( *v9 == 1 )
      {
        v9[1] = 1;
      }
      else
      {
        if ( *v9 != 2 )
        {
          v12 = sub_463A54();
          *(_DWORD *)(v12 + 8) = v9;
          v9 = (_BYTE *)v12;
        }
        *v9 = 3;
      }
      if ( i != 0 )
      {
LABEL_26:
        v13 = sub_463A54();
        *(_BYTE *)v13 = 7;
        *(_DWORD *)(v13 + 4) = i;
        *(_DWORD *)(v13 + 8) = v9;
        v9 = (_BYTE *)v13;
        goto LABEL_27;
      }
    }
    else
    {
      if ( i != 0 )
        goto LABEL_26;
LABEL_27:
      if ( v11 > 1 )
      {
        if ( (unsigned int)(v11 - 4) > 1 )
          goto LABEL_33;
      }
      else
      {
        if ( v11 < 0 )
        {
LABEL_33:
          if ( (a1 & 1) != 0 )
            sub_452FDC();
          byte_4735A8 = 1;
          return v9;
        }
        byte_4735A8 = 1;
      }
    }
    a1 |= 2u;
  }
  if ( i == 0 )
    i = -(a1 & 1);
  sub_44B928();
  ++byte_4735A8;
  byte_473450 = 0;
  return (_BYTE *)i;
}

