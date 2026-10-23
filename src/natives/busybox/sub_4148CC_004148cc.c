// busybox.exe @ 0x4148cc size=1279

_BYTE *__usercall sub_4148CC@<eax>(_BYTE *a1@<eax>, int a2@<edx>)
{
  _BYTE *i; // ebp
  unsigned __int8 v4; // dl
  bool v5; // zf
  const char *Str; // ebx
  int v7; // eax
  size_t v8; // eax
  int v9; // ecx
  int v10; // ebp
  int v11; // ebx
  size_t v12; // edi
  char v13; // bl
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  signed __int32 v17; // edx
  int v18; // ebx
  int *v19; // eax
  char *v20; // eax
  int v21; // edx
  int v22; // esi
  int v23; // edx
  unsigned int j; // edx
  char v25; // cl
  int v26; // ebx
  int v27; // edi
  int v28; // esi
  int v29; // edi
  int v30; // kr04_4
  __int64 v32; // [esp+Ch] [ebp-C0h] BYREF
  signed __int32 v33; // [esp+14h] [ebp-B8h] BYREF
  int v34; // [esp+18h] [ebp-B4h]
  int v35; // [esp+1Ch] [ebp-B0h]
  char *Control; // [esp+20h] [ebp-ACh]
  int v37; // [esp+24h] [ebp-A8h]
  int v38; // [esp+28h] [ebp-A4h] BYREF
  int FileHandle; // [esp+2Ch] [ebp-A0h]
  _DWORD v40[36]; // [esp+3Ch] [ebp-90h] BYREF

  v34 = a2;
  Control = (char *)&unk_484048 + ((a2 & 4) == 0 ? 2 : 0) + ((a2 & 0x20) != 0);
  LODWORD(v32) = a2;
  HIDWORD(v32) = a2 & 2;
  if ( (a2 & 2) == 0 )
    goto LABEL_28;
  v32 = v34 & 0xFFFFFFFD;
LABEL_3:
  if ( *a1 != 126 )
    goto LABEL_28;
  for ( i = a1; ; ++i )
  {
    v4 = i[1];
    if ( v4 == 0 )
      break;
    if ( v4 == 0x88 )
      goto LABEL_28;
    if ( v4 <= 0x88u )
    {
      if ( v4 == 0x83 )
        break;
      if ( v4 <= 0x83u )
      {
        if ( v4 == 0x81 )
          goto LABEL_28;
        if ( v4 <= 0x81u && (v4 == 47 || v4 == 58 && (v32 & 4) != 0) )
          break;
      }
    }
  }
  if ( _bittest((const signed __int32 *)&v32, 0xAu) )
    goto LABEL_23;
  i[1] = 0;
  v5 = a1[1] == 0;
  LOBYTE(v33) = v4;
  if ( v5 )
  {
    Str = (const char *)sub_43E9A4();
  }
  else
  {
    v7 = sub_4362FC(a1 + 1);
    if ( v7 == 0 )
      goto LABEL_28;
    Str = *(const char **)(v7 + 12);
  }
  i[1] = v33;
  if ( Str != nullptr )
  {
    v8 = strlen(Str);
    v9 = v32;
    BYTE1(v9) = BYTE1(v32) | 1;
    sub_442AD0(v9, v8);
LABEL_23:
    a1 = i + 1;
  }
LABEL_28:
  v33 = dword_473334 - *(_DWORD *)(dword_485FF4 + 4);
  v11 = 0;
  while ( 1 )
  {
    v12 = strcspn(&a1[v11], Control) + v11;
    v13 = a1[v12];
    if ( (v13 & 0xFB) == 0x83 || v13 >= 0 )
    {
      v14 = (((unsigned __int8)v13 - 1) & 0x80) != 0;
      if ( ++v12 == 0 )
        goto LABEL_42;
    }
    else
    {
      if ( v12 == 0 )
        goto LABEL_43;
      v14 = 0;
    }
    if ( !_bittest((const signed __int32 *)&v32, 0xAu) )
    {
      v15 = sub_4631C4(dword_473334, v12);
      *(_BYTE *)(v15 - 1) &= (_BYTE)v14 - 1;
      v16 = 0;
      if ( (v32 & 0x40) != 0 )
        v16 = -v14;
      dword_473334 = v15 + v16;
      v17 = v15 - *(_DWORD *)(dword_485FF4 + 4) - v14;
      if ( HIDWORD(v32) == 0 && (v34 & 0x140) == 64 && v33 < v17 )
      {
        v35 = v17;
        sub_459228(0);
        v17 = v35;
      }
      v33 = v17;
    }
LABEL_42:
    if ( v14 != 0 )
      return &a1[v12];
LABEL_43:
    v10 = (int)&a1[v12 + 1];
    if ( (unsigned __int8)v13 > 0x88u )
      goto LABEL_44;
    if ( (unsigned __int8)v13 <= 0x80u )
    {
      if ( v13 != 58 )
      {
        if ( v13 != 61 )
        {
LABEL_44:
          v11 = 0;
          goto LABEL_45;
        }
        LODWORD(v32) = v32 | 0x20;
        ++Control;
      }
      a1 += v12;
      if ( *(_BYTE *)(v10 - 1) == 126 )
        goto LABEL_3;
      v10 = (int)a1;
      goto LABEL_44;
    }
    switch ( v13 )
    {
      case -127:
        ++v33;
        v11 = 1;
        goto LABEL_55;
      case -126:
        v10 = sub_42C9D8();
        goto LABEL_27;
      case -124:
        v33 = HIDWORD(v32) | v32;
        v37 = (HIDWORD(v32) | v32) & 0x400;
        if ( v37 == 0 )
        {
          v18 = *(_DWORD *)(dword_473108 + 4);
          ++*(_DWORD *)(dword_485FF0 + 56);
          v35 = dword_473334 - *(_DWORD *)(dword_485FF4 + 4);
          sub_452830();
          if ( v18 != 0 )
          {
            if ( sub_44D09C(&v38) < 0 )
            {
              v19 = _errno();
              v20 = strerror(*v19);
              sub_415B40("can't create pipe: %s", v20);
            }
            v21 = sub_441E68();
            memset32(v40, v37, 0x14u);
            v40[10] = 1;
            v40[17] = v18;
            v40[14] = v38;
            v40[15] = FileHandle;
            v37 = v21;
            sub_46174C(2);
            sub_442EA4(FileHandle);
            v22 = v38;
          }
          else
          {
            v22 = -1;
          }
          sub_44D988();
          while ( v22 >= 0 )
          {
            v23 = sub_446D28(128, v40);
            if ( v23 <= 0 )
              break;
            sub_442AD0(v33, v23);
          }
          sub_4631A8();
          if ( v22 >= 0 )
          {
            sub_442EA4(v22);
            *(_BYTE *)(dword_485FF0 + 1) = sub_46DAE0();
          }
          sub_43B8DC();
          for ( j = dword_473334; j > *(_DWORD *)(dword_485FF4 + 4) + v35; --j )
          {
            v25 = *(_BYTE *)(j - 1);
            if ( v25 != 10 && v25 != 13 )
              break;
          }
          dword_473334 = j;
          if ( !_bittest(&v33, 8u) )
            sub_459228(0);
        }
        dword_473108 = *(_DWORD *)dword_473108;
        goto LABEL_27;
      case -122:
        v26 = HIDWORD(v32) | v32;
        v33 = *(_DWORD *)(dword_485FF4 + 4);
        v27 = dword_473334;
        v28 = (WORD2(v32) | (unsigned __int16)v32) & 0x400;
        v10 = sub_4148CC();
        if ( v28 == 0 )
        {
          v33 = v27 - v33;
          v29 = *(_DWORD *)(dword_485FF4 + 4);
          v35 = dword_473334;
          dword_473334 = v29 + v33;
          sub_45A7E4();
          if ( (v26 & 0x11) != 0 )
            sub_45B26C(0, 0);
          sub_452830();
          v30 = (unsigned __int64)sub_4154C4() >> 32;
          sub_44D988();
          sub_4213FC(v26, v30);
          if ( (v26 & 0x100) == 0 )
            sub_459228(0);
        }
        goto LABEL_27;
      case -120:
        if ( HIDWORD(v32) == 0 && memcmp(&a1[v12 + 1], &unk_47F8A1, 5u) == 0 )
        {
          v10 = sub_42C9D8() + 1;
LABEL_27:
          a1 = (_BYTE *)v10;
          goto LABEL_28;
        }
        HIDWORD(v32) ^= 0x100u;
        v11 = 0;
LABEL_55:
        if ( (v32 & 0x11) != 0 )
        {
          v10 = (int)&a1[v12];
          ++v11;
          ++v33;
        }
        break;
      default:
        goto LABEL_44;
    }
LABEL_45:
    a1 = (_BYTE *)v10;
  }
}

