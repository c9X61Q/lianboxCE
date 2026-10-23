// busybox.exe @ 0x40ba10 size=904

int __usercall sub_40BA10@<eax>(unsigned int a1@<eax>, unsigned int a2@<edx>, _DWORD *a3@<ecx>)
{
  unsigned __int64 v3; // rdi
  int v4; // ebx
  void *v5; // esp
  int v6; // eax
  int *v7; // ebx
  int *v8; // eax
  int v9; // eax
  unsigned int v10; // edx
  int v11; // esi
  int *v12; // eax
  _BYTE *v13; // ecx
  int v14; // eax
  __int16 v15; // dx
  int v16; // edi
  int *v17; // eax
  int *v18; // esi
  int *v19; // edi
  int v20; // eax
  int result; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // eax
  int *v25; // eax
  int v26; // edx
  int *v27; // ecx
  int *v28; // edx
  int v29; // [esp+10h] [ebp-38h] BYREF
  int v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  int v32; // [esp+1Ch] [ebp-2Ch]
  int v33; // [esp+20h] [ebp-28h]
  int v34; // [esp+24h] [ebp-24h]
  int *v35; // [esp+28h] [ebp-20h]
  int *v36; // [esp+2Ch] [ebp-1Ch]

  v3 = __PAIR64__(a1, a2);
  v4 = (int)a3;
  v30 = a3[3];
  v33 = a3[1];
  v31 = a3[2];
  v5 = alloca(sub_4115D8());
  v35 = &v29;
  if ( (v33 & 0x80u) != 0 )
  {
    if ( (v3 & 0x80000000) != 0LL )
    {
      HIDWORD(v3) = -HIDWORD(v3);
      LODWORD(v3) = (unsigned __int64)-__SPAIR64__(v3, HIDWORD(v3)) >> 32;
LABEL_5:
      v32 = v4;
      v7 = v35;
      v34 = v33 & 0x1000;
      while ( 1 )
      {
        v36 = (int *)((char *)v7 + 1);
        if ( v35 != v7 && v34 != 0 && *(_WORD *)(v32 + 28) != 0 && (((char *)v7 - (char *)v35) & 0x80000003) == 3 )
        {
          v8 = (int *)((char *)v7 + 2);
          *(_BYTE *)v7 = 44;
          v7 = v36;
          v36 = v8;
        }
        *(_BYTE *)v7 = sub_4027F0(__PAIR64__(v3, HIDWORD(v3)), 10) + 48;
        v9 = sub_4026E0(__PAIR64__(v3, HIDWORD(v3)), 0xAu, 0);
        if ( __PAIR64__(v3, HIDWORD(v3)) <= 9 )
          break;
        v7 = v36;
        v3 = __PAIR64__(v9, v10);
      }
      v4 = v32;
      if ( v30 > 0 )
      {
        v11 = v30 - ((char *)v36 - (char *)v35);
        if ( v11 <= 0 )
          goto LABEL_20;
        goto LABEL_15;
      }
      if ( v35 != v36 )
        goto LABEL_21;
LABEL_41:
      if ( v30 == 0 )
      {
        LOWORD(v14) = v33;
        if ( v31 <= 0 )
          goto LABEL_27;
        if ( (v33 & 0x1C0) == 0 )
          goto LABEL_26;
        goto LABEL_24;
      }
      goto LABEL_48;
    }
    v6 = v33;
    LOBYTE(v6) = v33 & 0x7F;
    *(_DWORD *)(v4 + 4) = v6;
    v33 = v6;
  }
  if ( v3 != 0 )
    goto LABEL_5;
  v36 = v35;
  v11 = v30;
  if ( v30 <= 0 )
    goto LABEL_41;
LABEL_15:
  v12 = v36;
  v13 = (char *)v36 + v11;
  do
  {
    v12 = (int *)((char *)v12 + 1);
    *((_BYTE *)v12 - 1) = 48;
  }
  while ( v13 - (_BYTE *)v12 > 0 );
  if ( v11 <= 0 )
    v11 = 1;
  v36 = (int *)((char *)v36 + v11);
LABEL_20:
  if ( v35 == v36 )
  {
LABEL_48:
    v25 = v36;
    *(_BYTE *)v36 = 48;
    v36 = (int *)((char *)v25 + 1);
  }
LABEL_21:
  LOWORD(v14) = v33;
  if ( v31 <= 0 )
    goto LABEL_27;
  v15 = v33;
  v31 -= (char *)v36 - (char *)v35;
  v16 = v31;
  LOWORD(v14) = v33;
  *(_DWORD *)(v4 + 8) = v31;
  if ( v16 <= 0 )
    goto LABEL_27;
  if ( (v15 & 0x1C0) != 0 )
LABEL_24:
    *(_DWORD *)(v4 + 8) = v31 - 1;
  if ( v30 < 0 && (v33 & 0x600) == 0x200 )
  {
    v26 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 8) = v26 - 1;
    if ( v26 > 0 )
    {
      v27 = v36;
      v28 = (int *)((char *)v36 + v26);
      do
      {
        v27 = (int *)((char *)v27 + 1);
        *((_BYTE *)v27 - 1) = 48;
      }
      while ( v27 != v28 );
      v36 = v27;
      *(_DWORD *)(v4 + 8) = -1;
    }
    goto LABEL_27;
  }
LABEL_26:
  if ( (v33 & 0x400) == 0 )
  {
    v23 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 8) = v23 - 1;
    if ( v23 > 0 )
    {
      do
      {
        sub_40B130(32, v4);
        v24 = *(_DWORD *)(v4 + 8);
        *(_DWORD *)(v4 + 8) = v24 - 1;
      }
      while ( v24 > 0 );
      v14 = *(_DWORD *)(v4 + 4);
    }
  }
LABEL_27:
  if ( (v14 & 0x80u) == 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      v22 = v36;
      *(_BYTE *)v36 = 43;
      v18 = (int *)((char *)v22 + 1);
    }
    else
    {
      v18 = v36;
      if ( (v14 & 0x40) != 0 )
      {
        *(_BYTE *)v36 = 32;
        v18 = (int *)((char *)v18 + 1);
      }
    }
  }
  else
  {
    v17 = v36;
    *(_BYTE *)v36 = 45;
    v18 = (int *)((char *)v17 + 1);
  }
  v19 = v35;
  if ( v35 >= v18 )
    goto LABEL_33;
  do
  {
    v20 = *((char *)v18 - 1);
    v18 = (int *)((char *)v18 - 1);
    sub_40B130(v20, v4);
  }
  while ( v19 != v18 );
  result = *(_DWORD *)(v4 + 8);
  for ( *(_DWORD *)(v4 + 8) = result - 1; result > 0; *(_DWORD *)(v4 + 8) = result - 1 )
  {
    sub_40B130(32, v4);
LABEL_33:
    result = *(_DWORD *)(v4 + 8);
  }
  return result;
}

