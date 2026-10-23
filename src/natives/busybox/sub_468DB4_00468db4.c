// busybox.exe @ 0x468db4 size=682

int __usercall sub_468DB4@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // esi
  int Block; // ebx
  int v4; // ecx
  size_t Size; // eax
  int v6; // eax
  int v7; // edx
  int v8; // edx
  unsigned __int16 v9; // ax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // ecx
  const char *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // edx
  int v18; // eax
  int v20; // [esp+Ch] [ebp-2Ch]
  int v21; // [esp+10h] [ebp-28h]
  unsigned int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+18h] [ebp-20h]
  unsigned int v24; // [esp+1Ch] [ebp-1Ch]
  __int64 v25; // [esp+1Ch] [ebp-1Ch]
  CHAR v27[14]; // [esp+2Ah] [ebp-Eh] BYREF

  if ( *(_BYTE *)a1 != 0 )
    goto LABEL_7;
  if ( sub_432664(2, v27) != 2 )
    goto LABEL_3;
  if ( *(_WORD *)v27 == 0x9D1F )
  {
    *(_BYTE *)a1 = 2;
    return sub_468670(a1, a2);
  }
  if ( *(_WORD *)v27 == 0x8B1F )
  {
LABEL_7:
    Block = sub_4728CC(a2);
    *(_DWORD *)(Block + 40) = -1;
    *(_DWORD *)(Block + 44) = -1;
    *(_DWORD *)(Block + 36) = sub_470E78();
    *(_DWORD *)(Block + 12) = *(_DWORD *)(a1 + 12);
    v2 = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)(Block + 48);
      Size = *(_DWORD *)(Block + 52) - v4;
      *(_DWORD *)(Block + 52) = Size;
      memmove(*(void **)(Block + 36), (const void *)(*(_DWORD *)(Block + 36) + v4), Size);
      *(_DWORD *)(Block + 48) = 0;
      if ( !sub_466C48(Block, 8u) )
        goto LABEL_24;
      v6 = *(_DWORD *)(Block + 48);
      v7 = *(_DWORD *)(Block + 36);
      v24 = *(_DWORD *)(v7 + v6);
      v21 = *(_DWORD *)(v7 + v6 + 4);
      v22 = v24;
      *(_DWORD *)(Block + 48) = v6 + 8;
      if ( (_BYTE)v24 != 8 )
        goto LABEL_24;
      if ( (v24 & 0x400) != 0 )
      {
        if ( !sub_466C48(Block, 2u) )
          goto LABEL_24;
        v8 = *(_DWORD *)(Block + 48);
        v9 = *(_WORD *)(*(_DWORD *)(Block + 36) + v8);
        *(_DWORD *)(Block + 48) = v8 + 2;
        v20 = v9;
        if ( !sub_466C48(Block, v9) )
          goto LABEL_24;
        *(_DWORD *)(Block + 48) += v20;
      }
      if ( (v24 & 0x1800) != 0 )
      {
        while ( sub_466C48(Block, 1u) )
        {
          v10 = *(_DWORD *)(Block + 36);
          v11 = *(_DWORD *)(Block + 48);
          *(_DWORD *)(Block + 48) = v11 + 1;
          if ( *(_BYTE *)(v10 + v11) == 0 )
          {
            if ( (BYTE1(v22) & 0x18) != 0x18 )
              goto LABEL_19;
            v12 = v22;
            BYTE1(v12) = BYTE1(v22) & 0xE7;
            v22 = v12;
          }
        }
LABEL_24:
        v13 = "corrupted data";
        goto LABEL_27;
      }
LABEL_19:
      *(_DWORD *)(a1 + 52) = (v21 << 16) | HIWORD(v24);
      if ( (v22 & 0x200) != 0 )
      {
        if ( !sub_466C48(Block, 2u) )
          goto LABEL_24;
        *(_DWORD *)(Block + 48) += 2;
      }
      v25 = sub_43A568(Block, a1);
      if ( v25 < 0 )
        goto LABEL_35;
      if ( !sub_466C48(Block, 8u) )
        goto LABEL_24;
      v14 = *(_DWORD *)(Block + 36);
      v15 = *(_DWORD *)(Block + 48);
      v23 = *(_DWORD *)(v14 + v15);
      *(_DWORD *)(Block + 48) = v15 + 4;
      if ( ~*(_DWORD *)(Block + 8) != v23 )
        break;
      v16 = *(_DWORD *)(v14 + v15 + 4);
      *(_DWORD *)(Block + 48) = v15 + 8;
      if ( *(_DWORD *)Block == v16 )
      {
        v2 += v25;
      }
      else
      {
        sub_4181F8("incorrect length");
        v2 = -1;
      }
      if ( !sub_466C48(Block, 2u) )
        goto LABEL_36;
      v17 = *(_DWORD *)(Block + 36);
      v18 = *(_DWORD *)(Block + 48);
      if ( *(_BYTE *)(v17 + v18) != 31 || *(_BYTE *)(v17 + v18 + 1) != 0x8B )
        goto LABEL_36;
      *(_DWORD *)(Block + 48) = v18 + 2;
    }
    v13 = "crc error";
LABEL_27:
    sub_4181F8(v13);
LABEL_35:
    v2 = -1;
LABEL_36:
    free(*(void **)(Block + 36));
    free((void *)Block);
  }
  else
  {
LABEL_3:
    sub_4181F8("invalid magic");
    return -1;
  }
  return v2;
}

