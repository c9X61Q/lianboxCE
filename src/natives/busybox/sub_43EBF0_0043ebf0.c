// busybox.exe @ 0x43ebf0 size=635

int __cdecl sub_43EBF0(int a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // esi
  const char *v5; // eax
  int v6; // eax
  _DWORD *v7; // esi
  size_t v8; // ebx
  int v9; // edi
  _BYTE *v10; // ebp
  const char *v11; // eax
  int v12; // ecx
  int v13; // eax
  int *v14; // eax
  int *v15; // ebp
  int v16; // ecx
  void *v17; // esi
  void *v18; // edi
  size_t v19; // ebp
  size_t v20; // ebx
  int v21; // ecx
  const char *v23; // [esp+18h] [ebp-14h] BYREF

  v23 = "always";
  memset(&MultiByteStr, 0, 0xCu);
  *(&MultiByteStr + 1) = 80;
  time(&NumOfElements);
  *(&MultiByteStr + 1) = sub_43571C(v3, v2) - 1;
  v4 = sub_435D60(a2, (int)"^Cadi1lgnsxAkFpRQctuSXrvLHhT:w:", (int)"full-time", 0, 4742116, &v23);
  if ( sub_443380(1) != 0 )
  {
    v5 = (const char *)sub_44328C("LS_COLORS");
    if ( v5 == nullptr || *v5 != 0 && strcmp(v5, "none") != 0 )
      LOBYTE(MultiByteStr) = 1;
  }
  if ( (v4 & 0x40000000) != 0 )
  {
    if ( *v23 == 110 )
    {
      LOBYTE(MultiByteStr) = 0;
      goto LABEL_15;
    }
    v6 = sub_439954("always", v23);
    if ( v6 <= 2 )
    {
      if ( v6 < 0 )
        goto LABEL_15;
LABEL_14:
      LOBYTE(MultiByteStr) = 1;
      goto LABEL_15;
    }
    if ( (unsigned int)(v6 - 3) <= 2 && sub_443380(1) != 0 )
      goto LABEL_14;
  }
LABEL_15:
  if ( (v4 & 4) != 0 )
    dword_486008 &= ~0x4000u;
  if ( (v4 & 0x20) == 0 && (v4 & 0x50000) != 0 )
    dword_486008 |= 0x20000u;
  if ( (dword_486008 & 0x231) == 0 )
    dword_486008 |= sub_443380(1) == 0 ? 16 : 1;
  v7 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( *v7 == 0 )
    *--v7 = ".";
  if ( v7[1] != 0 )
    BYTE2(MultiByteStr) = 1;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = (_BYTE *)*v7;
    v11 = (const char *)sub_44328C("BB_FIX_BACKSLASH");
    if ( v11 != nullptr && atoi(v11) == 1 )
      sub_418E48(v10);
    *v7 = v10;
    v12 = 1;
    if ( (dword_486008 & 0x1128) != 0 )
      v12 = HIBYTE(dword_486008) & 1;
    v13 = sub_445C4C(v12, v10);
    if ( v13 != 0 )
    {
      *(_DWORD *)(v13 + 8) = v9;
      ++v8;
      v9 = v13;
    }
    ++v7;
  }
  while ( *v7 != 0 );
  if ( v8 != 0 )
  {
    v14 = (int *)sub_4248A8(v8);
    v15 = v14;
    do
    {
      *v14 = v9;
      v9 = *(_DWORD *)(v9 + 8);
      ++v14;
    }
    while ( v9 != 0 );
    if ( (dword_486008 & 4) != 0 )
    {
      sub_4248BC(v15, v8);
      sub_424270((u_long)v15, v8, v16);
    }
    else
    {
      v17 = (void *)sub_462604();
      v18 = (void *)sub_462604();
      v19 = sub_41F768((int)v15, 1);
      v20 = v8 - v19;
      if ( v20 != 0 )
      {
        sub_4248BC(v18, v20);
        sub_424270((u_long)v18, v20, v21);
      }
      if ( v19 != 0 )
      {
        sub_4248BC(v17, v19);
        sub_45C6A0();
      }
    }
  }
  return SBYTE1(MultiByteStr);
}

