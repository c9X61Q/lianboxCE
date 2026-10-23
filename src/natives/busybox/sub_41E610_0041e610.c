// busybox.exe @ 0x41e610 size=589

int sub_41E610()
{
  int v0; // esi
  unsigned int v1; // eax
  void ***v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int i; // eax
  const char *v7; // edx
  int v8; // ebx
  const char *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  void **Block; // ebx
  _DWORD *v16; // [esp+4h] [ebp-34h]
  int v17; // [esp+4h] [ebp-34h]
  int v18; // [esp+8h] [ebp-30h]
  int v19; // [esp+8h] [ebp-30h]
  void *v20[3]; // [esp+Ch] [ebp-2Ch] BYREF
  int v21; // [esp+18h] [ebp-20h]
  int v22; // [esp+1Ch] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]

  v0 = sub_470E78();
  v1 = (unsigned int)dword_486008 >> 9;
  BYTE1(v1) = ((unsigned int)dword_486008 >> 17) | 1;
  v18 = 0;
  while ( 1 )
  {
    ++v18;
    if ( (v1 & 1) != 0 )
      break;
    v1 >>= 1;
  }
  v2 = (void ***)sub_4728CC();
  *v2 = v20;
  v3 = sub_470E78();
  v2[2] = (void **)v3;
  v2[9] = (void **)v3;
  v2[7] = (void **)v3;
  v4 = sub_470E78();
  v2[3] = (void **)v4;
  v2[8] = (void **)v4;
  v2[4] = (void **)sub_470E78();
  v2[19] = (void **)sub_420088(v5, 1);
  *((_WORD *)v2 + 2) = 514;
  *((_BYTE *)v2 + 6) = v18;
  v2[14] = (void **)(100000 * v18 - 19);
  v20[0] = v2;
  v23 = 0;
  v24 = 0;
  v2[11] = (void **)256;
  v2[12] = nullptr;
  v2[13] = nullptr;
  v2[20] = (void **)-1;
  for ( i = 0; i != 256; ++i )
    *((_BYTE *)v2 + i + 100) = 0;
  v2[22] = (void **)((char *)v2[22] + 1);
LABEL_7:
  v8 = sub_432664(0x2000, v0);
  if ( v8 >= 0 )
  {
    v21 = v8;
    v20[1] = (void *)v0;
    while ( 1 )
    {
      v22 = 0x2000;
      v20[2] = (void *)(v0 + 0x2000);
      v10 = v20[0];
      if ( *((_BYTE *)v20[0] + 4) != 2 )
        goto LABEL_14;
      if ( v8 == 0 )
        break;
      sub_437388();
      v11 = 1;
LABEL_18:
      if ( v22 != 0x2000 )
      {
        v17 = 0x2000 - v22;
        v12 = sub_43269C(0x2000 - v22, v0 + 0x2000);
        if ( v17 != v12 )
        {
          v7 = "write error";
          if ( v12 >= 0 )
          {
            *_errno() = 0;
            v7 = "short write";
          }
          v9 = v7;
          goto LABEL_23;
        }
      }
      if ( v11 == 4 || v8 != 0 && v21 == 0 )
      {
        v13 = v23;
        if ( v8 != 0 && v24 >= 0 )
          goto LABEL_7;
        goto LABEL_29;
      }
    }
    *((_BYTE *)v20[0] + 4) = 4;
LABEL_14:
    v16 = v10;
    sub_437388();
    v11 = 3;
    if ( *(_DWORD *)(*v16 + 12) == 0 && (v16[11] > 0xFFu || (int)v16[12] <= 0) )
      v11 = 4 - (v16[16] < v16[15]);
    goto LABEL_18;
  }
  v9 = "read error";
LABEL_23:
  sub_418224(v9, (int)v7);
  v13 = -1;
LABEL_29:
  v19 = v13;
  Block = (void **)v20[0];
  free(*((void **)v20[0] + 2));
  free(Block[3]);
  free(Block[4]);
  free(Block[19]);
  free(Block);
  free((void *)v0);
  return v19;
}

