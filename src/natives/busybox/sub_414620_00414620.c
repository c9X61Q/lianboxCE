// busybox.exe @ 0x414620 size=682

// bad sp value at call has been detected, the output may be wrong!
int __cdecl sub_414620(char a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // ebx
  _BYTE *v4; // eax
  unsigned int v5; // eax
  int v6; // edx
  _DWORD *v7; // edi
  int v8; // esi
  void **i; // ecx
  void *v10; // edi
  int v11; // esi
  int v12; // ecx
  const char *v13; // eax
  int FileHandle; // [esp+Ch] [ebp-E8h]
  int FileHandlea; // [esp+Ch] [ebp-E8h]
  _BYTE v17[17]; // [esp+13h] [ebp-E1h] BYREF
  _BYTE v18[40]; // [esp+24h] [ebp-D0h] BYREF
  __int64 v19; // [esp+4Ch] [ebp-A8h]
  int v20; // [esp+94h] [ebp-60h]
  int v21; // [esp+9Ch] [ebp-58h]
  int v22; // [esp+A0h] [ebp-54h]
  __int64 v23; // [esp+ACh] [ebp-48h]
  int v24; // [esp+BCh] [ebp-38h]
  char *Block; // [esp+E4h] [ebp-10h]
  int Block_4; // [esp+E8h] [ebp-Ch]

  Block = &a1;
  v2 = a2;
  v3 = (_DWORD *)sub_43AC28();
  v4 = *(_BYTE **)(v2 + 4);
  if ( v4 != nullptr && *v4 != 45 && *v4 != 0 )
    *(_DWORD *)(v2 + 4) = sub_4708BC("-%s", *(const char **)(v2 + 4));
  v5 = sub_435D44(v2, "^vocptxr");
  if ( ((v5 >> 3) & ((v5 >> 3) - 1)) != 0 )
    sub_418164();
  v6 = dword_473090;
  if ( (v5 & 8) != 0 )
    v3[9] = sub_4218CC;
  if ( (v5 & 0x10) != 0 )
    v3[8] = sub_438614;
  if ( (v5 & 0x20) != 0 )
    v3[9] = sub_42149C;
  if ( (v5 & 2) != 0 )
    *v3 |= 1u;
  if ( (v5 & 1) != 0 )
    v3[8] = sub_438720;
  v7 = (_DWORD *)(v2 + 4 * v6);
  v3[27] = *v7;
  v8 = v5 & 0x40;
  v3[1] = sub_47154C();
  if ( v7[1] != 0 )
    v3[2] = sub_42FCB8;
  for ( i = (void **)(v7 + 1); ; i = (void **)FileHandle )
  {
    v10 = *i;
    if ( *i == nullptr )
      break;
    FileHandle = (int)(i + 1);
    sub_43E384();
  }
  if ( v8 != 0 )
  {
    sub_470D20(v3[27], v18);
    v11 = (int)v3;
    if ( v19 != 0 )
    {
      v11 = sub_43AC28();
      v10 = (void *)sub_4708BC("%sXXXXXX", (const char *)v3[27]);
      *(_DWORD *)(v11 + 4) = sub_471508();
      *(_DWORD *)(v11 + 12) = v3[3];
    }
    v3[28] = v11;
    sub_471D00(8, "!<arch>\n");
    *(_QWORD *)(v11 + 48) += 8LL;
    if ( v19 != 0 )
    {
      v3[2] = sub_42FF04;
      v3[9] = sub_41EE38;
      sub_468B54();
    }
    while ( sub_43E400() != 0 )
    {
      sub_471860();
      v12 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v12 + 28) = v24;
      *(_DWORD *)(v12 + 16) = v21;
      *(_DWORD *)(v12 + 20) = v22;
      *(_WORD *)(v12 + 24) = v20;
      *(_QWORD *)(v12 + 8) = v23;
      *(_DWORD *)v12 = v17;
      v13 = (const char *)sub_416E24();
      sub_46288C(v17, "%.15s/", v13);
      sub_4481A4();
      FileHandlea = sub_47154C();
      Block_4 = sub_416EDC(v23, HIDWORD(v23));
      sub_442EA4(FileHandlea);
      *(_QWORD *)(v11 + 48) += v23;
    }
    sub_442EA4(v3[1]);
    if ( *(_DWORD *)(v11 + 4) != v3[1] )
      sub_442EA4(*(_DWORD *)(v11 + 4));
    if ( v10 != nullptr )
    {
      sub_4716FC();
      free(v10);
    }
  }
  else
  {
    sub_468B54();
  }
  return 0;
}

