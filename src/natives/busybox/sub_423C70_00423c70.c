// busybox.exe @ 0x423c70 size=1501

int __usercall sub_423C70@<eax>(const char **a1@<eax>)
{
  FILE *(__cdecl *v1)(int); // ebx
  const char *v2; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  const char *v7; // eax
  int v8; // esi
  int v9; // edx
  char v10; // si
  signed int v11; // ebx
  FILE *v12; // edi
  signed int v13; // eax
  signed int j; // ebx
  char v15; // cl
  char v16; // dl
  int v17; // ebx
  char k; // cl
  int v19; // eax
  int v20; // edx
  char m; // cl
  int v22; // esi
  int v23; // ecx
  char *v24; // esi
  int n; // eax
  int ii; // edx
  const char *v27; // eax
  const char *v28; // eax
  int jj; // edi
  int v30; // ebx
  int v31; // esi
  int v32; // ebx
  int v33; // edx
  int v34; // eax
  _OWORD *kk; // ebx
  char *v36; // eax
  char *v37; // ebx
  char *v38; // ebx
  int FileHandle; // [esp+0h] [ebp-98h]
  size_t ElementCount; // [esp+8h] [ebp-90h]
  int v43; // [esp+18h] [ebp-80h]
  char v44; // [esp+18h] [ebp-80h]
  int v45; // [esp+1Ch] [ebp-7Ch]
  _DWORD *v46; // [esp+20h] [ebp-78h]
  char v47; // [esp+25h] [ebp-73h]
  char v48; // [esp+26h] [ebp-72h]
  char v49; // [esp+27h] [ebp-71h]
  int v50; // [esp+28h] [ebp-70h]
  int i; // [esp+2Ch] [ebp-6Ch]
  _OWORD *Block; // [esp+30h] [ebp-68h]
  FILE *v53; // [esp+34h] [ebp-64h]
  int v54; // [esp+34h] [ebp-64h]
  int v55; // [esp+34h] [ebp-64h]
  char *v56; // [esp+34h] [ebp-64h]
  FILE *Stream; // [esp+38h] [ebp-60h]
  FILE *v58; // [esp+3Ch] [ebp-5Ch]
  char *v59; // [esp+40h] [ebp-58h]
  char *v60; // [esp+44h] [ebp-54h]
  int v61[2]; // [esp+48h] [ebp-50h] BYREF
  void *v62[2]; // [esp+50h] [ebp-48h] BYREF
  _QWORD v63[2]; // [esp+58h] [ebp-40h]
  _DWORD v64[12]; // [esp+68h] [ebp-30h] BYREF

  v59 = nullptr;
  v60 = nullptr;
  v1 = off_4730E8;
  Stream = off_4730E8(0);
  v58 = v1(0);
  for ( i = 0; ; i = 1 )
  {
    v2 = a1[i];
    if ( *v2 == 45 && v2[1] == 0 )
    {
      v3 = 0;
    }
    else if ( (dword_486008 & 0x20) != 0 )
    {
      v3 = sub_443508(v2, 0, ElementCount);
      if ( v3 == -1 )
        v3 = sub_47154C(v4, 0);
    }
    else
    {
      v3 = sub_447A60();
      if ( v3 == -1 )
        goto LABEL_6;
    }
    ElementCount = 0;
    v5 = sub_443400(v3);
    if ( v6 == -1 && v5 == -1 && *_errno() == 29 )
    {
      v7 = (const char *)sub_44328C("TMPDIR");
      if ( v7 == nullptr )
        goto LABEL_6;
      (&v59)[i] = (char *)sub_4708BC("%s/difXXXXXX", v7);
      v8 = sub_471508();
      sub_416EC0();
      if ( v9 < 0 )
        sub_470D44(FileHandle);
      if ( v3 != 0 )
        sub_442EA4(v3);
      sub_470E28(0);
      v3 = v8;
    }
    *(&Stream + i) = fdopen_0(v3, "r");
    if ( i == 1 )
      break;
  }
  v49 = 0;
  v10 = 0;
LABEL_22:
  v53 = Stream;
  v11 = fread(&MultiByteStr, 1u, 0x200u, Stream);
  v12 = v58;
  v13 = fread(byte_485DE0, 1u, 0x200u, v58);
  if ( v11 != v13 )
  {
    if ( v13 > v11 )
      v13 = v11;
    v49 = 1;
  }
  if ( v13 != 0 )
  {
    for ( j = 0; ; ++j )
    {
      if ( v13 <= j )
        goto LABEL_22;
      v15 = *((_BYTE *)&MultiByteStr + j);
      v16 = byte_485DE0[j];
      if ( v15 == 0 )
        break;
      if ( v16 != 0 )
        goto LABEL_33;
      v10 = 1;
LABEL_36:
      v49 = 1;
LABEL_37:
      ;
    }
    v10 = 1;
LABEL_33:
    if ( v15 == v16 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( v49 == 0 )
  {
LABEL_6:
    i = 0;
    goto LABEL_105;
  }
  if ( v10 != 0 && (dword_486008 & 1) == 0 )
  {
    i = 2;
    goto LABEL_104;
  }
  v64[0] = v53;
  v64[4] = v12;
  v46 = (_DWORD *)sub_42014C((int)v64, v61, v62);
  v45 = 1;
  v48 = 0;
  Block = nullptr;
  do
  {
    v47 = 0;
    v50 = -1;
    while ( 2 )
    {
      LODWORD(v63[0]) = v45;
      v17 = v45;
      for ( k = 0; ; k = v49 )
      {
        v19 = v17;
        v54 = v46[v17 - 1];
        v20 = v54 + 1;
        if ( v61[0] < v17 )
          break;
        ++v17;
        if ( v46[v19] != v20 )
          break;
      }
      if ( k != 0 )
        LODWORD(v63[0]) = v19;
      LODWORD(v63[1]) = v54 + 1;
      HIDWORD(v63[0]) = v19 - 1;
      v55 = v19 - 1;
      for ( m = 0; ; m = v49 )
      {
        v22 = v46[v55 + 1];
        if ( v61[0] <= v55 )
        {
          if ( m != 0 )
            HIDWORD(v63[0]) = v55;
          goto LABEL_57;
        }
        if ( v22 != 0 )
          break;
        ++v55;
      }
      if ( m != 0 )
        HIDWORD(v63[0]) = v55;
LABEL_57:
      v43 = v22 - 1;
      HIDWORD(v63[1]) = v22 - 1;
      if ( v22 - 1 >= v20 || v55 >= v19 )
      {
        if ( v50 != -1 )
        {
          v23 = 2 * *(_DWORD *)(dword_486010 + 4) + 1;
          v24 = (char *)&Block[v50];
          if ( v23 + *((_DWORD *)v24 + 1) < v19 && *((_DWORD *)v24 + 3) + v23 < v20 )
            goto LABEL_72;
        }
        for ( n = 0; ; n = 1 )
        {
          for ( ii = v63[n]; ii <= SHIDWORD(v63[n]); ++ii )
            v47 |= *((_QWORD *)v62[n] + ii) - *((_QWORD *)v62[n] + ii - 1) != 1;
          if ( n == 1 )
            break;
        }
        Block = (_OWORD *)sub_47168C(++v50, 4102);
        Block[v50] = *(_OWORD *)v63;
      }
      v45 = v55 + 1;
      if ( v55 + 1 <= v61[0] )
      {
        v46[v55] = v43;
        continue;
      }
      break;
    }
    if ( v50 != -1 )
    {
LABEL_72:
      v44 = v47 | (BYTE2(dword_486008) ^ 1) & 1;
      if ( v44 != 0 )
      {
        if ( (dword_486008 & 0x40) == 0 )
        {
          if ( v48 == 0 )
          {
            v27 = *(const char **)(dword_486010 + 12);
            if ( v27 == nullptr )
              v27 = *a1;
            sub_46F088("--- %s\n", v27);
            v28 = *(const char **)(dword_486010 + 16);
            if ( v28 == nullptr )
              v28 = a1[1];
            sub_46F088("+++ %s\n", v28);
          }
          sub_46F088("@@");
          v56 = (char *)&Block[v50];
          for ( jj = 0; ; jj = 1 )
          {
            v30 = *(_DWORD *)(dword_486010 + 4);
            v31 = *((_DWORD *)Block + 2 * jj) - v30;
            if ( v31 <= 0 )
              v31 = 1;
            LODWORD(v63[jj]) = v31;
            v32 = *(_DWORD *)&v56[8 * jj + 4] + v30;
            if ( v32 > v61[jj] )
              v32 = v61[jj];
            HIDWORD(v63[jj]) = v32;
            v33 = v31;
            if ( v31 > v32 )
              v33 = v32;
            sub_46F088(" %c%d", jj == 0 ? 45 : 43, v33);
            if ( v31 != v32 )
            {
              v34 = 0;
              if ( v31 < v32 )
                v34 = v32 - v31 + 1;
              sub_46F088(",%d", v34);
            }
            if ( jj == 1 )
              break;
          }
          sub_46F108((char *)off_47ACE1);
          for ( kk = Block; ; ++kk )
          {
            v36 = v56 >= (char *)kk ? (char *)(*(_DWORD *)kk - 1) : (char *)HIDWORD(v63[0]);
            sub_42EFB0(v36, 32);
            if ( v56 < (char *)kk )
              break;
            sub_42EFB0(*((char **)kk + 1), 45);
            sub_42EFB0(*((char **)kk + 3), 43);
          }
        }
        v48 = v44;
      }
    }
  }
  while ( v61[0] >= v45 );
  free(Block);
  free(v62[0]);
  free(v62[1]);
  free(v46);
  if ( v48 == 0 )
    goto LABEL_6;
LABEL_104:
  *(_BYTE *)dword_486010 |= 1u;
LABEL_105:
  sub_42EE00();
  sub_42EE00();
  v37 = v59;
  if ( v59 != nullptr )
  {
    sub_444ECC(v59);
    free(v37);
  }
  v38 = v60;
  if ( v60 != nullptr )
  {
    sub_444ECC(v60);
    free(v38);
  }
  return i;
}

