// busybox.exe @ 0x469c34 size=689

void __usercall sub_469C34(int a1@<eax>)
{
  int v2; // edi
  const char *v3; // esi
  int v4; // ebp
  int v5; // eax
  int v6; // ebp
  char *v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // ebp
  void *v12; // esi
  FILE *v13; // ebp
  int v14; // eax
  int v15; // [esp+10h] [ebp-24h]
  void *v16; // [esp+14h] [ebp-20h]
  char *Block; // [esp+18h] [ebp-1Ch]
  _DWORD *Blocka; // [esp+18h] [ebp-1Ch]
  char *Blockb; // [esp+18h] [ebp-1Ch]
  int v20; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+20h] [ebp-14h]

  v2 = dword_486010;
  v3 = *(const char **)(dword_486010
                      + 4 * **(unsigned __int16 **)(dword_486010 + 4 * *(unsigned __int16 *)(a1 + 8) + 65528));
  v15 = sub_45CE08(v3);
  v4 = **(unsigned __int16 **)(v2 + 4 * v15 + 105560);
  v21 = 0;
  v5 = sub_435514(v15, 3);
  if ( strcmp(*(const char **)(v2 + 4 * v5), "installed") == 0 )
  {
    sub_46F088(
      "Preparing to replace %s %s (using %s)...\n",
      v3,
      *(const char **)(v2 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v2 + 4 * v4 + 65528) + 2)),
      *(const char **)(a1 + 4));
    if ( (dword_486008 & 0x200) == 0 )
      sub_414540(v3, "md5sums");
    sub_45A670(v4, 0);
  }
  else
  {
    sub_46F088("Unpacking %s (from %s)...\n", v3, *(const char **)(a1 + 4));
  }
  v16 = (void *)sub_4708BC("/var/lib/dpkg/info/%s.%s", v3, (const char *)&unk_477DC8);
  v6 = sub_43AAF8();
  sub_43AB1C(v6);
  v20 = 0;
  v7 = nullptr;
  do
  {
    Block = v7;
    v8 = sub_4708BC("./%s", off_47D720[(_DWORD)v7]);
    sub_43E368(&v20, v8);
    v7 = Block + 1;
  }
  while ( Block != (char *)9 );
  v9 = *(_DWORD **)(v6 + 104);
  v9[3] = v20;
  v9[2] = sub_42FCB8;
  v9[9] = sub_421818;
  v9[24] = v16;
  *v9 |= 4u;
  sub_468B54(v6);
  sub_45C090(v3, "preinst");
  if ( (dword_486008 & 0x100) == 0 )
    sub_414540(v3, "conffiles");
  v10 = (_DWORD *)sub_43AAF8();
  v11 = sub_43AC28();
  v11[1] = v10[1];
  sub_43E368(v10 + 3, (int)"data.tar");
  sub_43E368(v10 + 3, (int)"data.tar.gz");
  sub_43E368(v10 + 3, (int)"data.tar.bz2");
  sub_43E368(v10 + 3, (int)"data.tar.lzma");
  sub_43E368(v10 + 3, (int)"data.tar.xz");
  v10[26] = v11;
  v11[3] = v21;
  *v11 |= 0x104u;
  v11[2] = sub_42FDE8;
  v11[9] = sub_421818;
  v11[24] = "/";
  sub_468B54((int)v10);
  v12 = (void *)sub_4708BC("/var/lib/dpkg/info/%s.%s", v3, "list");
  v13 = (FILE *)sub_470D04();
  Blocka = (_DWORD *)v10[26];
  Blocka[5] = sub_43E420((_DWORD *)Blocka[5]);
  while ( 1 )
  {
    v14 = v10[26];
    if ( *(_DWORD *)(v14 + 20) == 0 )
      break;
    Blockb = (char *)sub_43E400((_DWORD **)(v14 + 20));
    sub_46EEFC(v13, "%s\n", Blockb);
    free(Blockb);
  }
  fclose(v13);
  sub_45E4C0(v15, "install", 1);
  sub_45E4C0(v15, "unpacked", 3);
  free(v16);
  free(v12);
}

