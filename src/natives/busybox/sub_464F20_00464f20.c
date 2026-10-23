// busybox.exe @ 0x464f20 size=1091

int __cdecl sub_464F20(int a1, int a2)
{
  _DWORD *v2; // ebp
  const char *Str1; // edi
  int v4; // ebx
  char *v5; // eax
  char v6; // dl
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // eax
  _DWORD *v10; // eax
  char v11; // dl
  _DWORD *v12; // edx
  int *v13; // edi
  int v14; // ecx
  const char *v15; // esi
  _BYTE *v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // eax
  const char *v22; // edx
  int v23; // eax
  int v25; // [esp+30h] [ebp-20h] BYREF
  char *v26; // [esp+34h] [ebp-1Ch] BYREF
  int v27; // [esp+38h] [ebp-18h] BYREF
  _DWORD *v28; // [esp+3Ch] [ebp-14h] BYREF

  v25 = 0;
  v26 = "-";
  v27 = 0;
  v28 = nullptr;
  v2 = sub_43AC28();
  *v2 = 7;
  if ( sub_4365A0() != 0 )
    *v2 |= 0x20u;
  Str1 = *(const char **)(a2 + 4);
  if ( Str1 != nullptr )
  {
    v4 = strcmp(Str1, "--version");
    if ( v4 == 0 )
    {
      sub_46F108("tar (busybox) 1.33.0.git");
      return v4;
    }
    if ( *Str1 != 0 && *Str1 != 45 )
    {
      v5 = strchr(Str1, 102);
      if ( v5 != nullptr )
      {
        while ( 1 )
        {
          v6 = v5[1];
          if ( v6 == 0 )
            break;
          *v5++ = v6;
        }
        *v5 = 102;
      }
      *(_DWORD *)(a2 + 4) = sub_4708BC("-%s", *(const char **)(a2 + 4));
    }
  }
  v7 = sub_435D60(a2, (int)&unk_4788AF, (int)"list", &v25, &v26, v2 + 3, v2 + 4, v2 + 14, &v28, &v27, &v27);
  v8 = dword_473090;
  if ( v27 != 0 )
  {
    if ( v27 == 1 )
      v2[8] = sub_438614;
    else
      v2[8] = sub_438628;
  }
  if ( (v7 & 2) != 0 )
    v2[9] = sub_42149C;
  if ( (v7 & 0x10) != 0 )
    v2[9] = sub_4218CC;
  if ( (v7 & 0x100) != 0 )
    *v2 &= ~4u;
  if ( (v7 & 0x400000) != 0 )
    *v2 |= 0x40u;
  if ( (v7 & 0x20) != 0 )
    *v2 |= 0x10u;
  if ( (v7 & 0x800000) != 0 )
    *v2 |= 0x20u;
  if ( (v7 & 0x1000000) != 0 )
  {
    v9 = *v2 & 0xFFFFFFFB;
    LOBYTE(v9) = *(_BYTE *)v2 & 0x7B | 0x80;
    *v2 = v9;
  }
  if ( (v7 & 0x40000) != 0 )
    *v2 &= ~1u;
  v2[4] = sub_4145B4(v2[4]);
  v10 = v28;
  v11 = 0;
  while ( v10 != nullptr )
  {
    v12 = (_DWORD *)*v10;
    *v10 = v2[4];
    v2[4] = v10;
    v10 = v12;
    v11 = 1;
  }
  if ( v11 != 0 )
    v28 = nullptr;
  v13 = (int *)(a2 + 4 * v8);
  v2[3] = sub_4145B4(v2[3]);
  while ( 1 )
  {
    v15 = (const char *)*v13;
    if ( *v13 == 0 )
      break;
    v16 = sub_43D3D4((_BYTE *)*v13, 47);
    if ( *v13 < (unsigned int)v16 )
      *v16 = 0;
    sub_43E384(v2 + 3, *v13++);
  }
  v17 = v2[3];
  if ( v17 != 0 || v2[4] != 0 )
    v2[2] = sub_42FDB0;
  if ( (v7 & 0x200) != 0 )
  {
    if ( v17 == 0 )
      sub_418210("empty archive");
    v18 = 769;
    v19 = 1;
  }
  else
  {
    v18 = 0;
    v19 = 0;
  }
  if ( *v26 != 45 || v26[1] != 0 )
  {
    if ( (v18 | v7 & 0x11C800) != 0 || sub_43C630(v26, ".lzma") == nullptr )
    {
      v2[1] = sub_47154C(v14, v18);
      if ( (v7 & 0x20000) != 0 && v18 != 0 )
      {
        if ( sub_43C630(v26, "gz") != nullptr )
          BYTE1(v7) |= 0x40u;
        if ( sub_43C630(v26, "bz2") != nullptr )
          BYTE1(v7) |= 8u;
        if ( sub_43C630(v26, "xz") != nullptr )
          BYTE1(v7) |= 0x80u;
        if ( sub_43C630(v26, "lzma") != nullptr )
          v7 |= 0x100000u;
      }
    }
    else
    {
      v20 = sub_447B4C(v26);
      v2[1] = v20;
      if ( v20 < 0 )
        sub_418014((int)v26, "can't open '%s'", v26);
    }
  }
  else
  {
    v2[1] = v19;
    v2[10] = sub_45D1B8;
  }
  if ( v25 != 0 )
    sub_470B28();
  if ( (v7 & 0x200) != 0 )
  {
    if ( (v7 & 0x10000) != 0 )
      v15 = "compress";
    if ( (v7 & 0x4000) != 0 )
      v15 = "gzip";
    if ( (v7 & 0x800) != 0 )
      v15 = "bzip2";
    if ( (v7 & 0x100000) != 0 )
      v15 = "lzma";
    if ( (v7 & 0x8000) != 0 )
      v15 = "xz";
    v21 = (_DWORD *)sub_4728CC(v14);
    *v21 = v2[1];
    v21[1] = v27;
    v21[2] = v2[4];
    return sub_46FC94(v15);
  }
  else
  {
    if ( (v7 & 0x11C800) != 0 )
    {
      v22 = "uncompress";
      if ( (v7 & 0x4000) != 0 )
        v22 = "gunzip";
      if ( (v7 & 0x800) != 0 )
        v22 = "bunzip2";
      if ( (v7 & 0x100000) != 0 )
        v22 = "unlzma";
      if ( (v7 & 0x8000) != 0 )
        v22 = "unxz";
      sub_43156C(v2[1], (int)v22);
      v2[10] = sub_45D1B8;
    }
    byte_485FF8 = 1;
    while ( sub_433E78((int)v2) == 0 )
      byte_485FF8 = 0;
    while ( 1 )
    {
      v23 = v2[3];
      if ( v23 == 0 )
        break;
      if ( sub_4305B0((_DWORD *)v2[4], *(_DWORD *)(v23 + 4)) == nullptr
        && sub_4305B0((_DWORD *)v2[5], *(_DWORD *)(v2[3] + 4)) == nullptr )
      {
        sub_41784C("%s: not found in archive", *(const char **)(v2[3] + 4));
      }
      v2[3] = *(_DWORD *)v2[3];
    }
    return byte_485FF8;
  }
}

