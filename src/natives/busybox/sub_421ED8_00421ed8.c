// busybox.exe @ 0x421ed8 size=2094

int __cdecl sub_421ED8(char a1, int a2)
{
  int *v2; // esi
  int v3; // edx
  char *v4; // eax
  int v5; // ecx
  char *v6; // ebx
  int v7; // eax
  int v8; // ecx
  const char *v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  char *v12; // ecx
  int v13; // eax
  int v14; // eax
  char *v15; // ebx
  int v16; // eax
  __int64 v17; // kr00_8
  int v18; // edx
  int v19; // esi
  int v20; // ecx
  int v21; // edi
  unsigned int v22; // esi
  unsigned int v23; // edi
  int v24; // ebx
  int v25; // ebx
  int v26; // edx
  int v27; // eax
  const char *v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // ebx
  int v32; // eax
  int v33; // edx
  __int16 v34; // dx
  int i; // eax
  char v36; // bl
  __int64 v37; // kr10_8
  FILE *v38; // eax
  char *Str; // [esp+0h] [ebp-F0h]
  char *Stra; // [esp+0h] [ebp-F0h]
  CHAR *v42; // [esp+34h] [ebp-BCh]
  int v43; // [esp+38h] [ebp-B8h]
  unsigned int v44; // [esp+3Ch] [ebp-B4h]
  int v45; // [esp+40h] [ebp-B0h]
  CHAR *v46; // [esp+40h] [ebp-B0h]
  __int64 v47; // [esp+40h] [ebp-B0h]
  int v48; // [esp+48h] [ebp-A8h]
  __int64 v49; // [esp+48h] [ebp-A8h]
  int v50; // [esp+50h] [ebp-A0h]
  __int64 v51; // [esp+50h] [ebp-A0h]
  _QWORD v52[5]; // [esp+58h] [ebp-98h] BYREF
  int v53; // [esp+90h] [ebp-60h]
  __int64 v54; // [esp+A8h] [ebp-48h]
  char *v55; // [esp+E0h] [ebp-10h]

  v55 = &a1;
  memset(v52, 0, sizeof(v52));
  memset(&MultiByteStr, 0, 0x28u);
  v2 = (int *)(a2 + 4);
  v50 = 512;
  v48 = 512;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == 0 )
      break;
    if ( *(_BYTE *)v3 != 45 || *(_BYTE *)(v3 + 1) != 45 || *(_BYTE *)(v3 + 2) != 0 )
    {
      v45 = *v2;
      v4 = strchr((const char *)v3, 61);
      v6 = v4;
      if ( v4 == nullptr || (*v4 = 0, (v7 = sub_439918(v5, v45)) < 0) )
        sub_418164();
      v9 = v6 + 1;
      switch ( v7 )
      {
        case 7:
          v10 = sub_470948("c");
          Str = (char *)v9;
          v48 = v10;
          break;
        case 8:
          LODWORD(v11) = sub_470948("c");
          Str = v12;
LABEL_21:
          v50 = v11;
          break;
        case 9:
          v13 = sub_448C98("conv", "notrunc");
LABEL_36:
          lpHandles = (HANDLE *)(v13 | (unsigned int)lpHandles);
          break;
        case 10:
          v13 = 32 * sub_448C98("iflag", "skip_bytes");
          goto LABEL_36;
        case 11:
          v13 = sub_448C98("oflag", "seek_bytes") << 7;
          goto LABEL_36;
        case 0:
          v11 = sub_470948("c");
          Str = (char *)HIDWORD(v11);
          v48 = v11;
          goto LABEL_21;
        case 1:
          lpHandles = (HANDLE *)((unsigned int)lpHandles | 0x400);
          v52[1] = sub_4709D8();
          break;
        case 2:
          v52[2] = sub_4709D8();
          break;
        case 3:
          v52[3] = sub_4709D8();
          break;
        case 4:
          LODWORD(v52[4]) = v9;
          break;
        case 5:
          HIDWORD(v52[4]) = v9;
          break;
        case 6:
          v14 = sub_439918(v8, v9);
          if ( v14 < 0 )
            sub_41784C("invalid argument '%s' to '%s'", v9, "status");
          v13 = 2048 << v14;
          goto LABEL_36;
        default:
          break;
      }
    }
    ++v2;
  }
  v46 = (CHAR *)sub_470E78(Str);
  v43 = (int)v46;
  if ( v48 != v50 )
  {
    lpHandles = (HANDLE *)((unsigned int)lpHandles | 0x200);
    v43 = sub_470E78(Stra);
  }
  v15 = (char *)v52[4];
  if ( LODWORD(v52[4]) != 0 )
  {
    sub_4450C8(v52[4], 0);
    sub_471530();
    v16 = sub_4336AC(v15);
    sub_46BC04(v16, 0);
  }
  else
  {
    LODWORD(v52[4]) = "standard input";
  }
  if ( HIDWORD(v52[4]) != 0 )
  {
    v17 = v52[2];
    v18 = 257;
    if ( v52[2] == 0 )
      v18 = ((unsigned __int8)lpHandles & 1) == 0 ? 769 : 257;
    if ( ((unsigned __int16)lpHandles & 0x100) != 0 )
      v18 |= 8u;
    sub_47154C(lpHandles, v18);
    sub_471530();
    v19 = 1;
    if ( (char)lpHandles >= 0 )
      v19 = v50;
    v20 = v19 * HIDWORD(v17);
    v21 = ((unsigned int)v17 * (unsigned __int64)(unsigned int)v19) >> 32;
    v22 = v17 * v19;
    v23 = v20 + v21;
    v24 = sub_44305C(1);
    if ( v24 == 0 && (BYTE1(lpHandles) & 1) == 0 && v54 < __SPAIR64__(v23, v22) )
      sub_441D84(1);
    if ( v17 != 0
      && ((unsigned __int8)lpHandles & 1) == 0
      && sub_404860(1, (LARGE_INTEGER)__PAIR64__(v23, v22)) < 0
      && (v24 < 0 || (((v53 & 0xF000) - 0x4000) & 0xB000) == 0) )
    {
      goto LABEL_116;
    }
  }
  else
  {
    HIDWORD(v52[4]) = "standard output";
  }
  if ( v52[3] != 0 )
  {
    v25 = 1;
    if ( ((unsigned __int8)lpHandles & 0x20) == 0 )
      v25 = v48;
    sub_443400(0);
    if ( v26 < 0 )
    {
      while ( 1 )
      {
        v27 = ((unsigned __int8)lpHandles & 0x40) != 0 ? sub_432664(v25, v46) : sub_45C560(v25, v46);
        if ( v27 < 0 )
          break;
        if ( v27 != 0 && --v52[3] != 0 )
          continue;
        goto LABEL_62;
      }
LABEL_71:
      v28 = (const char *)v52[4];
LABEL_117:
      sub_41823C(v28);
    }
  }
