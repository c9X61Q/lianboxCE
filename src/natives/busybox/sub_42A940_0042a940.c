// busybox.exe @ 0x42a940 size=1787

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_42A940(_DWORD *a1, char *a2)
{
  int v2; // ecx
  int *v3; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  char v8; // al
  _DWORD *v9; // ebp
  _BYTE *v10; // eax
  char v11; // dl
  char *v12; // eax
  char *v13; // ebp
  char *v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  int *v17; // eax
  _DWORD *v18; // eax
  _DWORD *i; // ebp
  const char *v20; // edi
  int v21; // edi
  int j; // eax
  const char *v23; // eax
  _DWORD *v24; // edi
  _BYTE *v25; // eax
  const char *v26; // eax
  _DWORD *v27; // edi
  const char *v28; // eax
  int v29; // esi
  int v30; // ecx
  char *String; // [esp+0h] [ebp-CCh]
  int v33; // [esp+18h] [ebp-B4h]
  const char *v34; // [esp+1Ch] [ebp-B0h]
  int v35; // [esp+20h] [ebp-ACh]
  _DWORD *v36; // [esp+24h] [ebp-A8h]
  int v37; // [esp+2Ch] [ebp-A0h]
  int v38; // [esp+30h] [ebp-9Ch]
  const char *v39; // [esp+30h] [ebp-9Ch]
  _BYTE *v40; // [esp+38h] [ebp-94h]
  int v41; // [esp+40h] [ebp-8Ch]
  void *v42; // [esp+44h] [ebp-88h]
  int v43; // [esp+48h] [ebp-84h]
  const char *v44; // [esp+4Ch] [ebp-80h]
  int v45; // [esp+50h] [ebp-7Ch] BYREF
  _DWORD v46[2]; // [esp+54h] [ebp-78h] BYREF
  _DWORD v47[2]; // [esp+5Ch] [ebp-70h] BYREF
  char v48[4]; // [esp+64h] [ebp-68h] BYREF
  char **v49; // [esp+68h] [ebp-64h]
  _DWORD v50[24]; // [esp+6Ch] [ebp-60h] BYREF

  v3 = (int *)dword_485FEC;
  v4 = a1[1];
  *(_DWORD *)(dword_485FEC + 376) = v4;
  v5 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 20) = v4;
  if ( dword_473340 != 0 )
    v3[94] = v4 - (dword_473340 - 1);
  v42 = off_473358;
  *(_BYTE *)(v5 + 1) = 0;
  v48[0] = 2;
  v49 = &off_4804F8;
  v47[1] = v47;
  v47[0] = 0;
  v46[1] = v46;
  v46[0] = 0;
  v45 = a1[3];
  v34 = (const char *)sub_42F8B8(v2, &v45);
  if ( v34 != nullptr )
  {
    v34 = nullptr;
    v6 = 0;
    v38 = 0;
    v33 = 0;
    v37 = -1;
    while ( 1 )
    {
      sub_4300CC(v33 | 0x10, v48, v3[52] + 5);
      ++v38;
      if ( v48[0] != 2 )
        break;
      v8 = **v49;
      if ( v37 == -1 )
      {
        v37 = v8 & 1;
        LOBYTE(v7) = **v49;
        v7 = ~v7;
        v38 = v7 & 1;
      }
      v6 = v8 & 4;
      if ( v49 != &off_47E080 )
        break;
      v9 = (_DWORD *)v46[0];
LABEL_10:
      v9 = (_DWORD *)*v9;
      if ( v9 == nullptr )
      {
        v9 = (_DWORD *)sub_42F8B8(v7, &v45);
        if ( v9 == nullptr )
          goto LABEL_25;
      }
      v10 = (_BYTE *)v9[1];
      if ( *v10 == 45 )
      {
        v11 = v10[1];
        if ( v11 != 0 )
        {
          if ( v11 != 45 )
          {
            v12 = v10 + 2;
            while ( v11 == 112 )
            {
              v11 = *v12++;
              v34 = "/bin;/usr/bin";
              if ( v11 == 0 )
                goto LABEL_10;
            }
LABEL_25:
            v33 = 0;
            break;
          }
          if ( v10[2] != 0 || *v9 == 0 && sub_42F8B8(v7, &v45) == 0 )
            goto LABEL_25;
          v9 = (_DWORD *)*v9;
        }
      }
      v46[0] = v9;
      v33 = 4;
    }
    while ( v45 != 0 )
    {
      if ( v6 == 0 || (v13 = *(char **)(v45 + 8), v14 = sub_429934(v13), v13 == v14) || (v15 = 4, *v14 != 61) )
        v15 = 3;
      sub_42DB08(v15);
      v45 = *(_DWORD *)(v45 + 4);
    }
    v16 = (_DWORD *)v46[0];
    v35 = 0;
    while ( v16 != nullptr )
    {
      ++v35;
      v16 = (_DWORD *)*v16;
    }
  }
  else
  {
    v38 = 0;
    v33 = 0;
    v37 = -1;
    v35 = 0;
  }
  v41 = dword_473464;
  if ( v38 != 0 )
  {
    ++*(_DWORD *)(v5 + 56);
    v17 = (int *)sub_4728CC();
    *v17 = v41;
    dword_473464 = (int)v17;
    sub_43B8DC();
  }
  v18 = (_DWORD *)(sub_462C74() + 4);
  v36 = v18;
  for ( i = (_DWORD *)v46[0]; i != nullptr; i = (_DWORD *)*i )
    *v18++ = i[1];
  *v18 = 0;
  if ( *(_BYTE *)(v5 + 66) != 0 && dword_473340 == 0 && v35 != 0 )
    i = (_DWORD *)*(v18 - 1);
  sub_42E40C();
  v43 = sub_4527D4();
  v3[6] = 2;
  if ( *(_BYTE *)(v5 + 71) != 0 )
  {
    v20 = (const char *)sub_43E9A4();
    if ( v20 != nullptr && sub_43C578() != 0 )
      v3[6] = atoi(v20);
  }
  v21 = sub_4599DC();
  if ( v21 != 0 )
    goto LABEL_51;
  for ( j = a1[2]; ; j = *(_DWORD *)(v45 + 4) )
  {
    v45 = j;
    if ( j == 0 )
      break;
    sub_42DB08(4);
    if ( v38 != 0 )
      sub_445250();
    else
      sub_45ECA8();
  }
  if ( *(_BYTE *)(v5 + 71) != 0 )
  {
    v23 = (const char *)sub_42DEE4();
    sub_428FC4(v3[6], (int)"%s", v23);
    v24 = (_DWORD *)v47[0];
    v39 = (const char *)&unk_476425;
    while ( v24 != nullptr )
    {
      v44 = (const char *)v24[1];
      v25 = (_BYTE *)sub_4635B0(v44, 61);
      v40 = &v25[-(*v25 == 0) + 1];
      v26 = (const char *)sub_442458();
      sub_428FC4(v3[6], (int)"%s%.*s%s", v39, v40 - v44, v44, v26);
      v24 = (_DWORD *)*v24;
      v39 = " ";
    }
    v27 = (_DWORD *)v46[0];
    while ( v27 != nullptr )
    {
      if ( sub_430DB0() != 0 )
        v28 = (const char *)sub_460B38();
      else
        v28 = (const char *)sub_442458();
      sub_428FC4(v3[6], (int)"%s%s", v39, v28);
      v27 = (_DWORD *)*v27;
      v39 = " ";
    }
    sub_45C610(1u, "\n");
  }
  if ( v48[0] != 2 || (**v49 & 2) == 0 )
  {
    if ( v34 == nullptr )
      v34 = (const char *)(v3[52] + 5);
    sub_4300CC(v33 | 1, v48, v34);
    if ( v48[0] != 2 )
    {
      if ( v48[0] > 2 )
      {
LABEL_80:
        v29 = -2 - (_DWORD)v49;
        if ( -2 - (int)v49 >= 0 && (v30 = (unsigned __int8)byte_47D760[v29 >> 2], _bittest(&v30, 2 * (v29 & 3))) )
        {
          ++*(_DWORD *)(v5 + 56);
          environ = (char **)sub_43E27C(0);
          *(_BYTE *)dword_485FF0 = sub_45BF60();
          sub_43B8DC();
        }
        else
        {
          if ( ((unsigned __int8)a2 & 1) != 0 )
            sub_460044(v34, v36, v49);
          ++*(_DWORD *)(v5 + 56);
          memset32(v50, (unsigned __int8)a2 & 1, 0x12u);
          v50[10] = 4;
          v50[18] = v36;
          v50[19] = v34;
          v50[14] = v49;
          sub_441E68();
          sub_46174C(0);
        }
        goto LABEL_91;
      }
      if ( v48[0] != -1 )
      {
        if ( v48[0] != 1 )
          goto LABEL_80;
        if ( sub_42B0F4(a2) == 0 )
        {
LABEL_91:
          v21 = sub_46DAE0();
          sub_431550();
          goto LABEL_92;
        }
LABEL_89:
        longjmp(*(int **)(v5 + 52), 1);
      }
      sub_431174();
      v21 = 127;
LABEL_51:
      *(_BYTE *)v5 = v21;
      if ( v37 == 1 )
        sub_453074();
LABEL_92:
      if ( a1[4] == 0 )
        goto LABEL_94;
      do
      {
        sub_44D900(String);
LABEL_94:
        ;
      }
      while ( v43 != *(_DWORD *)(dword_485FEC + 20) );
      while ( v42 != off_473358 )
        sub_44D8A4();
      sub_46A8EC();
      if ( i != nullptr )
        sub_45EC2C();
      return v21;
    }
  }
  String = a2;
  if ( sub_42A6DC((int)v49, v36) == 0 || *(_BYTE *)(v5 + 61) == 1 && v37 != 1 )
    goto LABEL_91;
  goto LABEL_89;
}

