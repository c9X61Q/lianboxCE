// busybox.exe @ 0x46c8b8 size=609

int __usercall sub_46C8B8@<eax>(unsigned __int8 *a1@<eax>, char a2@<dl>, int a3@<ecx>, int a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // esi
  unsigned __int8 v7; // dl
  int v8; // eax
  int v9; // ebx
  _BYTE *v10; // eax
  int v11; // edi
  char v12; // bp
  int i; // edx
  char v14; // cl
  int v15; // eax
  char **v16; // edi
  char *Str; // ebp
  int v18; // eax
  char *v19; // esi
  unsigned int v21; // [esp+4h] [ebp-20h]
  int v22; // [esp+8h] [ebp-1Ch]
  size_t v23; // [esp+Ch] [ebp-18h]
  _BYTE v24[17]; // [esp+13h] [ebp-11h] BYREF

  v4 = a2 & 0xF;
  v5 = a3 & 0x400 | (v4 == 10 || v4 == 3);
  v22 = v5;
  if ( v4 == 0 )
  {
    if ( v5 == 0 )
      sub_452FB4("bad substitution");
    return -1;
  }
  BYTE1(a3) |= 2u;
  v21 = a3 & (v5 == 0 ? -1 : 0xFFFFFFEE);
  v6 = (((unsigned __int16)a3 & ((unsigned __int16)-(v5 == 0) | 0xFFEE)) << 8) & 0x100;
  v7 = *a1;
  if ( *a1 != 64 )
  {
    if ( *a1 > 0x40u )
      goto LABEL_40;
    if ( v7 == 63 )
    {
      v8 = *(unsigned __int8 *)dword_485FF0;
LABEL_15:
      v9 = sub_4213FC(v8, v21);
      goto LABEL_43;
    }
    if ( v7 <= 0x2Du )
    {
      switch ( v7 )
      {
        case '!':
          v8 = *(_DWORD *)(dword_485FF0 + 192);
          if ( v8 != 0 )
            goto LABEL_15;
          return -1;
        case '#':
          v8 = *(_DWORD *)dword_485FEC;
          goto LABEL_15;
        case '$':
          v8 = *(_DWORD *)(dword_485FF0 + 8);
          goto LABEL_15;
        case '*':
          goto LABEL_25;
        case '-':
          v10 = (_BYTE *)sub_441F7C(19, dword_473334);
          dword_473334 = (int)v10;
          v11 = dword_485FF0;
          v12 = 0;
          v9 = 0;
          for ( i = 18; i != -1; --i )
          {
            if ( *(_BYTE *)(v11 + i + 63) != 0 )
            {
              v14 = *off_480780[i];
              if ( v14 != 0 )
              {
                *v10 = v14;
                ++v9;
                ++v10;
                v12 = 1;
              }
            }
          }
          if ( v12 != 0 )
            dword_473334 = (int)v10;
          goto LABEL_43;
        default:
          goto LABEL_40;
      }
    }
    if ( (unsigned __int8)(v7 - 48) > 9u )
    {
LABEL_40:
      v19 = sub_43E9A4(a1);
    }
    else
    {
      v18 = atoi((const char *)a1);
      if ( v18 < 0 || *(_DWORD *)dword_485FEC < v18 )
        return -1;
      if ( v18 != 0 )
        v19 = *(char **)(*(_DWORD *)(dword_485FEC + 16) + 4 * v18 - 4);
      else
        v19 = *(char **)(dword_485FF0 + 44);
    }
    if ( v19 != nullptr )
    {
      v9 = strlen(v19);
      sub_442AD0(v19, v9, v21);
      goto LABEL_43;
    }
    return -1;
  }
  if ( a4 == 0 || ((((unsigned __int16)a3 & ((unsigned __int16)-(v22 == 0) | 0xFFEE)) << 8) & 0x100) == 0 )
  {
LABEL_25:
    v15 = 32;
    if ( (*(_BYTE *)(dword_485FEC + 188) & 0x20) == 0 )
      v15 = ((a4 | ~v6) & 0x100) != 0 ? *(_BYTE *)(*(_DWORD *)(dword_485FEC + 192) + 4) : 0;
    v6 = v15 | ~a4 & v6;
  }
  v24[0] = v6;
  v16 = *(char ***)(dword_485FEC + 16);
  if ( v16 == nullptr )
    return -1;
  v9 = 0;
  while ( 1 )
  {
    Str = *v16;
    if ( *v16 == nullptr )
      break;
    ++v16;
    v23 = strlen(Str);
    sub_442AD0(Str, v23, v21);
    v9 += v23;
    if ( *v16 != nullptr && v6 != 0 )
    {
      ++v9;
      sub_442AD0(v24, 1, v21);
    }
  }
LABEL_43:
  if ( v22 != 0 )
    dword_473334 -= v9;
  return v9;
}

