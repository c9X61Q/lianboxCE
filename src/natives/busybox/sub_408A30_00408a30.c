// busybox.exe @ 0x408a30 size=984

int __usercall sub_408A30@<eax>(int *a1@<eax>, int *a2@<edx>, int a3@<ecx>, double a4, int a5, int a6, _DWORD *a7)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  _DWORD *v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  int v16; // ebp
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  _DWORD *v27; // eax
  int v30; // [esp+20h] [ebp-3Ch]
  int v31; // [esp+24h] [ebp-38h]
  int v32; // [esp+28h] [ebp-34h]
  int v33; // [esp+28h] [ebp-34h]
  int v34; // [esp+2Ch] [ebp-30h]
  int v35; // [esp+38h] [ebp-24h] BYREF
  int v36[8]; // [esp+3Ch] [ebp-20h] BYREF

  v8 = sub_410A00(a4, (int)v36, (int)&v35);
  v9 = v35;
  v10 = *a1;
  v11 = (_DWORD *)v8;
  v12 = v35 - *a1;
  v13 = v12 + v36[0];
  v35 = v12;
  v36[0] += v12;
  if ( v12 <= 0 )
  {
    if ( a5 == 0 )
    {
      v16 = 0;
      goto LABEL_14;
    }
    v31 = 0;
    v30 = 0;
    if ( v12 == 0 )
      goto LABEL_18;
    v11 = (_DWORD *)sub_410520(v11, v10 - v9);
    goto LABEL_37;
  }
  if ( v10 == 53 )
  {
    v16 = 0;
    if ( a5 == 0 || a1[3] != 1 )
      goto LABEL_14;
    v31 = sub_410D90(v11, v12);
    if ( v31 == 0 )
    {
      sub_40F8D0(v11, v35);
      v30 = 0;
      v13 = v36[0];
      goto LABEL_18;
    }
  }
  else
  {
    if ( a6 != 1 )
    {
      if ( a6 == 2 )
      {
        v31 = sub_410D90(v11, v12);
        sub_40F8D0(v11, v35);
LABEL_6:
        v11 = sub_408990(v11);
        v14 = v10 & 0x1F;
        if ( (v10 & 0x1F) != 0 )
          v14 = 32 - v14;
        _BitScanReverse(&v15, v11[v11[4] + 4]);
        if ( (v15 ^ 0x1F) == v14 )
        {
          v30 = 32;
          v13 = v36[0];
        }
        else
        {
          if ( v31 == 0 )
            v31 = v11[5] & 1;
          sub_40F8D0(v11, 1);
          v30 = 32;
          v13 = ++v36[0];
        }
        goto LABEL_18;
      }
      if ( v12 == 1 )
      {
        v16 = 0;
        if ( a5 == 0 )
          goto LABEL_14;
        v25 = (v11[5] & 2) != 0;
      }
      else
      {
        v25 = (v11[((v12 - 1) >> 5) + 5] >> (v12 - 1)) & 1;
      }
      v32 = v25;
      v31 = sub_410D90(v11, v12);
      v30 = v31 != 0 ? 0x10 : 0;
      sub_40F8D0(v11, v35);
      if ( v32 != 0 )
        goto LABEL_6;
      goto LABEL_37;
    }
    v31 = sub_410D90(v11, v12);
    if ( v31 == 0 )
    {
      sub_40F8D0(v11, v35);
      v30 = 0;
      goto LABEL_37;
    }
  }
  sub_40F8D0(v11, v35);
  v30 = 16;
LABEL_37:
  v13 = v36[0];
LABEL_18:
  v18 = a1[1];
  if ( v18 <= v13 )
  {
    v24 = a1[2];
    if ( v24 < v13 )
    {
      v36[0] = v24 + 1;
      *a7 = 163;
      v30 = 0;
      *errno() = 34;
      v13 = v36[0];
      v11[4] = 0;
    }
    goto LABEL_30;
  }
  v36[0] = a1[1];
  v19 = v18 - v13;
  v20 = v19;
  if ( v10 < v19 || (v16 = a1[4]) != 0 )
  {
    v11[4] = 0;
    v13 = v18;
    v30 = 0;
    *a7 = 80;
LABEL_30:
    v16 = 1;
    *a2 = v13;
    sub_410D30(a3, v10, v11);
    *a7 |= v30;
    goto LABEL_14;
  }
  v21 = v19 - 1;
  if ( v21 > 0 && v31 == 0 )
  {
    v34 = v20;
    v33 = v21;
    v26 = sub_410D90(v11, v21);
    v20 = v34;
    v21 = v33;
    v31 = v26;
  }
  if ( (a5 | v31) != 0 )
  {
    v22 = v11[(v21 >> 5) + 5] & (1 << v21);
    sub_40F8D0(v11, v20);
    *a7 = 2;
    if ( v22 != 0 )
    {
      v27 = sub_408990(v11);
      v30 = 96;
      v13 = v36[0];
      v11 = v27;
    }
    else
    {
      v13 = v36[0];
      v23 = 80;
      if ( v31 == 0 )
        v23 = v30;
      v30 = v23;
    }
    goto LABEL_30;
  }
LABEL_14:
  sub_4100A0(v11);
  return v16;
}

