// busybox.exe @ 0x46174c size=2107

DWORD __usercall sub_46174C@<eax>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  size_t v3; // ebx
  size_t v4; // esi
  int v5; // esi
  int v6; // edi
  const char *v7; // eax
  _DWORD *i; // eax
  int j; // ebp
  int v10; // ecx
  int k; // esi
  int v12; // edi
  size_t v13; // ebx
  const char *v14; // eax
  const char *v15; // eax
  int v16; // ecx
  size_t v17; // esi
  int m; // ebp
  const char *n; // edi
  size_t v20; // edi
  int v21; // ebp
  const char *v22; // eax
  int ii; // ebp
  int **v24; // edi
  char *jj; // edx
  size_t v26; // ebx
  int v27; // edi
  int v28; // ebp
  int kk; // esi
  int v30; // ecx
  _BYTE *v31; // edx
  int *v32; // eax
  _BYTE *v33; // edx
  int v34; // ebp
  _DWORD *v35; // ebx
  int *v36; // eax
  void *v37; // edi
  unsigned int v38; // ecx
  int mm; // edi
  int **v40; // ebp
  int *v41; // esi
  char *v42; // ebx
  int *v43; // eax
  int v44; // eax
  const char **v45; // ebp
  char *v46; // eax
  char *v47; // eax
  int v48; // eax
  int nn; // edx
  const char *v50; // ebx
  void **v51; // ebp
  char v52; // al
  _DWORD *v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // ebp
  int i1; // esi
  int **v60; // edi
  int *v61; // ebx
  int v62; // edx
  _DWORD *v63; // edx
  int v64; // eax
  int v65; // eax
  int v66; // edi
  int v67; // esi
  int i2; // ebx
  int v69; // eax
  void *v70; // ebx
  DWORD result; // eax
  int v72; // ecx
  int v73; // edx
  int *v74; // esi
  int v75; // edx
  DWORD *v76; // edx
  HANDLE hFile; // [esp+0h] [ebp-84h]
  _DWORD *lpBaseAddress; // [esp+18h] [ebp-6Ch]
  _DWORD *lpBaseAddressa; // [esp+18h] [ebp-6Ch]
  char *lpBaseAddressc; // [esp+18h] [ebp-6Ch]
  _DWORD *lpBaseAddressb; // [esp+18h] [ebp-6Ch]
  int *v83; // [esp+1Ch] [ebp-68h]
  int *v85; // [esp+24h] [ebp-60h]
  size_t v86; // [esp+24h] [ebp-60h]
  char *v87; // [esp+24h] [ebp-60h]
  int v88; // [esp+24h] [ebp-60h]
  size_t v89; // [esp+28h] [ebp-5Ch]
  _BYTE *v90; // [esp+28h] [ebp-5Ch]
  _BYTE *v91; // [esp+28h] [ebp-5Ch]
  int v92; // [esp+28h] [ebp-5Ch]
  int v93; // [esp+28h] [ebp-5Ch]
  HANDLE v94; // [esp+2Ch] [ebp-58h]
  size_t v95; // [esp+30h] [ebp-54h]
  int v97; // [esp+38h] [ebp-4Ch]
  int v98; // [esp+3Ch] [ebp-48h]
  int v99; // [esp+40h] [ebp-44h] BYREF
  __int128 v100; // [esp+44h] [ebp-40h] BYREF
  struct _SECURITY_ATTRIBUTES FileMappingAttributes; // [esp+54h] [ebp-30h] BYREF

  v100 = *(_OWORD *)off_473034;
  v3 = sub_41415C(*(const char **)(a1 + 76));
  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 != 0 )
  {
    v5 = *(_DWORD *)(dword_485FEC + 16);
    v6 = 400;
    if ( v5 != 0 )
    {
      while ( 1 )
      {
        v7 = *(const char **)(v5 + v6 - 400);
        v6 += 4;
        if ( v7 == nullptr )
          break;
        v3 += sub_41415C(v7);
      }
    }
    for ( i = *(_DWORD **)(dword_485FEC + 20); i != nullptr; i = (_DWORD *)*i )
      v6 += 8 * i[1] + 8;
    for ( j = 0; j != 39; ++j )
    {
      v10 = *(_DWORD *)(dword_485FEC + 4 * j + 28);
      for ( k = v6; ; k += 16 )
      {
        v6 = k;
        if ( v10 == 0 )
          break;
        v85 = (int *)v10;
        v3 += sub_41415C(*(const char **)(v10 + 8));
        v10 = *v85;
      }
    }
    v12 = dword_485FF0;
    v13 = sub_41415C(*(const char **)(dword_485FF0 + 24)) + v3;
    v14 = *(const char **)(v12 + 36);
    if ( v14 != (const char *)(v12 + 62) )
      v13 += sub_41415C(v14);
    v15 = *(const char **)(v12 + 40);
    if ( (const char *)(v12 + 62) != v15 )
      v13 += sub_41415C(v15);
    v86 = sub_41415C(*(const char **)(v12 + 44));
    v89 = sub_41415C(*(const char **)(v12 + 48));
    lpBaseAddress = (_DWORD *)dword_4731A4;
    v17 = k + 320;
    for ( m = 0; m != 31; ++m )
    {
      for ( n = (const char *)lpBaseAddress[m]; n != nullptr; n = *(const char **)n )
      {
        v17 += sub_41415C(n + 10) + 12;
        if ( n[8] == 1 )
          v17 = sub_41AABC(v17 + 4, (char *)(*((_DWORD *)n + 1) + 4), v16);
      }
    }
    v3 = v89 + v86 + v13;
    v20 = sub_41AABC(v17, *(char **)(a1 + 68), v16);
    v21 = *(_DWORD *)(a1 + 72);
    v4 = v20;
    if ( v21 != 0 )
    {
      while ( 1 )
      {
        v22 = *(const char **)(v21 - v20 + v4);
        v4 += 4;
        if ( v22 == nullptr )
          break;
        v3 += sub_41415C(v22);
      }
    }
    if ( *(_DWORD *)(a1 + 40) != 4 )
    {
      lpBaseAddressa = (_DWORD *)dword_473110;
      v4 += 156;
      for ( ii = 0; ii != 39; ++ii )
      {
        v24 = (int **)lpBaseAddressa[ii];
        for ( jj = (char *)v4; ; jj = v87 )
        {
          v4 = (size_t)jj;
          v87 = jj + 16;
          if ( v24 == nullptr )
            break;
          v26 = sub_41415C((const char *)v24[1]) + v3;
          v3 = sub_41415C((const char *)v24[2]) + v26;
          v24 = (int **)*v24;
        }
      }
      v27 = dword_473454;
      if ( dword_473454 != 0 )
      {
        v28 = *(_DWORD *)(dword_473454 + 16);
        for ( kk = 0; kk < *(_DWORD *)(v27 + 16); ++kk )
        {
          lpBaseAddressc = jj;
          v3 += sub_41415C(*(const char **)(v27 + 4 * kk + 36));
          jj = lpBaseAddressc;
        }
        v4 = (size_t)&jj[4 * v28];
      }
    }
  }
  v88 = v4 + v3 + 80;
  v95 = v4 + 80;
  FileMappingAttributes.lpSecurityDescriptor = nullptr;
  FileMappingAttributes.nLength = 12;
  FileMappingAttributes.bInheritHandle = true;
  v94 = CreateFileMappingA((HANDLE)0xFFFFFFFF, &FileMappingAttributes, 4u, 0, v4 + 80 + v88, nullptr);
  lpBaseAddressb = MapViewOfFile(v94, 2u, 0, 0, 0);
  if ( lpBaseAddressb != nullptr )
  {
    dword_473338 = v4 + v3 + 80;
    dword_47333C = (int)(lpBaseAddressb + 20);
    dword_473344 = (int)lpBaseAddressb + v88;
    qmemcpy(lpBaseAddressb, (const void *)a1, 0x50u);
    lpBaseAddressb[19] = sub_446CEC(*(const char **)(a1 + 76));
    *((_BYTE *)lpBaseAddressb + dword_473338 + 76) = 1;
    if ( *(_DWORD *)(a1 + 40) != 0 )
    {
      v31 = (_BYTE *)dword_47333C;
      dword_47333C += 400;
      qmemcpy(v31, (const void *)dword_485FEC, 0x190u);
      v31[12] = 0;
      v90 = v31;
      v32 = sub_414DCC(*(int **)(dword_485FEC + 16));
      v33 = v90;
      *((_DWORD *)v90 + 4) = v32;
      v34 = dword_473338;
      v90[dword_473338 + 16] = 1;
      v35 = *(_DWORD **)(dword_485FEC + 20);
      v36 = &v99;
      while ( v35 != nullptr )
      {
        v37 = (void *)dword_47333C;
        v38 = 8 * v35[1] + 8;
        *v36 = dword_47333C;
        dword_47333C = (int)v37 + v38;
        qmemcpy(v37, v35, v38);
        *(_BYTE *)(*v36 + v34) = 1;
        v35 = (_DWORD *)*v35;
        v36 = (int *)*v36;
      }
      *v36 = 0;
      *((_DWORD *)v90 + 5) = v99;
      v90[v34 + 20] = 1;
      for ( mm = 28; mm != 184; mm += 4 )
      {
        v40 = *(int ***)(dword_485FEC + mm);
        v41 = &v99;
        while ( 1 )
        {
          v42 = (char *)dword_47333C;
          if ( v40 == nullptr )
            break;
          v91 = v33;
          *v41 = dword_47333C;
          dword_47333C = (int)(v42 + 16);
          *((_DWORD *)v42 + 2) = sub_446CEC((const char *)v40[2]);
          v43 = (int *)*v41;
          v43[1] = (int)v40[1];
          v43[3] = 0;
          v44 = dword_473338;
          *(_BYTE *)(*v41 + dword_473338 + 8) = 1;
          *(_BYTE *)(*v41 + v44) = 1;
          v40 = (int **)*v40;
          v41 = (int *)*v41;
          v33 = v91;
        }
        *v41 = 0;
        *(_DWORD *)&v33[mm] = v99;
        v33[mm + dword_473338] = 1;
      }
      *lpBaseAddressb = v33;
      v45 = (const char **)dword_485FF0;
      dword_47333C = (int)(v42 + 196);
      qmemcpy(v42, (const void *)dword_485FF0, 0xC4u);
      *((_DWORD *)v42 + 6) = sub_446CEC(v45[6]);
      v46 = v42 + 62;
      if ( v45[9] != (char *)v45 + 62 )
        v46 = sub_446CEC(v45[9]);
      *((_DWORD *)v42 + 9) = v46;
      v47 = v42 + 62;
      if ( (char *)v45 + 62 != v45[10] )
        v47 = sub_446CEC(v45[10]);
      *((_DWORD *)v42 + 10) = v47;
      *((_DWORD *)v42 + 11) = sub_446CEC(v45[11]);
      *((_DWORD *)v42 + 12) = sub_446CEC(v45[12]);
      v48 = dword_473338;
      v42[dword_473338 + 24] = 1;
      v42[v48 + 36] = 1;
      v42[v48 + 40] = 1;
      v42[v48 + 44] = 1;
      v42[v48 + 48] = 1;
      lpBaseAddressb[1] = v42;
      v97 = dword_4731A4;
      v92 = dword_47333C;
      dword_47333C += 124;
      for ( nn = 0; nn != 124; nn += 4 )
      {
        v50 = *(const char **)(v97 + nn);
        v51 = (void **)&v99;
        while ( v50 != nullptr )
        {
          v98 = nn;
          *v51 = (void *)dword_47333C;
          dword_47333C += sub_41415C(v50 + 10) + 12;
          qmemcpy(*v51, v50, strlen(v50 + 10) + 12);
          v52 = v50[8];
          v53 = *v51;
          nn = v98;
          if ( v52 == 1 )
          {
            v54 = dword_47333C;
            v53[1] = dword_47333C;
            dword_47333C = v54 + 4;
            sub_41F4E8((char *)(*((_DWORD *)v50 + 1) + 4));
            *((_BYTE *)*v51 + dword_473338 + 4) = 1;
            nn = v98;
          }
          else if ( v52 == 2 )
          {
            v53[1] = (*((_DWORD *)v50 + 1) - (int)&off_47E040) >> 3;
          }
          *((_BYTE *)*v51 + dword_473338) = 1;
          v50 = *(const char **)v50;
          v51 = (void **)*v51;
        }
        *v51 = nullptr;
        *(_DWORD *)(v92 + nn) = v99;
        v55 = dword_473338;
        *(_BYTE *)(dword_473338 + v92 + nn) = 1;
      }
      lpBaseAddressb[2] = v92;
      *((_BYTE *)lpBaseAddressb + v55) = 1;
      *((_BYTE *)lpBaseAddressb + v55 + 4) = 1;
      *((_BYTE *)lpBaseAddressb + v55 + 8) = 1;
      lpBaseAddressb[17] = sub_41F4E8(*(char **)(a1 + 68));
      lpBaseAddressb[18] = sub_414DCC(*(int **)(a1 + 72));
      v56 = dword_473338;
      *((_BYTE *)lpBaseAddressb + dword_473338 + 68) = 1;
      *((_BYTE *)lpBaseAddressb + v56 + 72) = 1;
      if ( *(_DWORD *)(a1 + 40) != 4 )
      {
        v57 = dword_473110;
        v58 = dword_47333C;
        dword_47333C += 156;
        for ( i1 = 0; i1 != 156; i1 += 4 )
        {
          v60 = *(int ***)(v57 + i1);
          v61 = &v99;
          while ( v60 != nullptr )
          {
            v93 = v57;
            v62 = dword_47333C;
            *v61 = dword_47333C;
            dword_47333C = v62 + 16;
            *(_DWORD *)(v62 + 4) = sub_446CEC((const char *)v60[1]);
            v83 = (int *)*v61;
            v83[2] = (int)sub_446CEC((const char *)v60[2]);
            v63 = (_DWORD *)*v61;
            v63[3] = v60[3];
            v64 = dword_473338;
            *((_BYTE *)v63 + dword_473338 + 4) = 1;
            *(_BYTE *)(*v61 + v64 + 8) = 1;
            *(_BYTE *)(*v61 + v64) = 1;
            v60 = (int **)*v60;
            v61 = (int *)*v61;
            v57 = v93;
          }
          *v61 = 0;
          *(_DWORD *)(v58 + i1) = v99;
          v65 = dword_473338;
          *(_BYTE *)(v58 + dword_473338 + i1) = 1;
        }
        lpBaseAddressb[3] = v58;
        *((_BYTE *)lpBaseAddressb + v65 + 12) = 1;
        v66 = dword_473454;
        if ( dword_473454 != 0 )
        {
          v67 = dword_47333C;
          dword_47333C += 4 * *(_DWORD *)(dword_473454 + 16);
          for ( i2 = 0; i2 < *(_DWORD *)(v66 + 16); ++i2 )
          {
            *(_DWORD *)(v67 + 4 * i2) = sub_446CEC(*(const char **)(v66 + 4 * i2 + 36));
            *(_BYTE *)(dword_473338 + v67 + 4 * i2) = 1;
          }
          lpBaseAddressb[4] = v67;
          *((_BYTE *)lpBaseAddressb + dword_473338 + 16) = 1;
          lpBaseAddressb[5] = *(_DWORD *)(dword_473454 + 16);
        }
      }
    }
    lpBaseAddressb[8] = v88;
    lpBaseAddressb[9] = v95;
    lpBaseAddressb[7] = lpBaseAddressb;
    lpBaseAddressb[6] = v94;
    lpBaseAddressb[11] = a3;
    v69 = 0;
    if ( a2 != nullptr )
      v69 = a2[5];
    lpBaseAddressb[12] = v69;
    sub_4626DC(&FileMappingAttributes, "%p", v94);
    DWORD2(v100) = &FileMappingAttributes;
    v70 = (void *)sub_444984((const char *const *)&v100);
    CloseHandle((HANDLE)lpBaseAddressb[6]);
    UnmapViewOfFile(lpBaseAddressb);
    hFile = v94;
    if ( v70 != (void *)-1 )
    {
      result = GetProcessId(v70);
      if ( a2 != nullptr )
      {
        v72 = dword_485FF0;
        if ( a3 == 1 )
        {
          *(_DWORD *)(dword_485FF0 + 192) = result;
          v73 = dword_4732C4;
          v74 = &dword_4732C4;
          while ( a2 != (_DWORD *)v73 )
          {
            v74 = (int *)(v73 + 28);
            v73 = *(_DWORD *)(v73 + 28);
          }
          *v74 = *(_DWORD *)(v73 + 28);
          a2[7] = dword_4732C4;
          dword_4732C4 = (int)a2;
        }
        v75 = a2[5];
        a2[5] = v75 + 1;
        v76 = (DWORD *)(a2[4] + 16 * v75);
        *v76 = result;
        v76[1] = (DWORD)v70;
        v76[2] = -1;
        v76[3] = v72 + 62;
      }
      return result;
    }
  }
  if ( a2 != nullptr )
    sub_431EDC((int)a2, (int)hFile);
  sub_415B40(v30, "unable to spawn shell");
}

