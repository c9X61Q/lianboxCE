// busybox.exe @ 0x42c608 size=975

__int64 __usercall sub_42C608@<edx:eax>(const char **a1@<eax>)
{
  size_t v1; // eax
  int v2; // ecx
  void *v3; // esp
  int v4; // edx
  int v5; // ecx
  void *v6; // esp
  char v7; // si
  char *v8; // eax
  const char *v9; // eax
  char *v10; // eax
  char *v11; // ebx
  void *v12; // esp
  __int64 *v13; // eax
  char *v14; // ebx
  unsigned __int64 v15; // rax
  char *v16; // esi
  int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // eax
  __int64 *v21; // eax
  char v22; // al
  char v23; // bl
  const char *v24; // edx
  char *v25; // ecx
  const char *i; // eax
  const char *v27; // edx
  char *v28; // ecx
  char v29; // dl
  unsigned __int8 v30; // al
  char Stra; // [esp+0h] [ebp-48h]
  char Strb; // [esp+0h] [ebp-48h]
  char Str; // [esp+0h] [ebp-48h]
  unsigned int v35; // [esp+Ch] [ebp-3Ch]
  __int64 v36; // [esp+10h] [ebp-38h] BYREF
  __int64 *v37; // [esp+18h] [ebp-30h]
  const char **v38; // [esp+1Ch] [ebp-2Ch]
  char *v39; // [esp+20h] [ebp-28h]
  const char *v40; // [esp+24h] [ebp-24h]
  unsigned __int64 v41; // [esp+28h] [ebp-20h] BYREF
  __int64 *v42; // [esp+30h] [ebp-18h]
  char *v43; // [esp+34h] [ebp-14h] BYREF
  __int64 *v44; // [esp+38h] [ebp-10h] BYREF

  v38 = a1;
  v39 = (char *)sub_460FB8();
  v43 = v39;
  v1 = strlen(v39);
  v3 = alloca(sub_4115D8(24 * ((v1 + 2) >> 1) + 12, v2, Stra));
  v44 = &v36;
  v6 = alloca(sub_4115D8(4 * ((unsigned int)(v4 + 17) >> 2), v5, Strb));
  v37 = &v36;
  v42 = (__int64 *)((char *)&v36 + 1);
  LOBYTE(v36) = 0;
  v7 = 0;
  while ( 1 )
  {
LABEL_2:
    while ( 1 )
    {
      v8 = (char *)sub_460FB8();
      v43 = v8;
      if ( *v8 == 0 )
        break;
      LOBYTE(v41) = *v8;
      v10 = sub_429934(v8);
      v11 = v10;
      if ( v43 != v10 )
      {
        v12 = alloca(sub_4115D8(4 * ((unsigned int)(v10 - v43 + 16) >> 2), v10 - v43 + 1, Str));
        *((_DWORD *)v44 + 5) = &v36;
        sub_45C5AC();
        v43 = v11;
        goto LABEL_12;
      }
      if ( (unsigned __int8)(v41 - 48) > 9u )
      {
        if ( v7 != 20 || *((_DWORD *)v44 - 1) != 0 || (v22 = *v43, ((*v43 - 43) & 0xFD) != 0) || v22 != v43[1] )
        {
          v24 = "<<=";
LABEL_38:
          v25 = v11;
          for ( i = v24; *i != 0; ++i )
          {
            if ( *i != *v25 )
            {
              do
                v27 = i++;
              while ( *i != 0 );
              v24 = v27 + 3;
              if ( i[2] == 0 )
                goto LABEL_80;
              goto LABEL_38;
            }
            ++v25;
          }
          v43 = v25;
          v23 = i[1];
          if ( (unsigned __int8)(v7 - 19) <= 1u || v7 == 51 )
          {
            v7 = 20;
          }
          else if ( v23 == 51 )
          {
            v23 = 50;
          }
          else if ( (unsigned __int8)v23 <= 0x33u )
          {
            if ( v23 == 45 )
            {
              v23 = 17;
            }
            else if ( (unsigned __int8)v23 <= 0x2Du )
            {
              if ( v23 == 13 )
              {
                v23 = 49;
              }
              else if ( v23 == 19 )
              {
                v23 = 18;
              }
            }
          }
        }
        else
        {
          v23 = v22 != 43 ? 45 : 13;
          ++v43;
        }
        LOBYTE(v41) = v23 & 0x1F;
        if ( (unsigned __int8)((v23 & 0x1F) - 1) <= 0xEu || (_BYTE)v41 == 20 )
        {
          if ( v7 != 20 )
            goto LABEL_80;
          while ( 1 )
          {
            v28 = (char *)v42;
            if ( v42 == v37 )
              break;
            v42 = (__int64 *)((char *)v42 - 1);
            v29 = *(_BYTE *)v42;
            if ( v23 == 52 )
            {
              if ( v29 == 0 )
                goto LABEL_2;
            }
            else
            {
              v30 = v29 & 0x1F;
              if ( (_BYTE)v41 == 3 )
              {
                if ( v30 == 3 )
                  goto LABEL_79;
                LOBYTE(v41) = 2;
              }
              else if ( v30 == 3 )
              {
                v30 = 2;
              }
              if ( v30 < (unsigned __int8)v41
                || v30 == (_BYTE)v41 && ((((_BYTE)v41 - 2) & 0xFD) == 0 || (_BYTE)v41 == 15) )
              {
                goto LABEL_79;
              }
            }
            v9 = sub_414E2C((int)v38, v29, &v36, &v44);
            if ( v9 != nullptr )
              goto LABEL_81;
          }
          if ( v23 == 52 )
            goto LABEL_80;
        }
        else
        {
          v28 = (char *)v42;
        }
LABEL_79:
        v42 = (__int64 *)(v28 + 1);
        *v28 = v23;
        v7 = v23;
      }
      else
      {
        *((_DWORD *)v44 + 5) = 0;
        *_errno() = 0;
        v14 = v43;
        LODWORD(v36) = v44;
        v15 = sub_4044E0(v43, &v43, 0);
        HIDWORD(v36) = HIDWORD(v15);
        v40 = (const char *)v15;
        if ( *v43 == 35 && (unsigned __int8)(*v14 - 49) <= 8u )
        {
          v41 = v15 - 2;
          if ( v15 - 2 <= 0x3E )
          {
            v35 = v15;
            v16 = v43 + 1;
            v41 = 0;
            while ( 1 )
            {
              v17 = (unsigned __int8)*v16;
              v18 = v17 - 48;
              if ( (unsigned int)(v17 - 58) <= 0x40 )
              {
                v19 = (unsigned __int8)v17 | 0x20;
                v18 = v19 - 87;
                if ( (unsigned __int8)v17 <= 0x5Fu && v35 > 0x24 )
                {
                  if ( (_BYTE)v17 == 95 )
                  {
                    v18 = 63;
                  }
                  else if ( (_BYTE)v17 == 64 )
                  {
                    v18 = 62;
                  }
                  else
                  {
                    if ( v18 > 0x23 )
                      break;
                    v18 = v19 - 61;
                  }
                }
              }
              if ( v35 <= v18 )
                break;
              v41 = __PAIR64__(HIDWORD(v36), (unsigned int)v40) * v41 + v18;
              ++v16;
            }
            v43 = v16;
            HIDWORD(v36) = HIDWORD(v41);
            v40 = (const char *)v41;
          }
        }
        v20 = v36;
        *(_DWORD *)v36 = v40;
        *(_DWORD *)(v20 + 4) = HIDWORD(v36);
        if ( *_errno() != 0 )
        {
          v21 = v44;
          *(_DWORD *)v44 = 0;
          *((_DWORD *)v21 + 1) = 0;
        }
LABEL_12:
        v13 = v44;
        *((_BYTE *)v44 + 16) = 0;
        v44 = v13 + 3;
        v7 = 20;
      }
    }
    if ( v39 == v8 )
    {
      v36 = 0;
      v9 = nullptr;
      goto LABEL_82;
    }
    if ( v8 == (char *)&unk_480607 )
      break;
    v43 = (char *)&unk_480606;
  }
  if ( v44 == (__int64 *)&v41 )
  {
    v9 = v40;
    if ( v40 != nullptr )
      v9 = sub_4152B4((int)v38, (int)&v36);
    goto LABEL_82;
  }
LABEL_80:
  v9 = "arithmetic syntax error";
LABEL_81:
  v36 = -1;
LABEL_82:
  *v38 = v9;
  return v36;
}

