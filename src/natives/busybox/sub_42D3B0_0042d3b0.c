// busybox.exe @ 0x42d3b0 size=654

int __usercall sub_42D3B0@<eax>(unsigned __int8 *a1@<eax>, int *a2@<edx>, int j@<ecx>)
{
  int v4; // edi
  int v5; // ebx
  char v6; // al
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  unsigned __int8 v9; // al
  _BYTE *v10; // ebp
  unsigned int i; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  _BYTE *v17; // edx
  int k; // eax
  unsigned __int8 v19; // al
  unsigned __int8 v21; // [esp+7h] [ebp-29h]
  unsigned int v22; // [esp+8h] [ebp-28h]
  unsigned __int8 v24; // [esp+10h] [ebp-20h]
  void *Block; // [esp+14h] [ebp-1Ch]
  int v26; // [esp+18h] [ebp-18h]
  _BYTE *v27[5]; // [esp+1Ch] [ebp-14h] BYREF

  v4 = *a2;
  v22 = 512;
  v5 = 0;
  while ( *a1 != 0 )
  {
    if ( v5 + 256 > v22 )
    {
      v22 += 256;
      v4 = sub_471600(j, v22);
      *a2 = v4;
    }
    if ( *a1 == 92 )
    {
      v27[0] = a1 + 1;
      v6 = sub_418050(v27);
      a1 = v27[0] - 1;
      *(v27[0] - 1) = v6;
    }
    v7 = a1[1];
    v8 = *a1;
    if ( v7 == 45 )
    {
      v9 = a1[2];
      if ( v9 != 0 )
      {
        a1 += 3;
        if ( v9 == 92 )
        {
          v21 = v8;
          v27[0] = a1;
          v9 = sub_418050(v27);
          a1 = v27[0];
          v8 = v21;
        }
        v10 = (_BYTE *)(v4 + v5);
        for ( i = v8; v9 >= i; ++i )
          *v10++ = i;
        j = 0;
        if ( (unsigned int)v9 + 1 >= v8 )
          j = v9 - v8 + 1;
        v5 += j;
      }
      else
      {
        ++a1;
        *(_BYTE *)(v4 + v5++) = v8;
      }
    }
    else
    {
      if ( (_BYTE)v8 != 91 )
        goto LABEL_62;
      if ( v7 == 58 )
      {
        v26 = (a1[2] == 120) + 7;
        Block = (void *)sub_4718A8();
        v24 = sub_439918(v12, Block);
        free(Block);
        if ( v24 == 0xFF )
          goto LABEL_62;
        j = v26;
        a1 += v26 + 2;
        if ( (unsigned __int8)(v24 - 1) <= 1u || v24 == 9 )
        {
          v13 = 48;
          j = v4 + v5;
          do
          {
            *(_BYTE *)(j + v13 - 48) = v13;
            ++v13;
          }
          while ( v13 != 58 );
          v5 += 10;
        }
        if ( v24 == 4 || v24 <= 1u )
        {
          for ( j = 65; j != 91; ++j )
            *(_BYTE *)(v4 + v5 + j - 65) = j;
          v5 += 26;
        }
        if ( v24 == 3 || v24 <= 1u )
        {
          v14 = 97;
          j = v4 + v5;
          do
          {
            *(_BYTE *)(j + v14 - 97) = v14;
            ++v14;
          }
          while ( v14 != 123 );
          v5 += 26;
        }
        if ( (unsigned __int8)(v24 - 5) > 1u )
        {
          if ( (unsigned __int8)(v24 - 7) > 1u )
            goto LABEL_52;
          v16 = 0;
          while ( 2 )
          {
            if ( v24 == 7 )
            {
              if ( v16 - 32 <= 0x5E
                && (unsigned __int8)(v16 - 48) > 9u
                && (unsigned __int8)((v16 | 0x20) - 97) > 0x19u
                && (_BYTE)v16 != 32 )
              {
                goto LABEL_50;
              }
            }
            else if ( v16 <= 0x1F || (_BYTE)v16 == 127 )
            {
LABEL_50:
              *(_BYTE *)(v4 + v5++) = v16;
            }
            if ( ++v16 == 256 )
              goto LABEL_52;
            continue;
          }
        }
        v15 = v5 + 1;
        *(_BYTE *)(v4 + v5) = 9;
        if ( v24 == 5 )
        {
          *(_BYTE *)(v4 + v5 + 1) = 10;
          *(_BYTE *)(v4 + v5 + 2) = 11;
          *(_BYTE *)(v4 + v5 + 3) = 12;
          v15 = v5 + 5;
          *(_BYTE *)(v4 + v5 + 4) = 13;
        }
        v5 = v15 + 1;
        *(_BYTE *)(v4 + v15) = 32;
LABEL_52:
        if ( v24 == 9 )
        {
          v17 = (_BYTE *)(v4 + v5);
          for ( k = 65; k != 71; ++k )
          {
            LOBYTE(j) = k;
            j |= 0x20u;
            v17[6] = j;
            *v17++ = k;
          }
          v5 += 12;
        }
      }
      else if ( v7 == 61 )
      {
        v19 = a1[2];
        *(_BYTE *)(v4 + v5) = v19;
        if ( v19 == 0 || a1[3] != 61 || a1[4] != 93 )
          sub_418164();
        ++v5;
        a1 += 5;
      }
      else
      {
LABEL_62:
        *(_BYTE *)(v4 + v5++) = *a1++;
      }
    }
  }
  return v5;
}

