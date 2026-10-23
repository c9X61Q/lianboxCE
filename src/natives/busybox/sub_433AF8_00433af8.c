// busybox.exe @ 0x433af8 size=894

int __usercall sub_433AF8@<eax>(int a1@<eax>)
{
  int v2; // ebp
  int v3; // eax
  int v4; // ecx
  const char *v5; // eax
  int v6; // eax
  _BYTE *v7; // edx
  int v8; // eax
  int v9; // esi
  _DWORD *v11; // esi
  _DWORD *i; // eax
  _DWORD *v13; // eax
  int v14; // [esp+30h] [ebp-A8h] BYREF
  _BYTE v15[4]; // [esp+34h] [ebp-A4h] BYREF
  _BYTE v16[4]; // [esp+38h] [ebp-A0h] BYREF
  int v17; // [esp+3Ch] [ebp-9Ch] BYREF
  int v18; // [esp+40h] [ebp-98h] BYREF
  int v19; // [esp+44h] [ebp-94h] BYREF
  int v20; // [esp+48h] [ebp-90h] BYREF
  int v21; // [esp+4Ch] [ebp-8Ch] BYREF
  int v22; // [esp+50h] [ebp-88h] BYREF
  int v23; // [esp+54h] [ebp-84h] BYREF
  CHAR v24[6]; // [esp+5Ah] [ebp-7Eh] BYREF
  _BYTE v25[120]; // [esp+60h] [ebp-78h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  sub_42143C(a1, 4u);
  v3 = sub_432664(110, v24);
  v20 = v3;
  if ( v3 != 0 )
  {
    if ( v3 != 110 )
    {
      v5 = "short read";
      goto LABEL_7;
    }
    *(_QWORD *)(a1 + 48) += 110LL;
    if ( sub_43C594(v4, "07070") == 0 || (unsigned __int8)(v24[5] - 49) > 1u )
    {
      v5 = "unsupported cpio format, use newc or crc";
      goto LABEL_7;
    }
    if ( sub_462A18(
           v25,
           "%8x%8x%8x%8x%8x%8x%8x%*16c%8x%8x%8x",
           &v19,
           &v18,
           &v21,
           &v22,
           &v17,
           &v23,
           &v20,
           v15,
           v16,
           &v14) != 10 )
    {
      v5 = "damaged cpio file";
LABEL_7:
      sub_418210(v5);
    }
    *(_WORD *)(v2 + 24) = v18;
    if ( *(_DWORD *)(a1 + 80) != -1 )
      v21 = *(_DWORD *)(a1 + 80);
    if ( *(_DWORD *)(a1 + 84) != -1 )
      v22 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(v2 + 16) = v21;
    *(_DWORD *)(v2 + 20) = v22;
    *(_DWORD *)(v2 + 28) = v23;
    *(_DWORD *)(v2 + 8) = v20;
    *(_DWORD *)(v2 + 12) = 0;
    v14 &= 0x1FFFu;
    v6 = sub_4728CC();
    *(_DWORD *)v2 = v6;
    sub_4715C8(v14, v6);
    if ( **(_BYTE **)v2 == 47 )
    {
      v7 = *(_BYTE **)v2;
      do
        ++v7;
      while ( *v7 == 47 );
      sub_448258();
    }
    *(_QWORD *)(a1 + 48) += v14;
    sub_42143C(a1, 4u);
    if ( strcmp(*(const char **)v2, "TRAILER!!!") == 0 )
    {
      *(_QWORD *)(a1 + 72) = (unsigned __int64)(*(_QWORD *)(a1 + 48) + 511LL) >> 9;
      goto LABEL_32;
    }
    *(_DWORD *)(v2 + 4) = 0;
    if ( (*(_DWORD *)(v2 + 24) & 0xF000) == 0xA000 )
    {
      *(_DWORD *)(v2 + 8) &= 0x1FFFu;
      *(_DWORD *)(v2 + 12) = 0;
      v8 = sub_4728CC();
      *(_DWORD *)(v2 + 4) = v8;
      sub_4715C8(*(_DWORD *)(v2 + 8), v8);
      *(_QWORD *)(a1 + 48) += *(_QWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = 0;
      *(_DWORD *)(v2 + 12) = 0;
    }
    if ( v17 > 1 && (*(_DWORD *)(v2 + 24) & 0xF000) == 0x8000 )
    {
      v9 = sub_470E78();
      *(_DWORD *)(v9 + 4) = v19;
      *(_DWORD *)(v9 + 8) = v18;
      *(_DWORD *)(v9 + 12) = v23;
      *(_DWORD *)(v9 + 16) = v21;
      *(_DWORD *)(v9 + 20) = v22;
      strcpy((char *)(v9 + 24), *(const char **)v2);
      if ( v20 == 0 )
      {
        *(_DWORD *)v9 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 88) = v9;
        return 0;
      }
      *(_DWORD *)v9 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a1 + 92) = v9;
    }
    *(_DWORD *)(v2 + 32) = 0;
    if ( (*(unsigned __int8 (**)(void))(a1 + 8))() != 0 )
    {
      sub_4218F4(a1);
    }
    else
    {
      (*(void (**)(void))(a1 + 36))();
      (*(void (**)(void))(a1 + 32))();
    }
    *(_QWORD *)(a1 + 48) += *(_QWORD *)(v2 + 8);
    free(*(void **)(v2 + 4));
    free(*(void **)v2);
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)v2 = 0;
    return 0;
  }
LABEL_32:
  free(*(void **)(v2 + 4));
  free(*(void **)v2);
LABEL_33:
  while ( 1 )
  {
    v11 = *(_DWORD **)(a1 + 88);
    if ( v11 == nullptr )
      break;
    *(_DWORD *)(a1 + 88) = *v11;
    memset((void *)v2, 0, 0x28u);
    *(_DWORD *)(v2 + 28) = v11[3];
    *(_DWORD *)v2 = v11 + 6;
    *(_WORD *)(v2 + 24) = v11[2];
    *(_DWORD *)(v2 + 16) = v11[4];
    *(_DWORD *)(v2 + 20) = v11[5];
    for ( i = *(_DWORD **)(a1 + 92); i != nullptr; i = (_DWORD *)*i )
    {
      if ( i[1] == v11[1] )
      {
        *(_DWORD *)(v2 + 4) = i + 6;
        if ( (*(unsigned __int8 (**)(void))(a1 + 8))() == 0 )
          (*(void (**)(void))(a1 + 36))();
        free(v11);
        goto LABEL_33;
      }
    }
    if ( (*(unsigned __int8 (**)(void))(a1 + 8))() == 0 )
      (*(void (**)(void))(a1 + 36))();
    *v11 = *(_DWORD *)(a1 + 92);
    *(_DWORD *)(a1 + 92) = v11;
  }
  while ( 1 )
  {
    v13 = *(_DWORD **)(a1 + 92);
    if ( v13 == nullptr )
      break;
    *(_DWORD *)(a1 + 92) = *v13;
    free(v13);
  }
  return 1;
}

