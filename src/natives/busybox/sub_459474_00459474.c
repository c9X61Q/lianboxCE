// busybox.exe @ 0x459474 size=1384

char __usercall sub_459474@<al>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx
  char v3; // al
  int v4; // edi
  int *v5; // eax
  char *v6; // eax
  int v7; // ecx
  int v8; // eax
  const char *v9; // edx
  size_t v10; // ecx
  char *v11; // esi
  int *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  _DWORD *v22; // esi
  int *v23; // eax
  int *v24; // eax
  int *v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int *v32; // eax
  int v33; // eax
  _DWORD *v34; // eax
  int v35; // esi
  int i; // eax
  bool v37; // al
  int *v38; // eax
  int v39; // ecx
  int ErrorMessage; // [esp+0h] [ebp-9Ch]
  int v42; // [esp+8h] [ebp-94h]
  char *v43; // [esp+8h] [ebp-94h]
  char *v44; // [esp+8h] [ebp-94h]
  char *v45; // [esp+8h] [ebp-94h]
  char *v46; // [esp+8h] [ebp-94h]
  int v47; // [esp+10h] [ebp-8Ch]
  int v48; // [esp+18h] [ebp-84h]
  const char *v49; // [esp+1Ch] [ebp-80h]
  int v50; // [esp+1Ch] [ebp-80h]
  int v51; // [esp+1Ch] [ebp-80h]
  int v52; // [esp+20h] [ebp-7Ch]
  int v53; // [esp+24h] [ebp-78h]
  int v54; // [esp+28h] [ebp-74h] BYREF
  int FileHandle; // [esp+2Ch] [ebp-70h]
  _DWORD v56[27]; // [esp+30h] [ebp-6Ch] BYREF

  v52 = a1;
  if ( a1 != 0 )
  {
    ++*(_DWORD *)(dword_485FF0 + 56);
    v53 = 0;
    if ( a2 != 0 )
      v53 = *(_DWORD *)(dword_485FEC + 20);
    while ( 1 )
    {
      v2 = *(_DWORD *)(v52 + 8);
      v3 = *(_BYTE *)v52;
      if ( (unsigned __int8)(*(_BYTE *)v52 - 22) > 1u )
        break;
      v4 = *(_DWORD *)(v52 + 12);
      if ( v2 != v4 )
      {
        v48 = -1;
        goto LABEL_49;
      }
LABEL_92:
      v52 = *(_DWORD *)(v52 + 4);
      if ( v52 == 0 )
      {
        LOBYTE(a1) = sub_43B8DC();
        return a1;
      }
    }
    if ( (unsigned int)(v3 - 24) <= 1 )
    {
      if ( sub_44D09C(&v54) < 0 )
      {
        v5 = _errno();
        v6 = strerror(*v5);
        sub_415B40(v7, "can't create pipe: %s", v6);
      }
      v8 = *(_DWORD *)(v52 + 12);
      if ( *(_BYTE *)v52 == 25 )
      {
        sub_42DB08(v8, 0, 256);
        v9 = *(const char **)(dword_485FF4 + 4);
      }
      else
      {
        v9 = *(const char **)(v8 + 8);
      }
      v49 = v9;
      v10 = strlen(v9);
      if ( v10 > 0x2000 )
      {
        memset(v56, 0, 0x4Cu);
        v56[14] = v54;
        v56[15] = FileHandle;
        v56[19] = v49;
        sub_46174C(2);
      }
      else
      {
        sub_471D00(v10, v49);
      }
      sub_442EA4(FileHandle);
      v4 = v54;
LABEL_42:
      if ( v2 == v4 )
      {
        v18 = 0;
        if ( v53 != 0 )
        {
          while ( 1 )
          {
            v19 = *(_DWORD *)(v53 + 8 * v18 + 8);
            if ( v19 == -2 )
              break;
            if ( v4 == v19 )
              goto LABEL_92;
            ++v18;
          }
          v20 = v53 + 8 * v18;
          *(_DWORD *)(v20 + 8) = v4;
          *(_DWORD *)(v20 + 12) = -1;
        }
        goto LABEL_92;
      }
      v48 = v4;
      while ( 1 )
      {
LABEL_49:
        if ( v53 == 0 )
          goto LABEL_75;
        v21 = v4;
        if ( v4 < 9 )
          v21 = 9;
        v22 = off_473358;
        if ( v2 == 0 )
          break;
        while ( 1 )
        {
          if ( v22 == nullptr )
            goto LABEL_65;
          if ( v2 == v22[2] )
            break;
          v22 = (_DWORD *)*v22;
        }
        while ( 1 )
        {
          v47 = v21;
          v50 = sub_42EE40(v2, 0, v21 + 1);
          if ( v50 >= 0 )
          {
            sub_41CB70(v50);
            sub_442EA4(v2);
            goto LABEL_62;
          }
          v23 = _errno();
          v21 = v47;
          if ( *v23 != 16 )
          {
            v24 = _errno();
            v21 = v47;
            if ( *v24 != 4 )
              break;
          }
        }
        if ( *_errno() != 9 )
        {
          v25 = _errno();
          v45 = strerror(*v25);
          sub_415B40(v26, "%d: %s", v50, v45);
        }
        v50 = v2;
LABEL_62:
        v22[2] = v50;
        v27 = 1;
LABEL_76:
        if ( v4 == -1 )
        {
          if ( v27 == 0 )
            sub_442EA4(v2);
          goto LABEL_92;
        }
        v34 = off_473358;
        if ( v4 != 0 )
        {
          while ( v34 != nullptr )
          {
            v35 = v34[2];
            if ( v4 == v35 )
            {
LABEL_94:
              *_errno() = 9;
              v38 = _errno();
              v46 = strerror(*v38);
              sub_415B40(v39, "%d: %s", v35, v46);
            }
            v34 = (_DWORD *)*v34;
          }
        }
        if ( v53 != 0 )
        {
          for ( i = 0; i < *(_DWORD *)(v53 + 4) && *(_DWORD *)(v53 + 8 * i + 8) != -2; ++i )
          {
            v35 = *(_DWORD *)(v53 + 8 * i + 12);
            if ( v4 == v35 )
              goto LABEL_94;
          }
        }
        sub_42930C(v4, v2);
        if ( v48 >= 0 )
          sub_442EA4(v48);
        v37 = v2 == 1;
        v2 = 2;
        v4 = 1;
        v48 = -1;
        if ( !v37 || *(_BYTE *)v52 != 17 )
          goto LABEL_92;
      }
      v22 = nullptr;
LABEL_65:
      while ( 1 )
      {
        v28 = *(_DWORD *)(v53 + 8 * (_DWORD)v22 + 8);
        if ( v28 == -2 )
          break;
        if ( v2 == *(_DWORD *)(v53 + 8 * (_DWORD)v22 + 12) )
        {
          v29 = sub_429354(v2, v21);
          *(_DWORD *)(v53 + 8 * (_DWORD)v22 + 12) = v29;
          if ( v29 < 0 )
            goto LABEL_68;
          goto LABEL_75;
        }
        if ( v2 == v28 )
          goto LABEL_75;
        v22 = (_DWORD *)((char *)v22 + 1);
      }
      v30 = sub_429354(v2, v21);
      v31 = v30;
      if ( v30 < 0 )
      {
        v51 = v30;
        v32 = _errno();
        v31 = v51;
        if ( *v32 != 9 )
LABEL_68:
          sub_470D44(ErrorMessage);
      }
      v33 = v53 + 8 * (_DWORD)v22;
      *(_DWORD *)(v33 + 12) = v31;
      *(_DWORD *)(v33 + 8) = v2;
      if ( v2 == *(_DWORD *)(dword_485FEC + 24) )
        *(_DWORD *)(dword_485FEC + 24) = v31;
LABEL_75:
      v27 = 0;
      goto LABEL_76;
    }
    v11 = *(char **)(v52 + 20);
    if ( v3 == 21 )
    {
      v15 = sub_443508(v11, 265, 438);
      v4 = v15;
      if ( v15 < 0 )
        goto LABEL_41;
      sub_443400(v15, 0, 2);
      goto LABEL_42;
    }
    if ( v3 > 21 )
    {
LABEL_24:
      v4 = sub_443508(v11, 0, v42);
      if ( v4 < 0 )
      {
        v12 = _errno();
        v43 = sub_42A05C(*v12, "no such file");
        sub_415B40(v13, "can't open %s: %s", v11, v43);
      }
      goto LABEL_42;
    }
    if ( v3 == 20 )
    {
      v14 = sub_443508(v11, 258, 438);
    }
    else
    {
      if ( v3 > 17 )
      {
        if ( v3 != 18 )
          goto LABEL_24;
      }
      else
      {
        if ( v3 <= 15 )
          goto LABEL_24;
        if ( *(_BYTE *)(dword_485FF0 + 73) != 0 )
        {
          if ( sub_444C28(v11, (int)v56) >= 0 )
          {
            if ( (v56[4] & 0xF000) == 0x8000 )
              goto LABEL_35;
            v4 = sub_443508(v11, 1, 438);
            if ( v4 < 0 )
              goto LABEL_41;
            if ( sub_44305C(v4, (int)v56) == 0 && (v56[4] & 0xF000) == 0x8000 )
            {
              sub_442EA4(v4);
LABEL_35:
              *_errno() = 17;
LABEL_41:
              v16 = _errno();
              v44 = sub_42A05C(*v16, "nonexistent directory");
              sub_415B40(v17, "can't create %s: %s", v11, v44);
            }
            goto LABEL_42;
          }
          v14 = sub_443508(v11, 1281, 438);
          goto LABEL_37;
        }
      }
      v14 = sub_443508(v11, 769, 438);
    }
LABEL_37:
    v4 = v14;
    if ( v14 < 0 )
      goto LABEL_41;
    goto LABEL_42;
  }
  return a1;
}

