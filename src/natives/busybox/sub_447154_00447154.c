// busybox.exe @ 0x447154 size=2071

int __cdecl sub_447154(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // ebp
  char *v5; // eax
  int v6; // edx
  int v7; // edi
  unsigned int v8; // ebp
  unsigned int v9; // edx
  signed __int64 v10; // rax
  char *v11; // eax
  _DWORD *v12; // esi
  __int64 v13; // rax
  const char *v14; // eax
  int v15; // eax
  HANDLE *v16; // esi
  unsigned int v17; // esi
  int v18; // ecx
  _BYTE *v19; // ebx
  unsigned int v20; // edi
  int v21; // eax
  _BYTE *i; // edi
  int v23; // ebx
  void *v24; // ebp
  void *v25; // esi
  int v26; // esi
  unsigned int v27; // eax
  char *v28; // ebp
  FILE *v29; // eax
  FILE *Destination_4; // [esp+4h] [ebp-68h]
  FILE *Destination_4a; // [esp+4h] [ebp-68h]
  FILE *Destination_4b; // [esp+4h] [ebp-68h]
  FILE *Destination_4c; // [esp+4h] [ebp-68h]
  FILE *Destination_4d; // [esp+4h] [ebp-68h]
  FILE *Destination_4e; // [esp+4h] [ebp-68h]
  FILE *Destination_4f; // [esp+4h] [ebp-68h]
  signed __int64 v38; // [esp+24h] [ebp-48h]
  signed __int64 v39; // [esp+2Ch] [ebp-40h]
  char *Block; // [esp+34h] [ebp-38h]
  unsigned __int8 *v41; // [esp+38h] [ebp-34h] BYREF
  int v42; // [esp+3Ch] [ebp-30h] BYREF
  int v43; // [esp+40h] [ebp-2Ch] BYREF
  const char *v44; // [esp+44h] [ebp-28h] BYREF
  _DWORD *v45; // [esp+48h] [ebp-24h] BYREF
  signed __int64 Size; // [esp+4Ch] [ebp-20h] BYREF
  _QWORD v47[3]; // [esp+54h] [ebp-18h]

  v44 = "3";
  v45 = nullptr;
  lpHandles = (HANDLE *)32;
  strcpy((char *)&dword_485C0C + 2, "%0nllxc");
  qword_485BF0 = (char *)sub_431A68;
  HIBYTE(dword_485C10) = 111;
  LOBYTE(dword_485C10) = 55;
  v2 = sub_435D60(a2, (int)"A:N:abcdfhij:lot:*vxsS:w:+:", (int)"skip-bytes", &v41, &v42, &v43, &v45, &v44, &lpHandles);
  v3 = dword_473090;
  if ( (v2 & 1) != 0 )
  {
    v4 = *v41;
    v5 = strchr("doxn", v4);
    if ( v5 == nullptr )
      sub_41784C("bad output address radix '%c' (must be [doxn])", v4);
    v6 = v5 - "doxn";
    if ( v5 == "n" )
      qword_485BF0 = (char *)nullsub_4;
    HIBYTE(dword_485C10) = byte_47F948[v6];
    LOBYTE(dword_485C10) = byte_47F94C[v6];
  }
  v7 = 0;
  v8 = 0;
  if ( (v2 & 2) != 0 )
  {
    v7 = sub_471C74("b");
    v8 = v9;
  }
  if ( (v2 & 4) != 0 )
    sub_422874("a");
  if ( (v2 & 8) != 0 )
    sub_422874("oC");
  if ( (v2 & 0x10) != 0 )
    sub_422874("c");
  if ( (v2 & 0x20) != 0 )
    sub_422874("u2");
  if ( (v2 & 0x40) != 0 )
    sub_422874("fF");
  if ( (v2 & 0x80u) != 0 )
    sub_422874("x2");
  if ( (v2 & 0x100) != 0 )
    sub_422874("d2");
  v38 = 0;
  if ( (v2 & 0x200) != 0 )
  {
    LODWORD(v10) = sub_471C74("b");
    v38 = v10;
  }
  if ( (v2 & 0x400) != 0 )
    sub_422874("d4");
  v11 = "o2";
  if ( (v2 & 0x800) != 0 )
    goto LABEL_30;
  while ( v45 != nullptr )
  {
    v11 = (char *)sub_43E400(&v45);
LABEL_30:
    sub_422874(v11);
  }
  if ( (v2 & 0x4000) != 0 )
    sub_422874("x2");
  if ( (v2 & 0x8000) != 0 )
    sub_422874("d2");
  if ( (v2 & 0x10000) != 0 )
    *(&MultiByteStr + 1) = sub_471A8C("b", 0);
  v12 = (_DWORD *)(a2 + 4 * v3);
  if ( (v2 & 0x40000) != 0 && *v12 != 0 )
  {
    if ( v12[1] == 0 )
    {
      if ( sub_44AD1C(0, &Size) != 0 )
      {
        v38 = Size;
        ++v12;
      }
      goto LABEL_61;
    }
    if ( v12[2] != 0 )
    {
      if ( v12[3] != 0 )
      {
        v14 = "too many arguments";
        goto LABEL_55;
      }
      if ( ((int (*)(void))sub_44AD1C)() == 0 || ((int (*)(void))sub_44AD1C)() == 0 )
      {
        v14 = "the last two arguments must be offsets";
        goto LABEL_55;
      }
      v38 = Size;
      v13 = v47[0];
      v12[1] = 0;
      goto LABEL_56;
    }
    if ( ((int (*)(void))sub_44AD1C)() != 0 && ((int (*)(void))sub_44AD1C)() != 0 )
    {
      v38 = Size;
      v13 = v47[0];
      v12 += 2;
LABEL_56:
      if ( v13 >= 0 )
      {
        if ( qword_485BF0 == (char *)nullsub_4 )
        {
          HIBYTE(dword_485C10) = 111;
          LOBYTE(dword_485C10) = 55;
          qword_485BF0 = (char *)sub_431A18;
        }
        else
        {
          qword_485BF0 = (char *)sub_4319C8;
        }
        *(_QWORD *)&qword_485BF8 = v13 - v38;
      }
      goto LABEL_61;
    }
    if ( ((int (*)(void))sub_44AD1C)() == 0 )
      sub_41784C("invalid second argument '%s'", v12[1]);
    v38 = v47[0];
    v12[1] = 0;
  }
LABEL_61:
  if ( (dword_486008 & 2) == 0 )
  {
    v39 = 0;
    goto LABEL_65;
  }
  v39 = v38 + __PAIR64__(v8, v7);
  v14 = "SKIP + SIZE is too large";
  if ( (__int64)(v38 + __PAIR64__(v8, v7)) < v38 )
LABEL_55:
    sub_418210(v14);
LABEL_65:
  if ( NumOfElements == 0 )
    sub_422874("o2");
  dword_485C04 = (int)&off_47DE4C;
  if ( *v12 != 0 )
    dword_485C04 = (int)v12;
  sub_447A00();
  sub_460BFC();
  if ( Stream == nullptr )
    return 1;
  v15 = sub_434824();
  v16 = (HANDLE *)v15;
  if ( (v2 & 0x20000) != 0 )
  {
    if ( lpHandles != nullptr && (unsigned int)lpHandles % v15 == 0 )
      goto LABEL_77;
    sub_41783C("warning: invalid width %u; using %d instead", lpHandles, v15);
  }
  else if ( v15 <= 15 )
  {
    lpHandles = (HANDLE *)(v15 * (16 / v15));
    goto LABEL_77;
  }
  lpHandles = v16;
LABEL_77:
  if ( (dword_486008 & 0x10000) != 0 )
  {
    v17 = *(&MultiByteStr + 1);
    if ( *(&MultiByteStr + 1) < 0x64 )
      v17 = 100;
    v19 = (_BYTE *)sub_470E78();
    while ( 1 )
    {
LABEL_81:
      v20 = dword_486008 & 2;
      if ( (dword_486008 & 2) != 0 )
      {
        v18 = (v38 - (v39 - (unsigned __int64)*(&MultiByteStr + 1))) >> 32;
        if ( v38 >= v39 - *(&MultiByteStr + 1) )
        {
          sub_41BA2C();
          goto LABEL_111;
        }
        v20 = 0;
      }
LABEL_92:
      if ( (dword_486008 & 2) == 0 || v38 < v39 )
        break;
LABEL_95:
      if ( v20 >= *(&MultiByteStr + 1) )
      {
        v19[v20] = 0;
        ((void (__cdecl *)(_DWORD, _DWORD, int))qword_485BF0)(
          v38 - v20 - 1,
          (v38 - (unsigned __int64)v20 - 1) >> 32,
          32);
        for ( i = v19; *i != 0; ++i )
        {
          switch ( *i )
          {
            case 7:
              Destination_4 = off_4730E8(1);
              sub_46EF20("\\a", Destination_4);
              break;
            case 8:
              Destination_4a = off_4730E8(1);
              sub_46EF20("\\b", Destination_4a);
              break;
            case 9:
              Destination_4e = off_4730E8(1);
              sub_46EF20("\\t", Destination_4e);
              break;
            case 0xA:
              Destination_4c = off_4730E8(1);
              sub_46EF20("\\n", Destination_4c);
              break;
            case 0xB:
              Destination_4f = off_4730E8(1);
              sub_46EF20("\\v", Destination_4f);
              break;
            case 0xC:
              Destination_4b = off_4730E8(1);
              sub_46EF20("\\f", Destination_4b);
              break;
            case 0xD:
              Destination_4d = off_4730E8(1);
              sub_46EF20("\\r", Destination_4d);
              break;
            default:
              sub_46F0B8((unsigned __int8)*i);
              break;
          }
        }
        sub_46F0B8(10);
      }
    }
    if ( v17 == v20 )
    {
      v17 += v17 >> 3;
      v19 = (_BYTE *)sub_471600(v18, v17);
    }
    while ( Stream != nullptr )
    {
      v21 = fgetc(Stream);
      if ( v21 != -1 )
      {
        ++v38;
        if ( v21 == 0 )
          goto LABEL_95;
        if ( (unsigned int)(v21 - 32) <= 0x5E )
        {
          v19[v20++] = v21;
          goto LABEL_92;
        }
        goto LABEL_81;
      }
      sub_41BA2C();
      sub_447A00();
    }
LABEL_111:
    free(v19);
  }
  else
  {
    Block = (char *)sub_470E78();
    LODWORD(v47[0]) = Block;
    HIDWORD(v47[0]) = &Block[(_DWORD)lpHandles];
    v23 = 0;
    if ( (dword_486008 & 2) != 0 )
    {
      while ( v38 < v39 )
      {
        v24 = *((void **)v47 + v23);
        sub_456A04(&Size, v24);
        if ( (unsigned int)lpHandles > (unsigned int)Size )
          goto LABEL_119;
        v23 ^= 1u;
        sub_470174(Size, *((void **)v47 + v23), v24);
        v38 += (unsigned int)Size;
      }
      LODWORD(Size) = 0;
    }
    else
    {
      while ( 1 )
      {
        v25 = *((void **)v47 + v23);
        sub_456A04(&Size, v25);
        if ( (unsigned int)lpHandles > (unsigned int)Size )
          break;
        v23 ^= 1u;
        sub_470174(Size, *((void **)v47 + v23), v25);
        v38 += (unsigned int)Size;
      }
    }
LABEL_119:
    v26 = Size;
    if ( (_DWORD)Size != 0 )
    {
      v27 = sub_434824();
      v28 = *((char **)v47 + v23);
      memset(&v28[v26], 0, v27 * ((v26 + v27 - 1) / v27) - v26);
      sub_470174(v27 * ((v26 + v27 - 1) / v27), *((void **)v47 + (v23 ^ 1)), v28);
      v38 += (unsigned int)Size;
    }
    ((void (__cdecl *)(_DWORD, _DWORD, int))qword_485BF0)(v38, HIDWORD(v38), 10);
    if ( (dword_486008 & 2) != 0 && v38 >= v39 )
      sub_41BA2C();
    free(Block);
  }
  v29 = off_4730E8(0);
  if ( fclose(v29) != 0 )
    sub_41823C("standard input");
  return (char)MultiByteStr;
}

