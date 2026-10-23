// busybox.exe @ 0x456230 size=700

int __usercall sub_456230@<eax>(
        int a1@<eax>,
        int a2@<edx>,
        signed int a3@<ecx>,
        int a4,
        int a5,
        int a6,
        size_t *a7,
        int a8)
{
  int v8; // ebp
  size_t *v9; // ebx
  char v11; // dl
  _DWORD *v12; // edi
  int result; // eax
  int v14; // eax
  size_t v15; // ebp
  void *v16; // eax
  void *v17; // eax
  void *v18; // edx
  void *v19; // eax
  void *v20; // eax
  size_t v21; // edx
  void *v22; // eax
  void *v23; // eax
  signed int i; // eax
  unsigned int v25; // eax
  char v26; // dl
  signed int v27; // [esp+18h] [ebp-20h]
  signed int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+18h] [ebp-20h]
  unsigned __int8 Block; // [esp+1Ch] [ebp-1Ch]
  void *Blocka; // [esp+1Ch] [ebp-1Ch]
  void *Blockb; // [esp+1Ch] [ebp-1Ch]
  int v34; // [esp+20h] [ebp-18h]
  size_t v35; // [esp+24h] [ebp-14h]
  size_t v36; // [esp+24h] [ebp-14h]

  v8 = a5;
  v9 = a7;
  if ( a4 >= 0 && a4 <= a3 )
  {
    if ( a5 + a4 <= a3 )
    {
      if ( a5 + a4 < 0 )
        v8 = -a4;
    }
    else
    {
      v8 = a3 - a4;
    }
    Block = *(_BYTE *)(a1 + 28);
    if ( v8 > 0 && *(_DWORD *)(a1 + 16) != 0 && (*(_BYTE *)(a1 + 28) & 8) == 0 )
    {
      v27 = a3;
      sub_453480(a1);
      a3 = v27;
    }
    if ( a7 != nullptr )
    {
      v11 = *(_BYTE *)(a1 + 28);
      if ( (v11 & 0x10) == 0 )
      {
        if ( (v11 & 6) != 4 || *(_DWORD *)(a1 + 24) + 1 <= *a7 )
        {
          v28 = *(_DWORD *)(a1 + 24) + 1;
          goto LABEL_19;
        }
        v28 = *a7;
        if ( (int)*a7 > 0 )
          goto LABEL_19;
      }
    }
    v28 = 1;
    v9 = nullptr;
LABEL_19:
    v35 = a3;
    v12 = malloc(8 * v28);
    result = -2;
    if ( v12 == nullptr )
      return result;
    v34 = sub_454660(a1, a2, v35, a4, v8, a6, v28, v12, (Block >> 5) & 3);
    v14 = -1;
    if ( v34 != 0 )
      goto LABEL_53;
    if ( v9 == nullptr )
      goto LABEL_22;
    v15 = v28 + 1;
    Blocka = (void *)((*(_BYTE *)(a1 + 28) >> 1) & 3);
    if ( ((*(_BYTE *)(a1 + 28) >> 1) & 3) != 0 )
    {
      if ( Blocka == (void *)1 )
      {
        if ( *v9 < v15 )
        {
          v19 = (void *)v9[1];
          if ( v19 != nullptr )
            v20 = realloc(v19, 4 * v15);
          else
            v20 = calloc(v28 + 1, 4u);
          v21 = (size_t)v20;
          if ( v20 == nullptr )
            goto LABEL_50;
          v22 = (void *)v9[2];
          v36 = v21;
          if ( v22 != nullptr )
            v23 = realloc(v22, 4 * v15);
          else
            v23 = calloc(v15, 4u);
          v18 = (void *)v36;
          if ( v23 == nullptr )
            goto LABEL_39;
          v9[1] = v36;
          v9[2] = (size_t)v23;
          *v9 = v15;
        }
      }
      else
      {
        LOBYTE(Blocka) = 2;
      }
    }
    else
    {
      v16 = malloc(4 * v15);
      v9[1] = (size_t)v16;
      Blockb = v16;
      if ( v16 == nullptr )
        goto LABEL_50;
      v17 = malloc(4 * v15);
      v9[2] = (size_t)v17;
      if ( v17 == nullptr )
      {
        v18 = Blockb;
LABEL_39:
        free(v18);
        goto LABEL_50;
      }
      *v9 = v15;
      LOBYTE(Blocka) = 1;
    }
    for ( i = 0; v28 > i; ++i )
    {
      *(_DWORD *)(v9[1] + 4 * i) = v12[2 * i];
      *(_DWORD *)(v9[2] + 4 * i) = v12[2 * i + 1];
    }
    v25 = v28;
    if ( v28 < 0 )
      v25 = 0;
    while ( v25 < *v9 )
    {
      *(_DWORD *)(v9[2] + 4 * v25) = -1;
      *(_DWORD *)(v9[1] + 4 * v25++) = -1;
    }
    LOBYTE(v34) = (_BYTE)Blocka;
LABEL_50:
    v26 = (2 * (v34 & 3)) | *(_BYTE *)(a1 + 28) & 0xF9;
    *(_BYTE *)(a1 + 28) = v26;
    v14 = -2;
    if ( (v26 & 6) == 0 )
    {
LABEL_53:
      v29 = v14;
      free(v12);
      return v29;
    }
LABEL_22:
    if ( a8 != 0 )
      v14 = v12[1] - a4;
    else
      v14 = *v12;
    goto LABEL_53;
  }
  return -1;
}

