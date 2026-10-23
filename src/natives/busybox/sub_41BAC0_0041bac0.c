// busybox.exe @ 0x41bac0 size=913

int __userpurge sub_41BAC0@<eax>(int a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int v9; // esi
  void *v11; // edx
  size_t v12; // eax
  char *v13; // eax
  int result; // eax
  int v15; // esi
  _BYTE *v16; // edi
  int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  int i; // edi
  int v21; // eax
  int v22; // eax
  size_t v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  int v26; // ecx
  void *Block; // [esp+0h] [ebp-58h]
  size_t Size; // [esp+4h] [ebp-54h]
  int v30; // [esp+10h] [ebp-48h]
  int v31; // [esp+14h] [ebp-44h]
  int v32; // [esp+14h] [ebp-44h]
  _DWORD *v33; // [esp+18h] [ebp-40h]
  int v34; // [esp+1Ch] [ebp-3Ch]
  int v35; // [esp+20h] [ebp-38h]
  int v36; // [esp+24h] [ebp-34h]
  int v37; // [esp+2Ch] [ebp-2Ch]
  void *v38[3]; // [esp+30h] [ebp-28h] BYREF
  _BYTE v39[28]; // [esp+3Ch] [ebp-1Ch] BYREF

  v37 = 0;
  v30 = *(_DWORD *)(**(_DWORD **)(a1 + 68) + 8 * a3);
  v8 = *(_DWORD *)(a1 + 104) + a6;
  v9 = a2[1];
  if ( v8 >= v9 )
  {
    v11 = (void *)a2[2];
    v12 = v8 + v9 + 1;
    a2[1] = v12;
    if ( v11 != nullptr )
      v13 = (char *)realloc(v11, 4 * v12);
    else
      v13 = (char *)calloc(v12, 4u);
    if ( v13 == nullptr )
    {
      a2[1] = v9;
      return 12;
    }
    a2[2] = (int)v13;
    memset(&v13[4 * v9], 0, 4 * (a2[1] - v9));
  }
  v15 = *a2;
  if ( *a2 == 0 )
    v15 = a4;
  v35 = *(_DWORD *)(a1 + 84);
  v36 = *(_DWORD *)(a1 + 24);
  v16 = (_BYTE *)a2[2];
  *(_DWORD *)(a1 + 84) = v16;
  *(_DWORD *)(a1 + 24) = v15;
  v31 = sub_4564EC(*(_DWORD *)(a1 + 72), v15 - 1);
  if ( v15 == a4 )
  {
    result = sub_454210();
    if ( result != 0 )
      return result;
    v37 = sub_41BE54(a7);
    if ( v37 != 0 )
      goto LABEL_31;
    goto LABEL_13;
  }
  v17 = *(_DWORD *)&v16[4 * v15];
  if ( v17 != 0 && (*(_BYTE *)(v17 + 52) & 0x40) != 0 )
  {
    result = sub_454254();
    v37 = result;
    if ( result != 0 )
      return result;
  }
  else
  {
    memset(v38, 0, sizeof(v38));
    v16 = v39;
    if ( v17 == 0 )
      goto LABEL_26;
  }
  if ( (*(_BYTE *)(v17 + 52) & 0x40) != 0 )
  {
LABEL_13:
    if ( v38[1] == nullptr || (v18 = sub_42D640(v30, a7), Size = HIDWORD(v18), v37 = v18, (_DWORD)v18 == 0) )
    {
      v19 = sub_453294(v31);
      Block = v16;
      v17 = v19;
      if ( v19 != 0 || v37 == 0 )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 84) + 4 * v15) = v19;
        goto LABEL_26;
      }
    }
LABEL_31:
    free(v38[2]);
    return v37;
  }
LABEL_26:
  v32 = 0;
  while ( v15 < a6 && *(_DWORD *)(a1 + 104) >= v32 )
  {
    v38[1] = nullptr;
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 84) + 4 * (v15 + 1)) != 0 )
    {
      v37 = sub_4544DC(Block, Size);
      if ( v37 != 0 )
        goto LABEL_31;
    }
    if ( v17 != 0 )
    {
      v33 = *(_DWORD **)(a1 + 68);
      memset(v39, 0, 0xCu);
      for ( i = 0; ; ++i )
      {
        if ( i >= *(_DWORD *)(v17 + 20) )
        {
          v21 = 0;
          goto LABEL_41;
        }
        v34 = *(_DWORD *)(*(_DWORD *)(v17 + 24) + 4 * i);
        if ( sub_41C314(v15, *v33 + 8 * v34) != 0 && sub_4543C4(v34, *(_DWORD *)(v33[3] + 4 * v34)) < 0 )
          break;
      }
      v21 = 12;
LABEL_41:
      v37 = v21;
      if ( v21 != 0 )
        goto LABEL_31;
    }
    if ( v38[1] != nullptr )
    {
      v37 = sub_41BE54(a7);
      if ( v37 != 0 )
        goto LABEL_31;
      v22 = sub_42D640(v30, a7);
      Size = v23;
      v37 = v22;
      if ( v22 != 0 )
        goto LABEL_31;
    }
    v24 = sub_4564EC(*(_DWORD *)(a1 + 72), v15);
    v25 = sub_453294(v24);
    Block = (void *)HIDWORD(v25);
    v17 = v25;
    if ( (_DWORD)v25 != 0 )
    {
      v32 = 0;
    }
    else
    {
      if ( v37 != 0 )
        goto LABEL_31;
      ++v32;
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 84) + 4 * ++v15) = v25;
  }
  free(v38[2]);
  v26 = *(_DWORD *)(*(_DWORD *)(a1 + 84) + 4 * a6);
  if ( v26 != 0 )
    v26 += 4;
  *a2 = v15;
  *(_DWORD *)(a1 + 84) = v35;
  *(_DWORD *)(a1 + 24) = v36;
  result = 1;
  if ( v26 != 0 )
    return sub_4541D4(v26, a5) == 0;
  return result;
}

