// busybox.exe @ 0x448d0c size=1741

_BYTE *sub_448D0C()
{
  int v0; // edi
  _BYTE *v1; // ebx
  _BYTE *v2; // ebp
  int v3; // esi
  int v4; // esi
  int *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // ebp
  int v10; // esi
  int *v11; // ebp
  int v12; // eax
  int v13; // eax
  int *v14; // ebp
  int *v15; // edi
  int v16; // eax
  int v17; // eax
  char *v18; // edx
  char *Str2; // esi
  int *v20; // edx
  char *v21; // eax
  unsigned int v22; // eax
  char v23; // cl
  int v24; // eax
  char *v25; // esi
  _BYTE **v26; // eax
  int *v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v32; // [esp+14h] [ebp-3Ch]
  char v33; // [esp+14h] [ebp-3Ch]
  int v34; // [esp+18h] [ebp-38h]
  char v35; // [esp+1Fh] [ebp-31h]
  int *v36; // [esp+20h] [ebp-30h]
  int v37; // [esp+24h] [ebp-2Ch]
  int v38; // [esp+2Ch] [ebp-24h] BYREF
  int v39; // [esp+30h] [ebp-20h] BYREF
  int v40; // [esp+34h] [ebp-1Ch] BYREF
  int v41; // [esp+38h] [ebp-18h] BYREF
  int v42; // [esp+3Ch] [ebp-14h] BYREF

  v39 = 0;
  v0 = *((_DWORD *)off_473358 + 1);
  switch ( sub_458374() )
  {
    case 2:
    case 3:
    case 22:
      byte_4735A8 = 1;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v37 = *((_DWORD *)off_473358 + 1);
      v33 = 0;
      v35 = 0;
      v34 = 1;
      v14 = &v42;
      v36 = &v41;
      v1 = nullptr;
      v15 = &v40;
      do
      {
LABEL_50:
        while ( 2 )
        {
          while ( 2 )
          {
            byte_473198 = v34;
            v16 = sub_458374();
            if ( v16 == 22 )
            {
              v17 = sub_458374();
              byte_4735A8 = 1;
              if ( v17 == 3 )
              {
                v33 = 1;
                continue;
              }
              goto LABEL_3;
            }
            break;
          }
          if ( v16 > 22 )
            goto LABEL_93;
          if ( v16 == 9 )
            goto LABEL_82;
          if ( v16 > 7 )
            goto LABEL_93;
          if ( v16 > 5 )
          {
            if ( v35 == 0 )
              goto LABEL_93;
            v18 = (char *)&unk_4767E8;
            if ( v16 != 6 )
              v18 = (char *)&unk_4767EB;
            dword_4735D0 = v18;
          }
          else
          {
            if ( v16 == 2 )
            {
              v1 = (_BYTE *)dword_473570;
              *v14 = dword_473570;
              v14 = (int *)(v1 + 4);
              sub_44B858();
              continue;
            }
            if ( v16 != 3 )
              goto LABEL_93;
          }
          break;
        }
        v1 = (_BYTE *)sub_463A54();
        *v1 = 15;
        Str2 = dword_4735D0;
        *((_DWORD *)v1 + 2) = dword_4735D0;
        if ( strcmp("[[", Str2) == 0 )
        {
          v35 = 1;
        }
        else if ( strcmp("]]", Str2) == 0 )
        {
          v35 = 0;
        }
        *((_DWORD *)v1 + 3) = dword_473114;
        v20 = (int *)(v1 + 4);
        if ( v34 != 0 && (v21 = sub_429934(Str2), v20 = (int *)(v1 + 4), Str2 != v21) && *v21 == 61 )
        {
          *v36 = (int)v1;
          v36 = (int *)(v1 + 4);
        }
        else
        {
          *v15 = (int)v1;
          v15 = v20;
          v34 = 0;
        }
      }
      while ( v33 == 0 );
      byte_473198 = 6;
      v22 = sub_458374();
      v23 = v22;
      byte_4735A8 = 1;
      if ( v22 > 0x1C )
        goto LABEL_3;
      v24 = 1 << v22;
      if ( ((1 << v23) & 0x1CA04000) == 0 )
      {
        if ( (v24 & 0x200) != 0 )
        {
          v33 = 0;
          goto LABEL_50;
        }
        if ( (v24 & 8) == 0 || strcmp("[[", dword_4735D0) != 0 )
          goto LABEL_3;
      }
LABEL_82:
      if ( v40 == 0 || v15 != (int *)(v40 + 4) || v41 != 0 || v42 != 0 )
      {
LABEL_93:
        byte_4735A8 = 1;
        *v15 = 0;
        *v36 = 0;
        *v14 = 0;
        v1 = (_BYTE *)sub_463A54();
        *((_DWORD *)v1 + 1) = v37;
        *((_DWORD *)v1 + 3) = v40;
        *((_DWORD *)v1 + 2) = v41;
        *((_DWORD *)v1 + 4) = v42;
      }
      else
      {
        if ( v33 == 0 && sub_458374() != 10 )
          goto LABEL_3;
        v25 = *((char **)v1 + 2);
        if ( *sub_429934(v25) != 0
          || (v26 = (_BYTE **)bsearch(v25, &off_47E040, 0x28u, 8u, sub_4526FC)) != nullptr && (**v26 & 1) != 0 )
        {
LABEL_89:
          sub_452FB4();
        }
        *v1 = 14;
        byte_473198 = 7;
        *((_DWORD *)v1 + 1) = *((_DWORD *)off_473358 + 1);
        *((_DWORD *)v1 + 3) = sub_448D0C();
      }
      break;
    case 9:
      v1 = (_BYTE *)sub_463A54();
      *v1 = 4;
      *((_DWORD *)v1 + 1) = v0;
      *((_DWORD *)v1 + 2) = sub_43E060(0);
      v4 = 10;
      goto LABEL_94;
    case 14:
      v1 = (_BYTE *)sub_463A54();
      *v1 = 12;
      *((_DWORD *)v1 + 1) = v0;
      if ( sub_458374() != 3 )
        goto LABEL_3;
      v8 = sub_463A54();
      *((_DWORD *)v1 + 2) = v8;
      *(_BYTE *)v8 = 15;
      *(_DWORD *)(v8 + 8) = dword_4735D0;
      *(_DWORD *)(v8 + 12) = dword_473114;
      byte_473198 = 7;
      if ( sub_458374() != 24 )
        goto LABEL_3;
      v9 = (int *)(v1 + 12);
      while ( 2 )
      {
        byte_473198 = 6;
        if ( sub_458374() == 19 )
          break;
        if ( byte_473450 == 9 )
          sub_458374();
        v10 = sub_463A54();
        *v9 = v10;
        *(_BYTE *)v10 = 13;
        v11 = (int *)(v10 + 8);
        while ( 1 )
        {
          v12 = sub_463A54();
          v38 = v12;
          *v11 = v12;
          *(_BYTE *)v12 = 15;
          *(_DWORD *)(v12 + 8) = dword_4735D0;
          *(_DWORD *)(v12 + 12) = dword_473114;
          v32 = v12;
          if ( sub_458374() != 8 )
            break;
          v11 = (int *)(v32 + 4);
          sub_458374();
        }
        if ( byte_473450 != 10 )
          goto LABEL_3;
        *(_DWORD *)(v10 + 12) = sub_43E060(2);
        v9 = (int *)(v10 + 4);
        byte_473198 = 6;
        v13 = sub_458374();
        if ( v13 != 19 )
        {
          if ( v13 != 11 )
            goto LABEL_3;
          continue;
        }
        break;
      }
      *v9 = 0;
      goto LABEL_95;
    case 21:
      if ( sub_458374() != 3 || byte_473568 != 0 || *sub_429934(dword_4735D0) != 0 )
        goto LABEL_89;
      v1 = (_BYTE *)sub_463A54();
      *v1 = 11;
      *((_DWORD *)v1 + 1) = v0;
      *((_DWORD *)v1 + 4) = dword_4735D0;
      byte_473198 = 7;
      if ( sub_458374() == 24 )
      {
        v5 = &v38;
        while ( sub_458374() == 3 )
        {
          v6 = sub_463A54();
          *(_BYTE *)v6 = 15;
          *(_DWORD *)(v6 + 8) = dword_4735D0;
          *(_DWORD *)(v6 + 12) = dword_473114;
          *v5 = v6;
          v5 = (int *)(v6 + 4);
        }
        *v5 = 0;
        *((_DWORD *)v1 + 2) = v38;
        if ( byte_473450 != 1 && byte_473450 != 4 )
          goto LABEL_3;
      }
      else
      {
        v7 = sub_463A54();
        *(_BYTE *)v7 = 15;
        *(_DWORD *)(v7 + 8) = &unk_47F8A0;
        *((_DWORD *)v1 + 2) = v7;
        if ( byte_473450 != 4 )
          byte_4735A8 = 1;
      }
      byte_473198 = 7;
      if ( sub_458374() != 15 )
        goto LABEL_3;
      *((_DWORD *)v1 + 3) = sub_43E060(0);
LABEL_30:
      v4 = 16;
      goto LABEL_94;
    case 23:
      v1 = (_BYTE *)sub_463A54();
      *v1 = 8;
      *((_DWORD *)v1 + 1) = sub_43E060(0);
      if ( sub_458374() != 25 )
        goto LABEL_3;
      *((_DWORD *)v1 + 2) = sub_43E060(0);
      v2 = v1;
      while ( 2 )
      {
        if ( sub_458374() == 17 )
        {
          v3 = sub_463A54();
          *((_DWORD *)v2 + 3) = v3;
          *(_BYTE *)v3 = 8;
          *(_DWORD *)(v3 + 4) = sub_43E060(0);
          if ( sub_458374() == 25 )
          {
            *(_DWORD *)(v3 + 8) = sub_43E060(0);
            v2 = (_BYTE *)v3;
            continue;
          }
LABEL_3:
          sub_452FDC();
        }
        break;
      }
      if ( byte_473450 == 18 )
      {
        *((_DWORD *)v2 + 3) = sub_43E060(0);
      }
      else
      {
        *((_DWORD *)v2 + 3) = 0;
        byte_4735A8 = 1;
      }
      v4 = 20;
LABEL_94:
      if ( sub_458374() != v4 )
        goto LABEL_3;
LABEL_95:
      byte_473198 = 3;
      v27 = &v39;
      while ( sub_458374() == 2 )
      {
        v28 = dword_473570;
        *v27 = dword_473570;
        v27 = (int *)(v28 + 4);
        sub_44B858();
      }
      byte_4735A8 = 1;
      *v27 = 0;
      v29 = v39;
      if ( v39 != 0 )
      {
        if ( *v1 != 4 )
        {
          v30 = sub_463A54();
          *(_BYTE *)v30 = 2;
          *(_DWORD *)(v30 + 4) = v0;
          *(_DWORD *)(v30 + 8) = v1;
          v1 = (_BYTE *)v30;
        }
        *((_DWORD *)v1 + 3) = v29;
      }
      break;
    case 26:
    case 27:
      v1 = (_BYTE *)sub_463A54();
      *v1 = (byte_473450 != 27) + 9;
      *((_DWORD *)v1 + 1) = sub_43E060(0);
      if ( sub_458374() != 15 )
        goto LABEL_3;
      *((_DWORD *)v1 + 2) = sub_43E060(0);
      goto LABEL_30;
    case 28:
      v1 = sub_43E060(0);
      v4 = 29;
      goto LABEL_94;
    default:
      goto LABEL_3;
  }
  return v1;
}

