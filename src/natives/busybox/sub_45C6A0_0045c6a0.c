// busybox.exe @ 0x45c6a0 size=713

void __usercall sub_45C6A0(int a1@<eax>, int a2@<edx>)
{
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // ecx
  const char *v7; // edx
  CHAR *v8; // eax
  CHAR *Block; // esi
  _BYTE *v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // edx
  unsigned __int64 v14; // rax
  _DWORD *v15; // ecx
  const char *v16; // eax
  unsigned __int64 v17; // rax
  _DWORD *v18; // ecx
  int v19; // ecx
  void *v20; // esi
  size_t v21; // edx
  int *v22; // esi
  int v23; // ebp
  size_t v24; // [esp+Ch] [ebp-1Ch]
  _DWORD *v25; // [esp+10h] [ebp-18h]

  while ( *(_DWORD *)a1 != 0 )
  {
    if ( BYTE2(MultiByteStr) != 0 || (dword_486008 & 0x4000) != 0 )
    {
      if ( a2 == 0 )
        sub_418130(10);
      sub_46F088("%s:\n", *(const char **)(*(_DWORD *)a1 + 4));
      a2 = 0;
    }
    v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
    v25 = (_DWORD *)sub_46DC58();
    if ( v25 == nullptr )
    {
      BYTE1(MultiByteStr) = 1;
      v4 = nullptr;
LABEL_30:
      v24 = 0;
      goto LABEL_31;
    }
    v24 = 0;
    v4 = nullptr;
    while ( 1 )
    {
      v5 = sub_402F30((int)v25);
      if ( v5 == 0 )
        break;
      if ( *(_BYTE *)(v5 + 8) != 46
        || (dword_486008 & 0x402) != 0
        && ((dword_486008 & 2) != 0 || *(_BYTE *)(v5 + 9) != 0 && (*(_DWORD *)(v5 + 8) & 0xFFFF00) != 0x2E00) )
      {
        v7 = (const char *)(v5 + 8);
        if ( (unsigned __int8)((*(_BYTE *)v3 | 0x20) - 97) > 0x19u
          || *(_BYTE *)(v3 + 1) != 58
          || *(_BYTE *)(v3 + 2) != 0 )
        {
          v8 = (CHAR *)sub_41E9A4((const char *)v3, v7, v6);
        }
        else
        {
          v8 = (CHAR *)sub_4708BC("%s%s", (const char *)v3, v7);
        }
        Block = v8;
        v10 = sub_416E24(v8);
        v11 = sub_445C4C(Block, (int)v10, 0);
        if ( v11 != 0 && ((*(_BYTE *)(v11 + 76) & 2) == 0 || (dword_486008 & 0x402) != 0) )
        {
          *(_BYTE *)(v11 + 12) = 1;
          *(_DWORD *)(v11 + 8) = v4;
          ++v24;
          v4 = (_DWORD *)v11;
        }
        else
        {
          free(Block);
        }
      }
    }
    sub_403050(v25);
    if ( v4 == nullptr )
      goto LABEL_30;
    v12 = sub_4248A8(v24);
    v13 = (_DWORD *)v12;
    do
    {
      *v13 = v4;
      v4 = (_DWORD *)v4[2];
      ++v13;
    }
    while ( v4 != nullptr );
    v4 = (_DWORD *)v12;
LABEL_31:
    if ( (dword_486008 & 0x120) != 0 )
    {
      if ( (dword_486008 & 0x2000000) != 0 )
      {
        if ( v4 != nullptr )
        {
          v15 = v4;
          v14 = 1;
          while ( *v15 != 0 )
            v14 += *(_QWORD *)(*v15++ + 48);
        }
        else
        {
          v14 = 1;
        }
        v16 = sub_441B54(v14 >> 1 << 10, 0, 0);
        sub_46F088("total %-7s\n", v16);
      }
      else
      {
        if ( v4 != nullptr )
        {
          v18 = v4;
          v17 = 1;
          while ( *v18 != 0 )
            v17 += *(_QWORD *)(*v18++ + 48);
        }
        else
        {
          v17 = 1;
        }
        sub_46F088("total %llu\n", v17 >> 1);
      }
    }
    if ( v24 != 0 )
    {
      sub_4248BC(v4, v24);
      sub_424270((u_long)v4, v24, v19);
      if ( (dword_486008 & 0x4000) != 0 )
      {
        v20 = (void *)sub_462604();
        v21 = sub_41F768((int)v4, 2);
        if ( v21 != 0 )
        {
          sub_4248BC(v20, v21);
          sub_45C6A0();
          free(v20);
        }
      }
      v22 = v4;
      if ( v4 != nullptr )
      {
        while ( 1 )
        {
          v23 = *v22;
          if ( *v22 == 0 )
            break;
          if ( *(_BYTE *)(v23 + 12) != 0 )
            free(*(void **)(v23 + 4));
          free((void *)v23);
          ++v22;
        }
        free(v4);
      }
    }
    a1 += 4;
  }
}

