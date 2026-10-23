// busybox.exe @ 0x42d640 size=471

int __userpurge sub_42D640@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, int a3, int a4)
{
  int v5; // eax
  int v6; // ecx
  int result; // eax
  _DWORD *v8; // ebp
  _DWORD *v9; // esi
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // [esp+4h] [ebp-34h]
  int v19; // [esp+14h] [ebp-24h]
  int v20; // [esp+18h] [ebp-20h]
  int v21; // [esp+18h] [ebp-20h]
  void *v22[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  void *Block; // [esp+24h] [ebp-14h]

  v5 = sub_45CCD4(a2, a2);
  if ( v5 == -1 )
    return 0;
  v8 = (_DWORD *)a1[17];
  v19 = 20 * v5;
  while ( 2 )
  {
    v9 = (_DWORD *)(a1[25] + v19);
    while ( 1 )
    {
      if ( sub_4541D4(v6, *v9) == 0 )
        goto LABEL_26;
      v11 = v9[3] + a2 - v9[2];
      if ( a2 == v11 )
        break;
      v17 = *(_DWORD **)(v8[3] + 4 * v10);
      if ( *(_DWORD *)(a1[21] + 4 * v11) != 0 )
      {
        if ( sub_4541D4(v6, v17) != 0 )
          goto LABEL_26;
        v21 = sub_454254();
        v16 = sub_4543C4(v15, v17);
        if ( v21 != 0 || v16 < 0 )
        {
          free(Block);
          result = v21;
          if ( v21 == 0 )
            return 12;
          return result;
        }
      }
      else
      {
        result = sub_454210();
        v21 = result;
        if ( result != 0 )
          return result;
      }
      v17 = (_DWORD *)(a1[21] + 4 * v11);
      *v17 = sub_453164(v22, v8);
      free(Block);
      if ( *(_DWORD *)(a1[21] + 4 * v11) == 0 )
      {
        result = v21;
        if ( v21 != 0 )
          return result;
      }
LABEL_26:
      v9 += 5;
      if ( *((_BYTE *)v9 - 4) == 0 )
        return 0;
    }
    if ( sub_4541D4(v6, **(_DWORD **)(v8[5] + 12 * v10 + 8)) != 0 )
      goto LABEL_26;
    v20 = sub_454210();
    v12 = sub_41BE54(v8, v22, a3, a4);
    v14 = sub_4544DC(v13, v17);
    free(Block);
    result = v20;
    if ( v20 != 0 )
      return result;
    if ( v12 != 0 )
      return v12;
    if ( v14 == 0 )
      continue;
    return v14;
  }
}

