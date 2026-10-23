// busybox.exe @ 0x422c38 size=914

int sub_422C38()
{
  int v0; // ebx
  unsigned int v1; // eax
  int v2; // ecx
  _WORD *v3; // ecx
  unsigned int v4; // esi
  _BYTE *v5; // ebp
  unsigned int v6; // edi
  _BYTE *v7; // esi
  _BYTE *v8; // esi
  _BYTE *v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  _WORD *v17; // eax
  int v18; // eax
  int v19; // edx
  unsigned int v21; // [esp+0h] [ebp-3Ch]
  int v22; // [esp+0h] [ebp-3Ch]
  unsigned int v23; // [esp+4h] [ebp-38h]
  BOOL v24; // [esp+8h] [ebp-34h]
  int v25; // [esp+Ch] [ebp-30h]
  unsigned int v26; // [esp+10h] [ebp-2Ch]
  int v27; // [esp+14h] [ebp-28h]
  unsigned int v28; // [esp+1Ch] [ebp-20h]
  char v29; // [esp+22h] [ebp-1Ah]
  char v30; // [esp+23h] [ebp-19h]
  unsigned int v31; // [esp+24h] [ebp-18h]
  int v32; // [esp+28h] [ebp-14h]

  v21 = 2;
  v24 = false;
  while ( 1 )
  {
    v0 = dword_486010;
    v26 = *(_DWORD *)(dword_486010 - 24);
    v1 = *(_DWORD *)(dword_486010 - 32);
    if ( v26 == 0 )
      break;
    v25 = *(_DWORD *)(dword_486010 - 76);
    v2 = (*(unsigned __int8 *)(v25 + v1 + 2) ^ (unsigned __int16)(32 * *(_DWORD *)(dword_486010 - 40))) & 0x7FFF;
    *(_DWORD *)(dword_486010 - 40) = v2;
    v27 = *(_DWORD *)(v0 - 72);
    v3 = (_WORD *)(v27 + 2 * v2 + 0x10000);
    v23 = (unsigned __int16)*v3;
    *(_WORD *)(v27 + 2 * (v1 & 0x7FFF)) = v23;
    *v3 = v1;
    *(_DWORD *)(v0 - 36) = v21;
    v32 = *(_DWORD *)(v0 - 28);
    if ( v23 == 0 || *(_DWORD *)(v0 - 60) <= v21 || v1 - v23 > 0x7EFA )
      goto LABEL_4;
    v31 = *(_DWORD *)(v0 - 64);
    if ( v21 >= *(_DWORD *)(v0 - 56) )
      v31 >>= 2;
    v5 = (_BYTE *)(v25 + v1);
    v6 = v21;
    v28 = v25 + v1 + 258;
    v30 = *(_BYTE *)(v25 + v1 + v21 - 1);
    v29 = *(_BYTE *)(v25 + v1 + v21);
    while ( 1 )
    {
      v7 = (_BYTE *)(v23 + v25);
      if ( *(_BYTE *)(v23 + v25 + v6) != v29 || v7[v6 - 1] != v30 || *v7 != *v5 || v7[1] != v5[1] )
        goto LABEL_35;
      v8 = v7 + 2;
      v9 = (_BYTE *)(v25 + v1 + 2);
      while ( v9[1] == v8[1] )
      {
        if ( v9[2] != v8[2] )
        {
          v9 += 2;
          goto LABEL_32;
        }
        if ( v9[3] != v8[3] )
        {
          v9 += 3;
          goto LABEL_32;
        }
        if ( v9[4] != v8[4] )
        {
          v9 += 4;
          goto LABEL_32;
        }
        if ( v9[5] != v8[5] )
        {
          v9 += 5;
          goto LABEL_32;
        }
        if ( v9[6] != v8[6] )
        {
          v9 += 6;
          goto LABEL_32;
        }
        if ( v9[7] != v8[7] )
        {
          v9 += 7;
          goto LABEL_32;
        }
        v9 += 8;
        v8 += 8;
        if ( *v9 != *v8 || v28 <= (unsigned int)v9 )
          goto LABEL_32;
      }
      ++v9;
LABEL_32:
      v10 = v28 - (_DWORD)v9;
      v11 = 258 - v10;
      if ( (int)v6 < (int)(258 - v10) )
      {
        *(_DWORD *)(v0 - 28) = v23;
        if ( *(_DWORD *)(v0 - 52) <= v11 )
          break;
        v30 = v5[v11 - 1];
        v29 = v5[v11];
        v6 = 258 - v10;
      }
LABEL_35:
      v23 = *(unsigned __int16 *)(v27 + 2 * (v23 & 0x7FFF));
      v12 = v1;
      if ( v1 < 0x7EFA )
        v12 = 32506;
      if ( v12 - 32506 < v23 && --v31 != 0 )
        continue;
      goto LABEL_41;
    }
    v6 = 258 - v10;
LABEL_41:
    v4 = v26;
    if ( v26 > v6 )
      v4 = v6;
    if ( v4 == 3 && v1 - *(_DWORD *)(v0 - 28) > 0x1000 )
LABEL_4:
      v4 = 2;
    if ( v4 > v21 || v21 <= 2 )
    {
      if ( v24 )
      {
        if ( sub_420A98(0, *(unsigned __int8 *)(v25 + v1 - 1)) )
        {
          sub_430F50(0, *(_DWORD *)(v0 - 32) - *(_DWORD *)(v0 - 44));
          *(_DWORD *)(v0 - 44) = *(_DWORD *)(v0 - 32);
        }
        ++*(_DWORD *)(v0 - 32);
        --*(_DWORD *)(v0 - 24);
      }
      else
      {
        *(_DWORD *)(v0 - 32) = v1 + 1;
        *(_DWORD *)(v0 - 24) = v26 - 1;
        v24 = true;
      }
    }
    else
    {
      v24 = sub_420A98(v1 - 1 - v32, v21 - 3);
      v13 = *(_DWORD *)(v0 - 36);
      *(_DWORD *)(v0 - 24) = *(_DWORD *)(v0 - 24) + 1 - v13;
      *(_DWORD *)(v0 - 36) = v13 - 2;
      v22 = *(_DWORD *)(v0 - 76);
      v14 = *(_DWORD *)(v0 - 72);
      do
      {
        v15 = *(_DWORD *)(v0 - 32);
        *(_DWORD *)(v0 - 32) = v15 + 1;
        v16 = ((unsigned __int16)(32 * *(_DWORD *)(v0 - 40)) ^ *(unsigned __int8 *)(v22 + v15 + 3)) & 0x7FFF;
        *(_DWORD *)(v0 - 40) = v16;
        v17 = (_WORD *)(v14 + 2 * v16 + 0x10000);
        *(_WORD *)(v14 + 2 * (((_WORD)v15 + 1) & 0x7FFF)) = *v17;
        *v17 = v15 + 1;
        v18 = *(_DWORD *)(v0 - 36) - 1;
        *(_DWORD *)(v0 - 36) = v18;
      }
      while ( v18 != 0 );
      v19 = v15 + 2;
      *(_DWORD *)(v0 - 32) = v19;
      v4 = 2;
      if ( v24 )
      {
        sub_430F50(0, v19 - *(_DWORD *)(v0 - 44));
        *(_DWORD *)(v0 - 44) = *(_DWORD *)(v0 - 32);
        v4 = 2;
        v24 = false;
      }
    }
    sub_42FBB8();
    v21 = v4;
  }
  if ( v24 )
    sub_420A98(0, *(unsigned __int8 *)(*(_DWORD *)(dword_486010 - 76) + v1 - 1));
  return sub_430F50(1, *(_DWORD *)(v0 - 32) - *(_DWORD *)(v0 - 44));
}

