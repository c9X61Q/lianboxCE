// busybox.exe @ 0x463bc0 size=1427

_BYTE *__usercall sub_463BC0@<eax>(char *a1@<eax>, char *a2@<edx>, int a3@<ecx>, int a4, char a5, __int16 a6)
{
  char *v8; // edi
  char v9; // al
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  char *v14; // esi
  const char *v15; // eax
  _BYTE *v16; // ebp
  char *v17; // eax
  char *v18; // edi
  int v19; // ebx
  __int64 v20; // kr00_8
  unsigned int v21; // edi
  char *i; // eax
  char *v23; // eax
  bool j; // zf
  char v25; // dl
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // edi
  int v29; // esi
  char *v30; // ebx
  int v31; // esi
  int *v32; // ecx
  char *v33; // ebp
  int v34; // esi
  unsigned int v35; // eax
  _BYTE *v36; // edx
  char *k; // esi
  char v38; // al
  int v39; // ebp
  int v40; // eax
  int v41; // ebx
  int v42; // edi
  void *v43; // edx
  char *v44; // eax
  size_t Size; // ebp
  int v47; // [esp+18h] [ebp-4Ch]
  int v48; // [esp+1Ch] [ebp-48h]
  char *v49; // [esp+20h] [ebp-44h]
  int v50; // [esp+24h] [ebp-40h]
  int v51; // [esp+28h] [ebp-3Ch]
  int v52; // [esp+28h] [ebp-3Ch]
  char *v54; // [esp+34h] [ebp-30h]
  char *v55; // [esp+38h] [ebp-2Ch]
  _BYTE *v56; // [esp+3Ch] [ebp-28h]
  int v57; // [esp+40h] [ebp-24h]
  int v58; // [esp+44h] [ebp-20h]
  int v59; // [esp+48h] [ebp-1Ch]
  int v60; // [esp+4Ch] [ebp-18h]
  int v61; // [esp+50h] [ebp-14h] BYREF

  v48 = a5 & 0xF;
  v8 = nullptr;
  if ( (unsigned int)(v48 - 13) <= 1 )
  {
    v8 = a1;
    if ( *a1 == 47 )
      v8 = a1 + 1;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == 0 )
        break;
      if ( v9 == 47 )
      {
        *v8 = 0;
        goto LABEL_11;
      }
      if ( v9 == -127 )
        v8 += -(v8[1] == 0) + 1;
      ++v8;
    }
    v8 = nullptr;
  }
