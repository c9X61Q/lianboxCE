// busybox.exe @ 0x464740 size=2013

int __cdecl sub_464740(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  _BYTE *v4; // eax
  size_t v5; // ebx
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  char *v10; // ecx
  __int64 v11; // rax
  CHAR *v12; // edi
  signed int v13; // esi
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  CHAR *v17; // edx
  int v18; // ecx
  int v19; // edx
  BOOL v20; // edi
  size_t v21; // edx
  CHAR *v22; // ecx
  int v23; // esi
  char *lpFileName; // edi
  int v25; // ebx
  int v26; // edx
  const char *v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  char *Size; // [esp+8h] [ebp-12Ch]
  char *v34; // [esp+28h] [ebp-10Ch]
  signed int v35; // [esp+2Ch] [ebp-108h]
  int v36; // [esp+30h] [ebp-104h]
  unsigned int v37; // [esp+34h] [ebp-100h]
  CHAR *v38; // [esp+34h] [ebp-100h]
  unsigned int v39; // [esp+38h] [ebp-FCh]
  int v40; // [esp+3Ch] [ebp-F8h]
  int v41; // [esp+3Ch] [ebp-F8h]
  int v42; // [esp+40h] [ebp-F4h]
  unsigned int v43; // [esp+44h] [ebp-F0h]
  int v44; // [esp+44h] [ebp-F0h]
  int v45; // [esp+44h] [ebp-F0h]
  int v46; // [esp+48h] [ebp-ECh]
  unsigned int v47; // [esp+4Ch] [ebp-E8h]
  char v48; // [esp+50h] [ebp-E4h]
  char *v49; // [esp+54h] [ebp-E0h]
  CHAR *v50; // [esp+54h] [ebp-E0h]
  const char *v51; // [esp+54h] [ebp-E0h]
  _BYTE *v52[2]; // [esp+5Ch] [ebp-D8h] BYREF
  _DWORD v53[24]; // [esp+64h] [ebp-D0h] BYREF
  _DWORD v54[4]; // [esp+C4h] [ebp-70h] BYREF
  int v55; // [esp+D4h] [ebp-60h]
  __int64 v56; // [esp+ECh] [ebp-48h]
  int *v57; // [esp+124h] [ebp-10h]

  v57 = &a1;
  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE **)(a2 + 4);
  v5 = 10;
  if ( v4 != nullptr && ((*v4 - 43) & 0xFD) == 0 && (unsigned __int8)(v4[1] - 48) <= 9u )
  {
    v5 = sub_4296CC(v4, (int)&a1);
    v3 += 4;
    --v2;
  }
  Size = (char *)v52;
  v48 = sub_435D44(v3, (int)"^fc:n:qs:+vF");
  if ( (v48 & 2) != 0 )
    v5 = sub_4296CC(v52[0], v6);
  if ( (v48 & 4) != 0 )
    v5 = sub_4296CC(v52[1], v6);
  v39 = (v48 & 8) == 0 ? 1 : -1;
  if ( (v48 & 0x20) != 0 )
    v39 = 0;
  v7 = v2 - dword_473090;
  v46 = v3 + 4 * dword_473090;
  v36 = sub_470E78();
  if ( *(_DWORD *)v46 == 0 )
  {
    if ( sub_44305C(0, (int)v54) == 0 && (v55 & 0xF000) == 0x1000 )
      v48 &= ~1u;
    *(_DWORD *)v46 = "standard input";
  }
  v8 = 0;
  v47 = 0;
  do
  {
    v9 = sub_447A6C(*(char **)(v46 + 4 * v8));
    if ( v9 >= 0 || (v48 & 0x40) != 0 )
    {
      v49 = (char *)(4 * v47);
      *(_DWORD *)(v36 + 4 * v47++) = v9;
      v10 = v49;
      *(_DWORD *)&v49[v46] = *(_DWORD *)(v46 + 4 * v8);
    }
    else
    {
      BYTE1(MultiByteStr) = 1;
    }
    ++v8;
  }
  while ( v7 > v8 );
  if ( v47 == 0 )
    sub_418210("no files");
  v43 = 512;
  if ( (_BYTE)MultiByteStr == 0 && (v48 & 2) != 0 )
  {
    v43 = v5 + 512;
    if ( v5 >= 0xFFFFFE00 )
      v43 = 512;
  }
  v34 = "==> %s <==\n";
  v42 = 0;
  v50 = nullptr;
  while ( 2 )
  {
    v40 = *(_DWORD *)(v36 + 4 * v42);
    if ( v40 < 0 )
      goto LABEL_80;
    if ( v39 < v47 )
    {
      Size = *(char **)(v46 + 4 * v42);
      if ( sub_428FC4(1, (int)v34) < 0 )
LABEL_32:
        sub_418048();
      v34 = "\n==> %s <==\n";
    }
    if ( (_BYTE)MultiByteStr == 0 )
    {
      v11 = sub_443400(v40, 0, 2);
      v10 = (char *)((unsigned __int64)-v11 >> 32);
      if ( ((_DWORD)v11 != 0) + HIDWORD(v11) > 0 )
      {
        if ( (v48 & 2) != 0 )
        {
          if ( v5 != 0 )
          {
            sub_470E28(0);
            sub_416F48(v5);
          }
          goto LABEL_80;
        }
        sub_470E28(0);
      }
    }
    if ( v50 == nullptr )
      v50 = (CHAR *)sub_470E78();
    v12 = v50;
    v37 = 1;
    v35 = 0;
    v13 = 0;
LABEL_43:
    while ( 1 )
    {
      v14 = sub_432664(v43 - v13, v12);
      if ( v14 < 0 )
        break;
      if ( v14 == 0 )
        goto LABEL_78;
      if ( (_BYTE)MultiByteStr != 0 )
      {
        if ( v5 <= v37 )
        {
          v16 = v14;
          goto LABEL_58;
        }
        if ( (v48 & 2) != 0 )
        {
          v16 = v14 + v37 - v5;
          v37 += v14;
        }
        else
        {
          v17 = v12;
          v16 = v14;
          while ( 1 )
          {
            --v16;
            if ( *v17++ == 10 && v5 == ++v37 )
              break;
            if ( v16 == 0 )
              goto LABEL_43;
          }
        }
        if ( v16 > 0 )
LABEL_58:
          sub_471D00(v16, &v12[v14 - v16]);
      }
      else if ( v5 != 0 )
      {
        v18 = v48 & 2;
        if ( (v48 & 2) != 0 )
        {
          v13 += v14;
          if ( v13 > (int)v5 )
          {
            memmove(v50, &v50[v13 - v5], v5);
            v13 = v5;
          }
        }
        else
        {
          v19 = v14;
          do
          {
            if ( v12[--v19] == 10 )
              ++v18;
          }
          while ( v19 != 0 );
          v35 += v18;
          if ( v35 >= (int)v5 )
          {
            v20 = v12[v14 - 1] != 10;
            v21 = v20 + v35 - v5;
            v22 = v50;
            while ( v21 != 0 )
            {
              if ( *v22 == 10 )
                --v21;
              ++v22;
            }
            v13 += v14 - (v22 - v50);
            memmove(v50, v22, v13);
            v35 = v5 - v20;
          }
          else
          {
            v13 += v14;
          }
          if ( v13 + 512 > v43 )
          {
            v50 = (CHAR *)sub_471600(v18, v13 + 512);
            v43 = v13 + 512;
          }
        }
        v12 = &v50[v13];
      }
    }
    sub_418224("read error", v15);
    BYTE1(MultiByteStr) = 1;
LABEL_78:
    if ( (_BYTE)MultiByteStr == 0 )
      sub_471D00(v13, v50);
LABEL_80:
    if ( v47 != v42 + 1 )
    {
      ++v42;
      continue;
    }
    break;
  }
  v41 = *(_DWORD *)(v36 + 4 * v42);
  v38 = (CHAR *)sub_471600(v10, 512);
  if ( (v48 & 1) != 0 )
  {
    v51 = nullptr;
    while ( 2 )
    {
      sub_461010(1);
      v23 = 0;
LABEL_85:
      lpFileName = *(char **)(v46 + 4 * v23);
      v25 = *(_DWORD *)(v36 + 4 * v23);
      if ( (v48 & 0x40) != 0 )
      {
        if ( v25 < 0 )
          goto LABEL_93;
        if ( sub_44305C(v25, (int)v54) < 0
          || sub_444C28(lpFileName, (int)v53) < 0
          || v54[0] != v53[0]
          || v54[3] != v53[3]
          || v54[2] != v53[2] )
        {
          sub_442EA4(v25);
LABEL_93:
          v44 = sub_443508(lpFileName, 0, (int)Size);
          if ( v44 < 0 )
          {
            if ( v25 >= 0 )
              sub_417FE4(v26, "%s has become inaccessible", lpFileName);
          }
          else
          {
            v27 = "appeared";
            if ( v25 >= 0 )
              v27 = "been replaced";
            sub_41783C("%s has %s; following end of new file", lpFileName, v27);
          }
          v25 = v44;
          *(_DWORD *)(v36 + 4 * v23) = v44;
        }
      }
      if ( v25 >= 0 )
      {
        if ( v39 < v47 )
          v51 = "\n==> %s <==\n";
        while ( 1 )
        {
          if ( sub_44305C(v25, (int)v54) == 0 && v56 > 0 )
          {
            v28 = sub_443400(v25, 0, 1);
            if ( v56 < v28 )
              sub_470E28(0);
          }
          v29 = sub_432664(512, v38);
          v31 = v29;
          if ( v29 < 0 )
            break;
          if ( v29 == 0 )
            goto LABEL_115;
          if ( v51 != nullptr && v41 != v25 )
          {
            v45 = v29;
            Size = lpFileName;
            if ( sub_428FC4(1, (int)v51) < 0 )
              goto LABEL_32;
            v41 = v25;
            v51 = nullptr;
            v31 = v45;
          }
          sub_471D00(v31, v38);
        }
        sub_418224("read error", v30);
        BYTE1(MultiByteStr) = 1;
      }
LABEL_115:
      if ( v42 == v23 )
        continue;
      break;
    }
    ++v23;
    goto LABEL_85;
  }
  return BYTE1(MultiByteStr);
}

