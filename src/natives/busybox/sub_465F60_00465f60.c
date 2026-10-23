// busybox.exe @ 0x465f60 size=2167

void __usercall sub_465F60(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  _BYTE *v4; // eax
  char *v5; // ebp
  __int16 v6; // ax
  __int16 v7; // ax
  char *v8; // edi
  char *v9; // ebp
  int v10; // eax
  int v11; // ecx
  unsigned __int8 *v12; // esi
  int v13; // edi
  unsigned __int8 v14; // al
  unsigned __int8 *v15; // edx
  unsigned __int8 **v16; // eax
  const char *v17; // edx
  __int16 v18; // si
  int v19; // edx
  int v20; // eax
  unsigned __int8 *v21; // esi
  int v22; // edi
  int v23; // ebp
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // ecx
  unsigned __int8 *v30; // eax
  unsigned __int8 *v31; // ecx
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // ecx
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // ecx
  unsigned __int8 *v36; // eax
  unsigned __int8 *v37; // ecx
  unsigned __int8 *v38; // eax
  int v39; // ecx
  void *v40; // esi
  unsigned __int8 *v41; // ecx
  const char *v42; // eax
  unsigned __int8 *v43; // eax
  int v44; // ecx
  _BYTE *v45; // eax
  int v46; // ecx
  unsigned __int8 *v47; // esi
  int *v48; // edi
  int v49; // eax
  int v50; // ebp
  unsigned __int8 *v51; // ecx
  unsigned __int8 *v52; // eax
  int *v53; // esi
  int v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // esi
  int v58; // eax
  int v59; // edi
  u_long v60; // eax
  void *v61; // ecx
  _BYTE *v62; // eax
  _BYTE *v63; // esi
  int v64; // eax
  __int16 v65; // ax
  void *v66; // edx
  __int16 v67; // dx
  int v68; // edi
  int *v69; // ecx
  __int16 v70; // ax
  int v71; // edx
  int v72; // edx
  unsigned int v73; // ecx
  int v74; // edx
  int v75; // ecx
  _DWORD *v76; // esi
  unsigned int v77; // eax
  int v78; // eax
  void *v79; // edx
  _DWORD *v80; // esi
  void *v81; // edx
  void *v82; // edx
  void *v83; // edx
  void *v84; // edx
  void *v85; // edx
  void *v86; // edx
  void *v87; // edx
  void *Buf1; // [esp+0h] [ebp-D4h]
  void *Buf2; // [esp+4h] [ebp-D0h]
  unsigned int v90; // [esp+10h] [ebp-C4h]
  int v91; // [esp+10h] [ebp-C4h]
  unsigned int v92; // [esp+10h] [ebp-C4h]
  unsigned int v93; // [esp+10h] [ebp-C4h]
  int v94; // [esp+10h] [ebp-C4h]
  char v95; // [esp+10h] [ebp-C4h]
  int v96; // [esp+10h] [ebp-C4h]
  int v97; // [esp+14h] [ebp-C0h]
  const void *v99; // [esp+20h] [ebp-B4h]
  _BYTE v100[16]; // [esp+24h] [ebp-B0h] BYREF
  _BYTE v101[32]; // [esp+34h] [ebp-A0h] BYREF
  int v102[12]; // [esp+54h] [ebp-80h] BYREF
  int v103[20]; // [esp+84h] [ebp-50h] BYREF

  v90 = 0;
  v97 = 8;
  if ( a2 != nullptr )
  {
    v4 = sub_4041C0(a2, 0x7Au);
    v90 = (unsigned int)v4;
    if ( v4 != nullptr )
      v97 = (int)(v4 + 17);
  }
  v5 = (char *)sub_465F44(a1, v97 + 61, a3);
  *v5 = 1;
  v5[1] = (unsigned int)(v97 + 57) >> 16;
  HIBYTE(v6) = v97 + 57;
  LOBYTE(v6) = (unsigned __int16)(v97 + 57) >> 8;
  *((_WORD *)v5 + 1) = v6;
  *((_WORD *)v5 + 2) = 771;
  v99 = v5 + 6;
  sub_465F08(v5 + 6, 32);
  qmemcpy(v5 + 39, unk_475B22, 20);
  LOBYTE(v7) = BYTE1(v97);
  HIBYTE(v7) = v97;
  *(_WORD *)(v5 + 59) = v7;
  v8 = v5 + 61;
  if ( v90 != 0 )
  {
    v5[64] = v90 + 5;
    v5[66] = v90 + 3;
    v5[69] = v90;
    v9 = v5 + 70;
    qmemcpy(v9, a2, v90);
    v8 = &v9[v90];
  }
  *(_DWORD *)v8 = 67111424;
  *((_DWORD *)v8 + 1) = 486539776;
  v10 = sub_4728CC(0);
  *(_DWORD *)(a1 + 56) = v10;
  qmemcpy((void *)(v10 + 112), v99, 0x20u);
  sub_45F0AC(v10);
  ((void (*)(void))sub_471D28)();
  v11 = ((int (*)(void))sub_46690C)();
  v12 = *(unsigned __int8 **)(a1 + 52);
  if ( v12[5] != 2 || v12[6] != 0 || v12[7] != 0 || v12[9] != 3 || v12[10] != 3 )
    goto LABEL_15;
  v13 = v12[8];
  v14 = v12[43];
  v15 = v12 + 76;
  if ( v14 != 32 )
  {
    if ( v14 != 0 )
    {
LABEL_15:
      v16 = (unsigned __int8 **)(a1 + 52);
      v17 = "'server hello'";
      goto LABEL_76;
    }
    v15 = v12 + 44;
    v13 += 32;
  }
  if ( v13 <= 69 )
    goto LABEL_15;
  qmemcpy((void *)(*(_DWORD *)(a1 + 56) + 144), v12 + 11, 0x20u);
  v18 = v15[1];
  *(_WORD *)(a1 + 16) = v18 + (*v15 << 8);
  *(_DWORD *)(a1 + 24) = 32;
  *(_DWORD *)(a1 + 20) = 32;
  if ( *v15 == 0xC0 )
  {
    v19 = *(_DWORD *)a1;
    *(_DWORD *)a1 |= 1u;
    if ( (v18 & 1) != 0 )
      *(_DWORD *)(a1 + 24) = 16;
    if ( (unsigned __int8)(v18 - 43) <= 5u )
    {
      *(_DWORD *)a1 = v19 | 0x11;
LABEL_25:
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 28) = 4;
    }
  }
  else if ( (_BYTE)v18 == 0x9C || (_BYTE)v18 == 60 )
  {
    *(_DWORD *)(a1 + 24) = 16;
    if ( (_BYTE)v18 == 0x9C )
    {
      *(_DWORD *)a1 |= 0x10u;
      goto LABEL_25;
    }
  }
  v20 = ((int (*)(void))sub_46690C)();
  v11 = v20;
  v21 = *(unsigned __int8 **)(a1 + 52);
  if ( v21[5] != 11 )
  {
    v16 = (unsigned __int8 **)(a1 + 52);
    v17 = "certificate";
    goto LABEL_76;
  }
  v91 = v20;
  v22 = sub_432F4C(v21 + 6);
  if ( v22 >= v91 - 3 )
    sub_41784C("tls error at line %d cipher:%04x", 1821, *(unsigned __int16 *)(a1 + 16));
  v23 = sub_432F4C(v21 + 9);
  if ( v23 >= v22 - 2 )
    sub_41784C("tls error at line %d cipher:%04x", 1824, *(unsigned __int16 *)(a1 + 16));
  v24 = sub_432F4C(v21 + 12);
  if ( v24 >= v23 - 2 )
    sub_41784C("tls error at line %d cipher:%04x", 1827, *(unsigned __int16 *)(a1 + 16));
  if ( v24 != 0 )
  {
    v102[0] = (int)&v21[v24 + 15];
    v26 = sub_429960((int)(v21 + 15), v102, v25);
    v28 = (unsigned __int8 *)sub_429960(v26, v102, v27);
    if ( *v28 == 0xA0 )
      v28 = sub_460DDC(v28, v102[0], v29);
    v30 = sub_460DDC(v28, v102[0], v29);
    v32 = sub_460DDC(v30, v102[0], v31);
    v34 = sub_460DDC(v32, v102[0], v33);
    v36 = sub_460DDC(v34, v102[0], v35);
    v38 = sub_460DDC(v36, v102[0], v37);
    v40 = (void *)sub_429960((int)v38, v102, v39);
    if ( memcmp(v40, &unk_47D36C, 0xDu) == 0 )
    {
      *(_DWORD *)a1 |= 2u;
    }
    else if ( memcmp(v40, &unk_47D360, 0xBu) != 0 )
    {
      v42 = "not RSA or ECDSA cert";
      goto LABEL_54;
    }
    if ( (*(_BYTE *)a1 & 2) != 0 )
    {
      v43 = sub_460DDC((unsigned __int8 *)v40, v102[0], v41);
      v45 = (_BYTE *)sub_429960((int)v43, v102, v44);
      if ( v102[0] - (int)v45 <= 13 || *v45 != 0 )
        sub_470D44(Buf1);
      v47 = (unsigned __int8 *)sub_429960((int)(v45 + 1), v102, v46);
      v48 = (int *)(*(_DWORD *)(a1 + 56) + 256);
      v49 = sub_433658((unsigned __int8 **)v103, v47, v102[0]);
      v50 = v103[0];
      v92 = v49;
      sub_451850();
      sub_452350(v48, v50, v92);
      v52 = sub_460DDC(v47, v102[0], v51);
      v53 = (int *)(*(_DWORD *)(a1 + 56) + 224);
      v54 = sub_433658((unsigned __int8 **)v103, v52, v102[0]);
      v55 = v103[0];
      v93 = v54;
      sub_451850();
      sub_452350(v53, v55, v93);
      *(_DWORD *)(*(_DWORD *)(a1 + 56) + 352) = sub_4526AC((int *)(*(_DWORD *)(a1 + 56) + 256));
    }
  }
  v56 = ((int (*)(void))sub_46690C)();
  v11 = v56;
  v57 = *(_DWORD *)(a1 + 52);
  if ( *(_BYTE *)(v57 + 5) == 12 )
  {
    v94 = v56;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v58 = sub_432F4C((unsigned __int8 *)(v57 + 6));
      if ( v58 >= v94 - 3 )
        sub_41784C("tls error at line %d cipher:%04x", 1881, *(unsigned __int16 *)(a1 + 16));
      if ( v58 <= 35 )
        sub_41784C("tls error at line %d cipher:%04x", 1883, *(unsigned __int16 *)(a1 + 16));
      v59 = *(_DWORD *)(v57 + 9);
      v60 = htonl(0x3001D20u);
      Buf1 = v61;
      if ( v59 != v60 )
      {
        v42 = "elliptic curve is not x25519";
LABEL_54:
        sub_418210(v42);
      }
      qmemcpy((void *)(*(_DWORD *)(a1 + 56) + 360), (const void *)(v57 + 13), 0x20u);
      *(_DWORD *)a1 |= 8u;
    }
    v11 = sub_46690C(Buf1);
  }
  v95 = *(_BYTE *)(*(_DWORD *)(a1 + 52) + 5);
  if ( v95 == 13 )
    v11 = sub_46690C(Buf1);
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 52) + 5) != 14 )
  {
    v16 = (unsigned __int8 **)(a1 + 52);
    v17 = "'server hello done'";
    goto LABEL_76;
  }
  if ( v95 == 13 )
  {
    v62 = sub_465F44(a1, 7u, v11);
    *v62 = 11;
    v62[3] = 3;
    ((void (*)(void))sub_471D28)();
  }
  v63 = sub_465F44(a1, 0x1006u, v11);
  v64 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    if ( (v64 & 8) == 0 )
      sub_4181F8("server did not provide EC key");
    sub_465F08((CHAR *)v103, 32);
    LOBYTE(v103[0]) &= 0xF8u;
    HIBYTE(v103[7]) = HIBYTE(v103[7]) & 0x3F | 0x40;
    sub_420CA8((int)(v63 + 5), (int)v103, "\t");
    sub_420CA8((int)v101, (int)v103, (const void *)(*(_DWORD *)(a1 + 56) + 360));
    v63[4] = 32;
    v67 = 33;
    v68 = 32;
    v69 = (int *)v101;
  }
  else
  {
    if ( (v64 & 2) == 0 )
      sub_4181F8("server cert is not RSA");
    sub_465F08((CHAR *)v102, 48);
    LOWORD(v102[0]) = 771;
    v65 = sub_450BD8(*(_DWORD *)(a1 + 56) + 224, v102, 0x30u, (_WORD *)v63 + 3, 0x1000u);
    Buf2 = v66;
    Buf1 = v66;
    LOBYTE(v66) = HIBYTE(v65);
    BYTE1(v66) = v65;
    *((_WORD *)v63 + 2) = (_WORD)v66;
    v67 = v65 + 2;
    v68 = 48;
    v69 = v102;
  }
  v96 = (int)v69;
  *v63 = 16;
  LOBYTE(v70) = HIBYTE(v67);
  HIBYTE(v70) = v67;
  *((_WORD *)v63 + 1) = v70;
  sub_471D28(Buf1, Buf2);
  sub_44DC38(*(_DWORD *)(a1 + 56) + 176, 0x30u, v96, v68, "master secret", *(_DWORD *)(a1 + 56) + 112, 64);
  v71 = *(_DWORD *)(a1 + 56);
  qmemcpy(v103, (const void *)(v71 + 144), 0x20u);
  qmemcpy(&v103[8], (const void *)(v71 + 112), 0x20u);
  sub_44DC38(
    a1 + 88,
    2 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 24)),
    v71 + 176,
    48,
    "key expansion",
    (int)v103,
    64);
  v72 = a1 + 88 + 2 * *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 72) = v72;
  v73 = *(_DWORD *)(a1 + 24);
  v74 = v73 + v72;
  *(_DWORD *)(a1 + 76) = v74;
  *(_DWORD *)(a1 + 80) = v74 + v73;
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 28) + v74 + v73;
  sub_413E7C(a1 + 468, v74, v73);
  sub_413E7C(a1 + 224, *(_DWORD *)(a1 + 72), *(_DWORD *)(a1 + 24));
  memset(v100, 0, sizeof(v100));
  sub_413E48(a1 + 224, (int)v100, a1 + 712);
  sub_471D00(6, &unk_483A50);
  *(_DWORD *)a1 |= 0x20u;
  v76 = (_DWORD *)sub_465ED8(a1, 16, v75);
  *v76 = 201326612;
  v77 = sub_45EF04(*(_DWORD *)(a1 + 56), v103);
  sub_44DC38((int)(v76 + 1), 0xCu, *(_DWORD *)(a1 + 56) + 176, 48, "client finished", (int)v103, v77);
  sub_471D74(22, 16);
  v11 = ((int (*)(void))sub_46693C)();
  if ( v11 != 1 || (v78 = memcmp(*(const void **)(a1 + 52), &unk_483A50, 6u), v11 = 1, v78 != 0) )
  {
    v16 = (unsigned __int8 **)(a1 + 52);
    v17 = "switch to encrypted traffic";
    goto LABEL_76;
  }
  *(_DWORD *)(a1 + 12) = (*(_DWORD *)a1 & 0x10) == 0 ? 48 : 24;
  v11 = sub_46693C(1, "'server finished'");
  if ( v11 <= 3 || *(_BYTE *)(*(_DWORD *)(a1 + 52) + 5) != 20 )
  {
    v16 = (unsigned __int8 **)(a1 + 52);
    v17 = "'server finished'";
LABEL_76:
    sub_416B80(v16, v17, v11);
  }
  v80 = *(_DWORD **)(a1 + 56);
  sub_45102C(v80 + 64, v79);
  sub_45102C(v80 + 56, v81);
  sub_45102C(v80 + 60, v82);
  sub_45102C(v80 + 80, v83);
  sub_45102C(v80 + 84, v84);
  sub_45102C(v80 + 72, v85);
  sub_45102C(v80 + 76, v86);
  sub_45102C(v80 + 68, v87);
  free(*(void **)(a1 + 56));
  *(_DWORD *)(a1 + 56) = 0;
}

