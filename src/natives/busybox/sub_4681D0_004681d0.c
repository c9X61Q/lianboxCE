// busybox.exe @ 0x4681d0 size=415

int __usercall sub_4681D0@<eax>(int result@<eax>, int a2@<edx>, char a3@<cl>)
{
  unsigned int v3; // ebp
  int v4; // eax
  unsigned __int8 v5; // dl
  int v6; // edi
  int v7; // ebx
  unsigned __int8 v8; // al
  _DWORD *v9; // ebx
  int v10; // edx
  _BYTE *v11; // [esp+0h] [ebp-18h]
  char v12; // [esp+4h] [ebp-14h]

  while ( 1 )
  {
    v11 = (_BYTE *)result;
    v12 = a3;
    if ( a3 == 64 )
      return result;
    v3 = a2;
    if ( (unsigned __int8)a3 > 0x40u )
      goto LABEL_28;
    if ( a3 == 4 )
      break;
    if ( a3 != 5 )
      goto LABEL_28;
    if ( a2 != 1 )
      return result;
    v4 = dword_486010;
    v5 = *(_BYTE *)(dword_486010 + 5000);
    if ( v5 == 64 )
    {
      *(_BYTE *)(dword_486010 + 5000) = 1;
LABEL_12:
      *(_DWORD *)(v4 + 5008) = v11;
      v6 = *(_DWORD *)(v4 + 5004);
      *(_DWORD *)(v4 + 5004) = v6 + 1;
      result = v4 - (v6 + 1);
      *(_BYTE *)(result + 5268) = *v11;
      if ( v6 == 255 )
        return sub_468398();
      return result;
    }
    if ( v5 > 0x40u )
      goto LABEL_28;
    if ( v5 != 0 )
    {
      if ( v5 != 1 )
      {
LABEL_28:
        v9 = (_DWORD *)dword_486010;
        if ( (a3 & 0xFD) == 1 )
        {
          if ( *(_DWORD *)(dword_486010 + 4) == v3 + *(_DWORD *)dword_486010 )
            --v3;
          result = sub_4728CC(a3);
          qmemcpy((void *)(result + 13), v11, v3);
        }
        else
        {
          result = sub_4728CC(a3);
        }
        *(_DWORD *)(result + 8) = v3;
        v10 = (int)&v11[-*v9];
        if ( (v12 & 0x20) != 0 )
          v10 = v9[1252] - *v9;
        *(_DWORD *)(result + 4) = v10;
        *(_BYTE *)(result + 12) = v12 & 0xDF;
        *(_DWORD *)result = v9[1317];
        v9[1317] = result;
        ++v9[5];
        return result;
      }
      goto LABEL_12;
    }
    sub_468398();
    a3 = 5;
    a2 = 1;
LABEL_27:
    result = (int)v11;
  }
  if ( a2 == 0 )
    return result;
  v7 = dword_486010;
  v8 = *(_BYTE *)(dword_486010 + 5000);
  if ( v8 != 64 )
  {
    if ( v8 > 0x40u )
      goto LABEL_28;
    if ( v8 == 0 )
      goto LABEL_22;
    if ( v8 != 1 )
      goto LABEL_28;
    sub_468398();
    a3 = 4;
    a2 = v3;
    goto LABEL_27;
  }
  *(_BYTE *)(dword_486010 + 5000) = 0;
  *(_DWORD *)(v7 + 5008) = v11;
  do
  {
LABEL_22:
    result = *(_DWORD *)(v7 + 5004) + 1;
    *(_DWORD *)(v7 + 5004) = result;
    if ( result == 256 )
      result = sub_468398();
    --v3;
  }
  while ( v3 != 0 );
  return result;
}

