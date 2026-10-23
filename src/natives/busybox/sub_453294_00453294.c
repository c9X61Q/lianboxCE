// busybox.exe @ 0x453294 size=489

char *__userpurge sub_453294@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // edx
  int i; // eax
  int *v7; // edi
  int j; // ebp
  char *v9; // ebx
  char *v10; // eax
  char *v11; // ebp
  int v12; // ecx
  int k; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // eax
  int v19; // [esp+8h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-20h]
  char v21; // [esp+Ch] [ebp-20h]
  int v22; // [esp+Ch] [ebp-20h]
  int v24; // [esp+14h] [ebp-18h]

  v4 = *(_DWORD *)(a3 + 4);
  if ( v4 != 0 )
  {
    v19 = v4 + a4;
    for ( i = 0; v4 > i; ++i )
      v19 += *(_DWORD *)(*(_DWORD *)(a3 + 8) + 4 * i);
    v7 = (int *)(a2[8] + 12 * (a2[17] & v19));
    v20 = *v7;
    for ( j = 0; v20 > j; ++j )
    {
      v9 = *(char **)(v7[2] + 4 * j);
      if ( *(_DWORD *)v9 == v19 && (v9[52] & 0xF) == a4 && sub_45419C() != 0 )
        return v9;
    }
    v10 = (char *)calloc(0x38u, 1u);
    v9 = v10;
    if ( v10 != nullptr )
    {
      v11 = v10 + 4;
      if ( sub_454254() != 0 )
      {
        free(v9);
      }
      else
      {
        v9[52] = a4 & 0xF | v9[52] & 0xF0;
        *((_DWORD *)v9 + 10) = v11;
        v12 = 0;
        for ( k = 0; k < *(_DWORD *)(a3 + 4); ++k )
        {
          v14 = *a2 + 8 * *(_DWORD *)(*(_DWORD *)(a3 + 8) + 4 * k);
          v24 = *(unsigned __int8 *)(v14 + 4);
          v15 = *(_DWORD *)(v14 + 4) >> 8;
          v21 = v15;
          v16 = v15 & 0x3FF;
          if ( v24 != 1 )
          {
            if ( v24 == 2 )
            {
              v9[52] |= 0x10u;
            }
            else if ( v24 == 4 )
            {
              v9[52] |= 0x40u;
            }
          }
          if ( v16 != 0 )
          {
            if ( v11 == *((char **)v9 + 10) )
            {
              v17 = malloc(0xCu);
              *((_DWORD *)v9 + 10) = v17;
              if ( v17 == nullptr )
                goto LABEL_38;
              if ( sub_454254() != 0 )
                goto LABEL_39;
              v9[52] |= 0x80u;
              v12 = 0;
            }
            if ( (v21 & 1) != 0 && (a4 & 1) == 0
              || (v21 & 2) != 0 && (a4 & 1) != 0
              || (v21 & 0x10) != 0 && (a4 & 2) == 0
              || (v21 & 0x40) != 0 && (a4 & 4) == 0 )
            {
              v22 = v12;
              sub_4545FC();
              v12 = v22 + 1;
            }
          }
        }
        if ( sub_45A0D4(v19, v9) == 0 )
          return v9;
LABEL_38:
        sub_431DD0((void **)v9);
      }
    }
LABEL_39:
    *a1 = 12;
  }
  else
  {
    *a1 = 0;
  }
  return nullptr;
}

