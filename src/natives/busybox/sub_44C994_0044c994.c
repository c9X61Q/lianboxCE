// busybox.exe @ 0x44c994 size=218

char *__usercall sub_44C994@<eax>(char *a1@<eax>, int a2@<edx>)
{
  _BYTE *v3; // edi
  _BYTE *v4; // eax
  char *i; // ebx
  char v6; // cl
  int v7; // ecx
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // ecx
  unsigned int v12; // ecx
  int v14; // [esp+0h] [ebp-1Ch]
  char *v15; // [esp+4h] [ebp-18h]

  v3 = a1 + 1;
  v4 = a1 + 1;
  for ( i = a1; ; i = v15 )
  {
    v15 = i + 1;
    v6 = *i;
    if ( *i == 0 )
    {
      *(v4 - 1) = 0;
      return a1;
    }
    if ( v6 == 43 && a2 == 0 )
    {
      *(v4 - 1) = 32;
      goto LABEL_19;
    }
    if ( v6 != 37 )
    {
      *(v4 - 1) = v6;
      goto LABEL_19;
    }
    v7 = (unsigned __int8)i[1];
    v14 = v7 - 48;
    if ( (unsigned int)(v7 - 48) > 9 )
    {
      v8 = (unsigned __int8)v7 | 0x20;
      if ( (unsigned int)(v8 - 97) > 5 )
        break;
      v14 = v8 - 87;
    }
    v9 = (unsigned __int8)i[2];
    v10 = v9 - 48;
    if ( (unsigned int)(v9 - 48) > 9 )
    {
      v11 = (unsigned __int8)v9 | 0x20;
      v10 = -1;
      if ( (unsigned int)(v11 - 97) <= 5 )
        v10 = v11 - 87;
    }
    v12 = v10 | (16 * v14);
    if ( v12 > 0xFF )
      break;
    if ( a2 != 0 && (v12 == 47 || v12 == 0) )
      return v3;
    *(v4 - 1) = v12;
    v15 = i + 3;
LABEL_19:
    ++v4;
  }
  if ( a2 == 0 )
  {
    *(v4 - 1) = 37;
    goto LABEL_19;
  }
  return nullptr;
}