LABEL_62:
  if ( v52[2] != 0 )
  {
    sub_443400(1);
    if ( v29 < 0 )
      goto LABEL_116;
  }
  while ( ((unsigned __int16)lpHandles & 0x400) == 0 || *(_QWORD *)&qword_485BF0 + *(_QWORD *)&qword_485BF8 != v52[1] )
  {
    v32 = ((unsigned __int8)lpHandles & 0x40) != 0 ? sub_432664(v48, v46) : sub_45C560(v48, v46);
    v31 = v32;
    if ( v32 == 0 )
      break;
    if ( v32 < 0 )
    {
      if ( ((unsigned __int8)lpHandles & 4) == 0 )
        goto LABEL_71;
      sub_418224((const char *)v52[4], v33);
      sub_470E28(1);
      v31 = 0;
    }
    v34 = (__int16)lpHandles;
    if ( ((unsigned __int8)lpHandles & 0x10) != 0 )
    {
      if ( (v52[0] & 0x100000000LL) != 0 )
        sub_41784C("can't swab %lu byte buffer", HIDWORD(v52[0]));
      HIDWORD(v52[0]) = v31;
      for ( i = 0; v31 >> 1 != i; ++i )
        *(_WORD *)&v46[2 * i] = __ROL2__(*(_WORD *)&v46[2 * i], 8);
    }
    if ( v48 == v31 )
    {
      ++*(_QWORD *)&qword_485BF0;
    }
    else
    {
      ++*(_QWORD *)&qword_485BF8;
      if ( (v34 & 2) != 0 )
      {
        memset(&v46[v31], 0, v48 - v31);
        v31 = v48;
      }
    }
    if ( (v34 & 0x200) != 0 )
    {
      v42 = v46;
      while ( v31 != 0 )
      {
        v30 = v52[0];
        v44 = v31;
        if ( v31 > (unsigned int)(v50 - LODWORD(v52[0])) )
          v44 = v50 - LODWORD(v52[0]);
        qmemcpy((void *)(LODWORD(v52[0]) + v43), v42, v44);
        LODWORD(v52[0]) = v44 + v30;
        if ( v44 + v30 == v50 )
        {
          if ( (unsigned __int8)sub_470114(HIDWORD(v52[4])) != 0 )
            goto LABEL_118;
          LODWORD(v52[0]) = 0;
        }
        v31 -= v44;
        v42 += v44;
      }
    }
    else if ( (unsigned __int8)sub_470114(HIDWORD(v52[4])) != 0 )
    {
      goto LABEL_118;
    }
  }
  if ( ((unsigned __int8)lpHandles & 8) != 0 && (int)sub_431FE8(1) < 0 )
  {
LABEL_116:
    v28 = (const char *)HIDWORD(v52[4]);
    goto LABEL_117;
  }
  if ( LODWORD(v52[0]) != 0 && (unsigned __int8)sub_470114(HIDWORD(v52[4])) != 0 )
  {
LABEL_118:
    v36 = 1;
  }
  else
  {
    if ( sub_442EA4(0) < 0 )
      goto LABEL_71;
    v36 = 0;
    if ( sub_442EA4(1) < 0 )
      goto LABEL_116;
  }
  if ( (BYTE1(lpHandles) & 8) == 0 )
  {
    v37 = *(_QWORD *)&NumOfElements;
    v51 = *(_QWORD *)&MultiByteStr;
    v49 = *(_QWORD *)&qword_485BF8;
    v47 = *(_QWORD *)&qword_485BF0;
    v38 = off_4730E8(2);
    sub_46EEFC(v38, "%llu+%llu records in\n%llu+%llu records out\n", v47, v49, v51, v37);
  }
  return v36;
}

