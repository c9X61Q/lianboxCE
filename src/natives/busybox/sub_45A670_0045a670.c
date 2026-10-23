// busybox.exe @ 0x45a670 size=369

int __usercall sub_45A670@<eax>(int a1@<eax>, int a2@<edx>)
{
  unsigned __int16 *v3; // edx
  const char *v4; // ebx
  size_t v5; // eax
  void *v6; // esp
  int v7; // ecx
  void *v8; // esp
  void *v9; // ecx
  void *v10; // ecx
  FILE *v11; // esi
  int v12; // ecx
  int v13; // esi
  const char **v14; // ebx
  char Str; // [esp+0h] [ebp-28h]
  char Stra; // [esp+0h] [ebp-28h]
  CHAR ExistingFileName[4]; // [esp+10h] [ebp-18h] BYREF
  FILE *v19; // [esp+14h] [ebp-14h]
  LPCSTR lpNewFileName; // [esp+18h] [ebp-10h]

  v3 = *(unsigned __int16 **)(dword_486010 + 4 * a1 + 65528);
  v4 = *(const char **)(dword_486010 + 4 * *v3);
  v19 = *(FILE **)(dword_486010 + 4 * v3[1]);
  *(_DWORD *)ExistingFileName = sub_45CE08();
  v5 = strlen(v4);
  v6 = alloca(sub_4115D8(4 * ((v5 + 28) >> 2), v5, Str));
  lpNewFileName = ExistingFileName;
  v8 = alloca(sub_4115D8(4 * ((unsigned int)(v7 + 33) >> 2), v7, Stra));
  if ( a2 != 0 )
    sub_46F088("Removing %s (%s)...\n", v4, (const char *)v19);
  sub_45C090();
  sub_462790(lpNewFileName, "/var/lib/dpkg/info/%s.%s", v4, "list");
  v19 = sub_420960(v9);
  sub_462790(ExistingFileName, "/var/lib/dpkg/info/%s.%s", v4, "conffiles");
  v11 = sub_420960(v10);
  while ( sub_45A564((const char **)&v19->_ptr, (const char **)&v11->_ptr) != 0 )
    ;
  sub_431BC0(v11);
  sub_431BC0(v19);
  v13 = sub_4728CC(v12);
  *(_DWORD *)v13 = sub_47188C();
  *(_DWORD *)(v13 + 4) = sub_4708BC("/var/lib/dpkg/info/%s.%s", v4, "postrm");
  v14 = (const char **)sub_414174(v4);
  sub_45A564(v14, (const char **)v13);
  sub_431BC0(v14);
  sub_431BC0((void *)v13);
  sub_443B88(ExistingFileName, lpNewFileName);
  return sub_45E4C0(3, "config-files");
}

