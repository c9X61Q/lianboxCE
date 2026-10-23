// busybox.exe @ 0x446730 size=823

int __usercall sub_446730@<eax>(unsigned int a1@<eax>)
{
  int v1; // esi
  _BYTE *Str1; // ebx
  int v3; // edx
  char v4; // dl
  _BYTE *v5; // ebx
  _BYTE *v6; // edi
  char v7; // dl
  int v8; // edi
  _BYTE *v9; // ebx
  _BYTE *v10; // edx
  char v11; // al
  _BYTE *v12; // edi
  _BYTE *v13; // ecx
  _BYTE *v14; // eax
  size_t MaxCount; // eax
  int v16; // eax
  char v17; // al
  char v18; // al
  int v19; // eax
  int result; // eax
  char v21; // [esp+Fh] [ebp-29h]
  unsigned int v22; // [esp+10h] [ebp-28h]
  _DWORD *v23; // [esp+18h] [ebp-20h]
  _BYTE *v24; // [esp+1Ch] [ebp-1Ch]
  size_t v25; // [esp+1Ch] [ebp-1Ch]
  char *Str2; // [esp+20h] [ebp-18h]
  _BYTE *v28[4]; // [esp+28h] [ebp-10h] BYREF

  v1 = dword_486010;
  if ( *(_BYTE *)(dword_486010 - 7) != 0 )
  {
    *(_BYTE *)(dword_486010 - 7) = 0;
  }
  else if ( *(_BYTE *)(dword_486010 + 108) != 0 )
  {
    *(_BYTE *)(dword_486010 + 108) = 0;
    *(_DWORD *)(v1 + 4) = *(_DWORD *)(v1 + 96);
    *(_DWORD *)v1 = *(_DWORD *)(v1 + 100);
  }
  else
  {
    v22 = a1 >> 2;
    do
    {
      Str1 = (_BYTE *)sub_460EA0();
      v3 = *(_DWORD *)(v1 + 12);
      *(_DWORD *)(v1 - 40) = v3;
      if ( *Str1 == 35 )
      {
        do
          ++Str1;
        while ( *Str1 != 0 && *Str1 != 10 );
      }
      if ( *Str1 == 10 )
        *(_DWORD *)(v1 + 12) = v3 + 1;
      v4 = *Str1;
      if ( *Str1 == 0 )
      {
        v8 = 0x2000000;
        goto LABEL_64;
      }
      if ( v4 == 34 )
      {
        v5 = Str1 + 1;
        *(_DWORD *)(v1 + 8) = v5;
        v6 = v5;
        while ( 1 )
        {
          v7 = *v5;
          if ( *v5 == 34 )
            break;
          if ( v7 == 10 || v7 == 0 )
            goto LABEL_37;
          v28[0] = v5;
          *v6++ = sub_446AC8();
          v5 = v28[0];
        }
        Str1 = v5 + 1;
        *v6 = 0;
        v8 = 0x20000000;
      }
      else if ( (v22 & 1) != 0 && v4 == 47 )
      {
        v9 = Str1 + 1;
        *(_DWORD *)(v1 + 8) = v9;
        v10 = v9;
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 == 47 )
            break;
          if ( v11 == 0 || v11 == 10 )
            goto LABEL_37;
          *v10 = v11;
          v12 = v10 + 1;
          v24 = v10;
          if ( v11 == 92 )
          {
            v28[0] = v9 + 1;
            *v10 = sub_418050(v28);
            v13 = v9 + 1;
            if ( v9[1] == 92 )
            {
              *v12 = 92;
              v12 = v24 + 2;
            }
            v14 = v28[0];
            if ( v28[0] == v13 )
            {
              v14 = v9 + 2;
              *v12++ = *v13;
            }
            v10 = v12;
            v9 = v14;
          }
          else
          {
            ++v10;
            ++v9;
          }
        }
        Str1 = v9 + 1;
        *v10 = 0;
        v8 = 4;
      }
      else if ( v4 == 46 || (unsigned __int8)(v4 - 48) <= 9u )
      {
        v28[0] = Str1;
        *(double *)(v1 - 120) = sub_445D5C(v28);
        Str1 = v28[0];
        if ( *v28[0] == 46 )
          goto LABEL_37;
        v8 = 0x40000000;
      }
      else
      {
        v23 = &unk_484360;
        v8 = 1;
        Str2 = (char *)&unk_484500;
        while ( 1 )
        {
          MaxCount = (unsigned __int8)*Str2;
          if ( (_BYTE)MaxCount == 0 )
            break;
          ++Str2;
          if ( (_BYTE)MaxCount == 0xFF )
          {
            v8 *= 2;
          }
          else
          {
            v25 = MaxCount;
            if ( (v8 & (a1 | 0x1FF8080)) != 0 )
            {
              v21 = v4;
              v16 = strncmp(Str1, Str2, MaxCount);
              v4 = v21;
              if ( v16 == 0
                && ((v8 & 0x1FF0080) == 0
                 || (unsigned __int8)((v17 = Str1[v25]) - 48) > 9u
                 && (unsigned __int8)((Str1[v25] | 0x20) - 97) > 0x19u
                 && v17 != 95) )
              {
                *(_DWORD *)v1 = *v23;
                Str1 += v25;
                goto LABEL_64;
              }
            }
            ++v23;
            Str2 += v25;
          }
        }
        if ( (unsigned __int8)((v4 | 0x20) - 97) > 0x19u && v4 != 95 )
          goto LABEL_37;
        *(_DWORD *)(v1 + 8) = --Str1;
        while ( 1 )
        {
          v18 = *++Str1;
          if ( (unsigned __int8)(*Str1 - 48) > 9u && (unsigned __int8)((*Str1 | 0x20) - 97) > 0x19u && v18 != 95 )
            break;
          *(Str1 - 1) = v18;
        }
        *(Str1 - 1) = 0;
        if ( (a1 & 0xC000000) != 0x4000000 )
          Str1 = (_BYTE *)sub_460EA0();
        v8 = 0x10000000;
        if ( *Str1 != 40 )
        {
          v8 = 0x4000000;
          if ( *Str1 == 91 )
          {
            ++Str1;
            v8 = 0x8000000;
          }
        }
      }
LABEL_64:
      *(_DWORD *)(v1 - 20) = Str1;
      v19 = *(_DWORD *)(v1 + 104);
    }
    while ( (v19 & 0xF3C0) != 0 && (v8 & 0x8000) != 0 );
    if ( (v19 & 0x64100812) != 0 && (v8 & 0x7C380421) != 0 && (a1 & 0x3C0) != 0 )
    {
      if ( v19 == 0x100000 && v8 == 1 )
      {
        v8 = 1;
      }
      else
      {
        *(_BYTE *)(v1 + 108) = 1;
        *(_DWORD *)(v1 + 96) = v8;
        *(_DWORD *)(v1 + 100) = *(_DWORD *)v1;
        *(_DWORD *)v1 = 588190976;
        v8 = 960;
      }
    }
    *(_DWORD *)(v1 + 4) = v8;
  }
  result = *(_DWORD *)(v1 + 4);
  *(_DWORD *)(v1 + 104) = result;
  if ( (result & a1) == 0 )
LABEL_37:
    sub_4645B8();
  return result;
}

