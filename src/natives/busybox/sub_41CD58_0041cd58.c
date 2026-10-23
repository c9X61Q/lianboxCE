// busybox.exe @ 0x41cd58 size=626

int __cdecl sub_41CD58(int a1, int a2)
{
  void **v2; // ebx
  void *v3; // ebp
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  FILE *v7; // ecx
  FILE *v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  FILE *v14; // [esp+0h] [ebp-58h]
  FILE *v15; // [esp+0h] [ebp-58h]
  FILE *v16; // [esp+0h] [ebp-58h]
  FILE *v17; // [esp+4h] [ebp-54h]
  int v18; // [esp+4h] [ebp-54h]
  __int64 v19; // [esp+20h] [ebp-38h]
  void *v20; // [esp+28h] [ebp-30h]
  FILE *v21; // [esp+2Ch] [ebp-2Ch]
  const char *v22; // [esp+30h] [ebp-28h]
  int v23; // [esp+34h] [ebp-24h]
  FILE *v24; // [esp+38h] [ebp-20h]
  int v25; // [esp+44h] [ebp-14h]
  int v26; // [esp+44h] [ebp-14h]
  int v27; // [esp+44h] [ebp-14h]

  v24 = off_4730E8(1);
  v23 = sub_435D44(a2, &unk_47AC3A);
  v2 = (void **)(a2 + 4 * dword_473090);
  v20 = *v2;
  v3 = v2[1];
  if ( v3 != nullptr )
  {
    v19 = 0;
    v4 = 0;
    if ( v2[2] != nullptr )
    {
      v5 = sub_470998(0, 0, -1, 0x7FFFFFFF);
      v17 = nullptr;
      v14 = nullptr;
      v4 = __PAIR64__(v5, HIDWORD(v5));
      if ( v2[3] != nullptr )
      {
        v6 = sub_470998(0, 0, -1, 0x7FFFFFFF);
        v17 = v7;
        v14 = v7;
        v19 = v6;
      }
    }
  }
  else
  {
    v19 = 0;
    v4 = 0;
    v3 = &unk_47AC38;
  }
  byte_4735D4 = 2;
  if ( (v23 & 1) != 0 )
    byte_473468 = 0;
  v8 = (FILE *)sub_470D10(v14, v17);
  v21 = (FILE *)sub_470D10(v15, v18);
  if ( v8 != v21 )
  {
    v22 = "%.0s%.0s%llu %3o %3o\n";
    if ( (v23 & 2) == 0 )
      v22 = "%s %s differ: char %llu, line %u\n";
    byte_473468 = 1;
    while ( v4 != 0 )
    {
      sub_46F03C(v8);
      LODWORD(v4) = (__PAIR64__(v4, HIDWORD(v4)) - 1) >> 32;
      --HIDWORD(v4);
    }
    while ( v19 != 0 )
    {
      sub_46F03C(v21);
      --v19;
    }
    v9 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = sub_46F03C(v8);
        v10 = sub_46F03C(v21);
        v11 = v10;
        ++v19;
        v12 = v25;
        if ( v25 != v10 )
          break;
        if ( v25 != 10 )
          goto LABEL_30;
        ++v9;
      }
      if ( v10 == -1 )
        break;
      if ( v25 == -1 )
        goto LABEL_22;
LABEL_23:
      if ( (v23 & 1) != 0 )
        goto LABEL_31;
      if ( (v23 & 2) != 0 )
        v9 = v12;
      v27 = v12;
      sub_46EEFC(v24, v22, v20, v3, v19, v9, v11);
      v12 = v27;
      if ( v23 == 0 )
      {
LABEL_31:
        sub_4235CC();
        sub_4235CC();
        sub_42F138();
      }
LABEL_30:
      if ( v12 == -1 )
        goto LABEL_31;
    }
    v20 = v3;
    v8 = v21;
LABEL_22:
    v26 = v10;
    sub_4235CC();
    v24 = off_4730E8(2);
    sub_42F128(v16);
    v12 = -1;
    v22 = "cmp: EOF on %s\n";
    v11 = v26;
    goto LABEL_23;
  }
  return 0;
}