LABEL_11:
  if ( a2 != nullptr || v48 == 12 )
    v10 = a6 & 0x400 | 2;
  else
    v10 = a6 & 0x400 | 0x12;
  v56 = sub_4148CC(a1, v10);
  v61 = -1;
  if ( v8 != nullptr )
  {
    v61 = dword_473334 - (*(_DWORD *)(dword_485FF4 + 4) + a3);
    dword_473334 = (int)sub_411E88(47, (_BYTE *)dword_473334);
    v56 = sub_4148CC(v8 + 1, a6 & 0x400 | 2);
    *v8 = 47;
  }
  if ( (a6 & 0x400) == 0 )
  {
    v47 = a6 & 0x11;
    v12 = dword_485FF4;
    v13 = *(_DWORD *)(dword_485FF4 + 4);
    v14 = (char *)(v13 + a4);
    if ( v48 == 12 )
    {
      v16 = (_BYTE *)(v13 + a3);
      v17 = strchr((const char *)(v13 + a3), 58);
      v18 = v17;
      if ( v17 != nullptr )
        *v17 = 0;
      v20 = sub_4154C4();
      v19 = v20;
      if ( v18 != nullptr )
        *v18 = 58;
      v21 = a3 - a4 - 1;
      if ( (a6 & 0x11) != 0 )
      {
        for ( i = v14; i < v16 - 1; ++i )
        {
          if ( *i == -127 )
          {
            ++i;
            --v21;
          }
        }
      }
      v23 = v16 + 1;
      for ( j = *v16 == 58; !j; j = v25 == 58 )
      {
        v25 = *v23++;
        if ( v25 == 0 )
        {
          LODWORD(v26) = v21;
          goto LABEL_48;
        }
      }
      v26 = sub_4154C4();
      if ( SHIDWORD(v26) < ((unsigned int)v26 < 0x80000000) - 1 )
        v26 = 0xFFFFFFFF80000000uLL;
      if ( v26 > 0x7FFFFFFF )
        LODWORD(v26) = 0x7FFFFFFF;
LABEL_48:
      v27 = HIDWORD(v20);
      if ( SHIDWORD(v20) < ((unsigned int)v20 < 0x80000000) - 1 )
      {
        v19 = 0x80000000;
        v27 = -1;
      }
      if ( __SPAIR64__(v27, v19) > 0x7FFFFFFF )
        v19 = 0x7FFFFFFF;
      if ( v19 < 0 )
        v19 += v21;
      if ( v19 >= v21 )
      {
        v19 = 0;
        LODWORD(v26) = 0;
      }
      else if ( (int)v26 < 0 )
      {
        LODWORD(v26) = v21 - v19 + v26;
      }
      v28 = v21 - v19;
      if ( v28 < (unsigned int)v26 )
        LODWORD(v26) = v28;
      HIDWORD(v26) = v14;
      while ( v19 != 0 )
      {
        if ( (a6 & 0x11) != 0 && *(_BYTE *)HIDWORD(v26) == 0x81 )
          ++HIDWORD(v26);
        ++HIDWORD(v26);
        --v19;
      }
      while ( (_DWORD)v26 != 0 )
      {
        if ( (a6 & 0x11) != 0 && *(_BYTE *)HIDWORD(v26) == 0x81 )
        {
          ++HIDWORD(v26);
          *v14++ = -127;
        }
        *v14 = *(_BYTE *)HIDWORD(v26);
        LODWORD(v26) = v26 - 1;
        ++HIDWORD(v26);
        ++v14;
      }
    }
    else
    {
      if ( (a5 & 0xFu) <= 0xC )
      {
        if ( v48 == 4 )
        {
          v15 = (const char *)(dword_485FF0 + 62);
          if ( v14 != nullptr )
          {
            if ( *a1 == -125 )
            {
              v14 = "parameter not set";
              if ( (a5 & 0x10) != 0 )
                v15 = " or null";
            }
          }
          else
          {
            v14 = "parameter not set";
          }
          sub_415B40(v11, "%.*s: %s%s", a1 - a2 - 1, a2, v14, v15);
        }
        if ( v48 == 5 )
        {
          sub_45EC2C(a2, (const char *)(v13 + a4));
          goto LABEL_123;
        }
      }
      v59 = dword_473334 - v13;
      v50 = 0;
      while ( 1 )
      {
LABEL_73:
        v29 = *(_DWORD *)(v12 + 4);
        dword_473334 = v29 + v59;
        v30 = (char *)(v29 + a4);
        v31 = a3 + v29;
        v49 = v30;
        if ( (a6 & 0x11) != 0 )
        {
          v49 = sub_45B26C(v30, 9, nullptr);
          if ( v30 != v49 )
          {
            v31 = dword_473334;
            v30 = (char *)(a4 + *(_DWORD *)(v12 + 4));
          }
        }
        v32 = nullptr;
        if ( v50 == 0 )
        {
          v32 = nullptr;
          if ( v61 >= 0 )
            v32 = &v61;
        }
        v54 = (char *)(v31 - 1);
        v33 = (char *)(*(_DWORD *)(v12 + 4) + a3);
        sub_45B26C(v33, 2, v32);
        if ( (unsigned int)(v48 - 13) > 1 )
          break;
        v57 = dword_473334;
        v58 = *(_DWORD *)(v12 + 4);
        if ( v50 == 0 )
        {
          if ( v61 >= 0 )
          {
            v50 = (int)&v33[v61 + 1];
            v33[v61] = 0;
          }
          else
          {
            v50 = dword_485FF0 + 62;
          }
        }
        if ( *v33 == 0 )
          goto LABEL_124;
        v55 = v33 - 1;
        v34 = 0;
        while ( 1 )
        {
          if ( v30 >= v55 )
            goto LABEL_115;
LABEL_87:
          v35 = sub_45CB78((unsigned int)v30, (int)v49, v54, (int)v33, v47, 1);
          if ( v35 == 0 )
            break;
          if ( v48 == 14 )
          {
            while ( (unsigned int)v30 < v35 )
            {
              if ( (a6 & 0x11) != 0 && *v30 == -127 )
                ++v30;
              ++v30;
              ++v49;
            }
          }
          else
          {
            v30 = (char *)v35;
          }
          v52 = v34;
          for ( k = (char *)v50; *k != 0; ++k )
          {
            v60 = *(_DWORD *)(v12 + 4);
            if ( (a6 & 0x11) != 0 && *k == 92 )
            {
              dword_473334 = (int)sub_411E88(129, (_BYTE *)dword_473334);
              ++v52;
            }
            dword_473334 = (int)sub_411E88(*k, (_BYTE *)dword_473334);
            if ( *(_DWORD *)(v12 + 4) != v60 )
              goto LABEL_73;
            ++v52;
          }
          v34 = v52;
          if ( v48 == 13 )
          {
            while ( 1 )
            {
              v38 = v30[v34 - v52];
              if ( v38 == 0 )
                break;
              v39 = *(_DWORD *)(v12 + 4);
              dword_473334 = (int)sub_411E88(v38, (_BYTE *)dword_473334);
              if ( *(_DWORD *)(v12 + 4) != v39 )
                goto LABEL_73;
              ++v34;
            }
LABEL_115:
            sub_411E88(0, (_BYTE *)dword_473334);
            v40 = *(_DWORD *)(v12 + 4);
            v41 = v40 + a4;
            memmove((void *)(v40 + a4), (const void *)(v57 - v58 + v40), v34 + 1);
            v14 = (char *)(v41 + v34);
            goto LABEL_123;
          }
        }
        v51 = *(_DWORD *)(v12 + 4);
        while ( 1 )
        {
          v36 = sub_411E88(*v30, (_BYTE *)dword_473334);
          dword_473334 = (int)v36;
          if ( (a6 & 0x11) != 0 && *v30 == -127 )
          {
            ++v34;
            dword_473334 = (int)sub_411E88(*++v30, v36);
          }
          if ( *(_DWORD *)(v12 + 4) != v51 )
            break;
          ++v30;
          ++v34;
          if ( v55 <= v30 )
            goto LABEL_115;
          ++v49;
          if ( *v33 != 42 )
            goto LABEL_87;
        }
      }
      v42 = (v48 - 6) >> 1;
      v43 = sub_45CB14;
      if ( ((v48 - 6) & 1) == v42 )
        v43 = sub_45CB78;
      v44 = ((_BYTE *(__cdecl *)(_BYTE *, char *, int, int, int, int))v43)(
              v30,
              v49,
              (int)v54,
              (int)v33,
              v47,
              (v48 - 6) >> 1);
      v14 = v44;
      if ( v44 == nullptr )
      {
        v14 = v33 - 1;
LABEL_123:
        dword_473334 = (int)v14;
LABEL_124:
        sub_45A7E4(a4);
        return v56;
      }
      if ( v42 != 0 )
      {
        Size = v33 - v44;
        memmove(v30, v44, Size);
        v14 = &v30[Size - 1];
      }
    }
    *v14 = 0;
    goto LABEL_123;
  }
  return v56;
}

