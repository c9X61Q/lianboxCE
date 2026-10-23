// busybox.exe @ 0x45b7c8 size=1177

int __cdecl sub_45B7C8(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  const char **v5; // ebp
  void *v6; // ecx
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  const char *v11; // edi
  signed int v12; // esi
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  u_long v18; // eax
  const char *v19; // eax
  struct tm *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  _DWORD *v27; // eax
  char v28; // al
  int v29; // edx
  bool v30; // zf
  const char *v31; // edi
  u_long v32; // eax
  const char *v33; // eax
  int FileHandle; // [esp+14h] [ebp-58h]
  const char *v36; // [esp+18h] [ebp-54h]
  signed int v37; // [esp+18h] [ebp-54h]
  const char *v38; // [esp+1Ch] [ebp-50h]
  __time32_t Time; // [esp+20h] [ebp-4Ch] BYREF
  int Key; // [esp+24h] [ebp-48h] BYREF
  char Buffer[66]; // [esp+2Ah] [ebp-42h] BYREF

  HIDWORD(qword_485BEC) = 4096;
  v2 = 0;
  while ( 1 )
  {
    v3 = sub_4040F0(a1, a2, "iqpldc");
    if ( v3 == -1 )
      break;
    switch ( v3 )
    {
      case 'c':
        v2 |= 0x50u;
        continue;
      case 'd':
        v2 |= 0x30u;
        continue;
      case 'i':
        if ( v2 != 0 )
          v2 |= 4u;
        else
          v2 = 2;
        continue;
      case 'l':
        v2 |= 0x10u;
        continue;
      case 'p':
        v2 |= 8u;
        continue;
      case 'q':
        if ( v2 != 0 )
          goto LABEL_13;
        v2 = 1;
        break;
      default:
        goto LABEL_13;
    }
  }
  v5 = (const char **)(a2 + 4 * dword_473090);
  if ( *v5 == nullptr )
LABEL_13:
    sub_418164();
  while ( 1 )
  {
    FileHandle = sub_45B5D8(*v5, v4);
    v11 = (const char *)sub_45B5D0(1044);
    v12 = v2 & 2;
    if ( (v2 & 2) != 0 )
    {
      sub_43EA2C((void (__cdecl *)(void *, int))sub_42F790, v10);
      if ( v11 != nullptr && sub_41BA00(v6) != 0 )
        sub_470B28();
      v7 = sub_43AC28();
      v7[10] = sub_45D1B8;
      v7[9] = sub_42149C;
      *v7 = 515;
      v7[1] = FileHandle;
      sub_45EB54(v8, 1);
      while ( (unsigned __int8)sub_433AF8((int)v7) == 0 )
        ;
      sub_43EA2C((void (__cdecl *)(void *, int))sub_42F814, v9);
      goto LABEL_20;
    }
    if ( (v2 & 9) != 9 )
      goto LABEL_13;
    if ( (v2 & 0x14) == 0 )
    {
      v38 = (const char *)sub_45B5D0(1002);
      v36 = (const char *)sub_45B5D0(1001);
      v13 = (const char *)sub_45B5D0(1000);
      sub_46F088("%s-%s-%s\n", v13, v36, v38);
    }
    if ( (v2 & 4) != 0 )
    {
      v14 = (const char *)sub_45B5D0(1000);
      sub_46F088("%-12s: %s\n", "Name", v14);
      v15 = (const char *)sub_45B5D0(1001);
      sub_46F088("%-12s: %s\n", "Version", v15);
      v16 = (const char *)sub_45B5D0(1002);
      sub_46F088("%-12s: %s\n", "Release", v16);
      v17 = (const char *)sub_45B5D0(1016);
      sub_46F088("%-12s: %s\n", "Group", v17);
      v18 = sub_45B4BC(1009, 0);
      sub_46F088("%-12s: %d\n", "Size", v18);
      v19 = (const char *)sub_45B5D0(1014);
      sub_46F088("%-12s: %s\n", "License", v19);
      if ( v11 == nullptr )
        v11 = "(none)";
      sub_46F088("%-12s: %s\n", "Source RPM", v11);
      Time = sub_45B4BC(1006, 0);
      v20 = localtime(&Time);
      sub_444C3C(Buffer, 0x32u, (int)"%a %d %b %Y %T %Z", v20);
      sub_46F088("%-12s: %s\n", "Build Date", Buffer);
      v21 = (const char *)sub_45B5D0(1007);
      sub_46F088("%-12s: %s\n", "Build Host", v21);
      v22 = (const char *)sub_45B5D0(1098);
      if ( v22 == nullptr )
        v22 = "(not relocatable)";
      sub_46F088("%-12s: %s\n", "Relocations", v22);
      v23 = (const char *)sub_45B5D0(1011);
      if ( v23 != nullptr )
        sub_46F088("%-12s: %s\n", "Vendor", v23);
      v24 = (const char *)sub_45B5D0(1020);
      if ( v24 != nullptr )
        sub_46F088("%-12s: %s\n", "URL", v24);
      v25 = (const char *)sub_45B5D0(1004);
      sub_46F088("%-12s: %s\n", "Summary", v25);
      v26 = (const char *)sub_45B5D0(1005);
      sub_46F088("Description :\n%s\n", v26);
    }
    if ( (v2 & 0x10) != 0 )
    {
      Key = 1117;
      v27 = bsearch(
              &Key,
              (const void *)*(&MultiByteStr + 1),
              unk_485BE8,
              0x10u,
              (_CoreCrtNonSecureSearchSortCompareFunction)sub_418E5C);
      if ( v27 != nullptr )
      {
        v37 = v27[3];
        while ( 1 )
        {
          if ( v12 >= v37 )
            goto LABEL_20;
          v28 = sub_45B4BC(1037, v12);
          v29 = v2 & 0x60;
          if ( v29 == 96 )
            break;
          if ( v29 == 32 )
          {
            v30 = (v28 & 2) == 0;
            goto LABEL_50;
          }
          if ( v29 == 64 )
          {
            v30 = (v28 & 1) == 0;
            goto LABEL_50;
          }
LABEL_51:
          v31 = (const char *)sub_45B550(1117, v12);
          v32 = sub_45B4BC(1116, v12);
          v33 = (const char *)sub_45B550(1118, v32);
          sub_46F088("%s%s\n", v33, v31);
LABEL_52:
          ++v12;
        }
        v30 = (v28 & 3) == 0;
LABEL_50:
        if ( v30 )
          goto LABEL_52;
        goto LABEL_51;
      }
    }
LABEL_20:
    if ( *++v5 == nullptr )
      return 0;
    free((void *)MultiByteStr);
    free((void *)*(&MultiByteStr + 1));
    sub_442EA4(FileHandle);
  }
}

