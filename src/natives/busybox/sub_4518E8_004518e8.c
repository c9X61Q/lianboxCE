// busybox.exe @ 0x4518e8 size=1140

int __usercall sub_4518E8@<eax>(int *a1@<eax>, int *a2@<edx>, __int128 *a3@<ecx>)
{
  void *v4; // edx
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ebx
  int v14; // ebp
  int v15; // ecx
  void *v16; // edx
  int v17; // ebp
  int v18; // eax
  int v19; // ebx
  int *v20; // esi
  int v21; // ecx
  int v22; // edx
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  void *v32; // edx
  void *v33; // edx
  void *v34; // edx
  void *v35; // edx
  unsigned __int64 v37; // [esp+0h] [ebp-B0h]
  int v39; // [esp+14h] [ebp-9Ch]
  int v40; // [esp+18h] [ebp-98h]
  int v41; // [esp+1Ch] [ebp-94h]
  int i; // [esp+1Ch] [ebp-94h]
  int v43; // [esp+20h] [ebp-90h]
  int v45; // [esp+28h] [ebp-88h]
  unsigned int v46; // [esp+2Ch] [ebp-84h]
  __int128 v47; // [esp+40h] [ebp-70h] BYREF
  _DWORD v48[3]; // [esp+50h] [ebp-60h] BYREF
  int v49; // [esp+5Ch] [ebp-54h]
  int v50[2]; // [esp+60h] [ebp-50h] BYREF
  int v51; // [esp+68h] [ebp-48h]
  int v52; // [esp+6Ch] [ebp-44h]
  int v53[3]; // [esp+70h] [ebp-40h] BYREF
  int v54; // [esp+7Ch] [ebp-34h]
  int v55[3]; // [esp+80h] [ebp-30h] BYREF
  _DWORD *v56; // [esp+8Ch] [ebp-24h]
  _QWORD v57[4]; // [esp+90h] [ebp-20h] BYREF

  sub_451864(&v47, a2[1], (int)a3);
  v5 = -9;
  if ( *a2 != 0 )
  {
    if ( sub_451098(a1, a2) == -1 )
    {
      sub_4510E4(a1, &v47);
LABEL_37:
      if ( DWORD2(v47) == a2[2] )
      {
        *(_OWORD *)v57 = v47;
        v47 = *a3;
        *a3 = *(_OWORD *)v57;
        v5 = 0;
      }
      else
      {
        v5 = sub_450FC4((int)&v47, (int)a2, (int)a3);
      }
      goto LABEL_40;
    }
    sub_451864(v55, a1[1], v6);
    sub_451864(v57, 3, v7);
    sub_451864(v50, a1[1], v8);
    sub_4510E4(a1, v50);
    sub_451864(v53, 3 * *a2, v9);
    sub_4510E4(a2, v53);
    v53[2] = 0;
    v51 = 0;
    v10 = sub_451138(v53);
    v11 = 32;
    v12 = v10 % 32;
    v40 = 0;
    if ( v10 % 32 != 31 )
    {
      v40 = 31 - v12;
      sub_451FB4(v50, 31 - v12);
      sub_451FB4(v53, v40);
    }
    v41 = v50[0];
    v13 = v53[0];
    v39 = v50[0] - v53[0];
    v14 = v50[0] - v53[0] + 1;
    sub_451864(v48, v14, v11);
    v48[0] = v14;
    sub_451890(v53, v39, v15);
    while ( sub_451074((int)v50, (int)v53) != -1 )
    {
      ++*(_DWORD *)(4 * v39 + v49);
      v5 = sub_4525E0();
      if ( v5 != 0 )
        goto LABEL_35;
    }
    v17 = v41 - 1;
    v45 = v13 - 1;
    sub_4523A8();
    v43 = 4 * (v13 - 1);
    for ( i = v41 - 1 - v13; ; --i )
    {
      v18 = v50[0];
      if ( v45 >= v17 )
        break;
      if ( v17 <= v50[0] )
      {
        v19 = 4 * v17;
        v46 = *(_DWORD *)(v54 + v43);
        v20 = (int *)(v49 + 4 * i);
        if ( *(_DWORD *)(v52 + 4 * v17) == v46 )
        {
          *v20 = -1;
        }
        else
        {
          LODWORD(v37) = *(_DWORD *)(v52 + v19 - 4);
          HIDWORD(v37) = *(_DWORD *)(v52 + 4 * v17);
          *v20 = sub_4026E0(v37, v46, 0);
        }
        ++*v20;
        do
        {
          --*(_DWORD *)(v49 + 4 * i);
          sub_4526C8();
          v21 = 0;
          v22 = v54;
          if ( v45 > 0 )
            v21 = *(_DWORD *)(v54 + v43 - 4);
          v23 = v56;
          *v56 = v21;
          v23[1] = *(_DWORD *)(v22 + v43);
          v55[0] = 2;
          ((void (*)(void))sub_452224)();
          v24 = 0;
          v25 = v52;
          if ( v17 > 1 )
            v24 = *(_DWORD *)(v52 + v19 - 8);
          v26 = HIDWORD(v57[1]);
          *(_DWORD *)HIDWORD(v57[1]) = v24;
          v27 = 0;
          if ( v17 > 0 )
            v27 = *(_DWORD *)(v25 + 4 * v17 - 4);
          *(_DWORD *)(v26 + 4) = v27;
          *(_DWORD *)(v26 + 8) = *(_DWORD *)(v25 + 4 * v17);
          LODWORD(v57[0]) = 3;
        }
        while ( sub_451098(v55, (int *)v57) == 1 );
        sub_452224(v55, *(_DWORD *)(v49 + 4 * i));
        sub_451890(v55, i, v28);
        v5 = sub_4525E0();
        if ( v5 != 0 )
          goto LABEL_35;
        if ( v51 == 1 )
        {
          sub_4510E4(v53, v55);
          sub_451890(v55, i, v29);
          v5 = sub_450FC4((int)v50, (int)v55, (int)v50);
          if ( v5 != 0 )
            goto LABEL_35;
          --*(_DWORD *)(v49 + 4 * i);
        }
      }
      --v17;
    }
    if ( v50[0] != 0 )
      v18 = a1[2];
    v51 = v18;
    sub_45115C(v50, v40, v50);
    v30 = *a2;
    v31 = v52;
    while ( v30 < v50[0] )
      *(_DWORD *)(v31 + 4 * v30++) = 0;
    sub_45100C(v50);
    sub_4510E4(v50, &v47);
    v5 = 0;
LABEL_35:
    sub_45102C(v48, v16);
    sub_45102C(v53, v32);
    sub_45102C(v50, v33);
    sub_45102C(v57, v34);
    sub_45102C(v55, v35);
    if ( v5 == 0 )
      goto LABEL_37;
  }
LABEL_40:
  sub_45102C(&v47, v4);
  return v5;
}

