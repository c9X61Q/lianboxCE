// busybox.exe @ 0x441fbc size=1016

int __cdecl sub_441FBC(int a1, int a2)
{
  void *v2; // ecx
  const char **v3; // esi
  char **i; // edi
  char *Str; // ebx
  char *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // ecx
  int *v10; // ebx
  int v11; // ecx
  char *v12; // ebp
  int v13; // eax
  char *v14; // ecx
  int v15; // eax
  char *v16; // eax
  char *v17; // eax
  int v18; // ecx
  char *v19; // eax
  char *v20; // eax
  __time32_t v21; // eax
  int v22; // ecx
  int v23; // ebp
  const char *j; // ebx
  int v25; // edi
  int v26; // eax
  void *Block; // [esp+20h] [ebp-50h]
  char *v29; // [esp+24h] [ebp-4Ch]
  char *v30; // [esp+24h] [ebp-4Ch]
  char *v31; // [esp+28h] [ebp-48h]
  const char *v32; // [esp+2Ch] [ebp-44h]
  int v33; // [esp+30h] [ebp-40h]
  int v34; // [esp+38h] [ebp-38h]
  void *v35; // [esp+3Ch] [ebp-34h]
  char v36; // [esp+40h] [ebp-30h]
  int v37; // [esp+44h] [ebp-2Ch] BYREF
  char *Str2; // [esp+48h] [ebp-28h] BYREF
  char *v39; // [esp+4Ch] [ebp-24h]
  __int128 v40; // [esp+50h] [ebp-20h] BYREF

  v40 = *(_OWORD *)off_473024;
  MultiByteStr = (u_long)"col";
  *(&MultiByteStr + 1) = (u_long)"tbl";
  NumOfElements = (__time32_t)"nroff -mandoc";
  *(&NumOfElements + 1) = (__time32_t)"less";
  v36 = sub_435D44(a2, (int)"^+aw");
  v3 = (const char **)(a2 + 4 * dword_473090);
  for ( i = (char **)v3; ; ++i )
  {
    Str = *i;
    if ( *i == nullptr )
      break;
    if ( strchr(Str, 47) != nullptr || strchr(Str, 92) != nullptr )
      *i = (char *)sub_4703D0(Str);
  }
  sub_41BA00(v2);
  Block = (void *)sub_47188C();
  v37 = 0;
  v6 = (char *)sub_44328C((char *)"MANPATH");
  v7 = sub_412CE8(v6, 0, &v37);
  v10 = sub_41EA7C(v8, (int (*)(void))sub_4314C0);
  if ( v10 == nullptr )
  {
    v10 = sub_41EA7C(v9, (int (*)(void))sub_4314C0);
    if ( v10 == nullptr )
      v10 = sub_41EA7C(v11, (int (*)(void))sub_4314C0);
  }
  while ( sub_41EA98(v10, &Str2, (signed __int32)&loc_470000 + 2, "# \t") != 0 )
  {
    v29 = v39;
    if ( v39 != nullptr )
    {
      v12 = Str2;
      if ( strcmp("DEFINE", Str2) == 0 )
      {
        MultiByteStr = sub_439870(MultiByteStr, "col", (int)v29);
        *(&MultiByteStr + 1) = sub_439870(*(&MultiByteStr + 1), "tbl", (int)v39);
        NumOfElements = sub_439870(NumOfElements, "nroff", (int)v39);
        *(&NumOfElements + 1) = sub_439870(*(&NumOfElements + 1), "pager", (int)v39);
      }
      else
      {
        v13 = strcmp("MANPATH", v12);
        v14 = v29;
        if ( v13 == 0 || (v15 = strcmp("MANDATORY_MANPATH", v12), v14 = v29, v15 == 0) )
          v7 = sub_412CE8(v14, v7, &v37);
      }
      if ( strcmp("MANSECT", Str2) == 0 )
      {
        free(Block);
        Block = (void *)sub_47188C();
      }
    }
  }
  sub_41EA48((int)v10);
  sub_433530();
  v16 = (char *)sub_47188C();
  v17 = sub_403200(v16);
  v19 = (char *)sub_41E9A4(v17, "man", v18);
  if ( v7 != 0 )
  {
    v20 = (char *)sub_412CE8(v19, v7, &v37);
  }
  else
  {
    DWORD2(v40) = v19;
    v20 = (char *)&v40;
  }
  v31 = v20;
  v21 = sub_44328C("MANPAGER");
  if ( v21 != 0 || (v21 = sub_44328C("PAGER")) != 0 )
    *(&NumOfElements + 1) = v21;
  if ( sub_443380(1) == 0 )
  {
    sub_443A9C("GROFF_NO_SGR=1");
    *(&NumOfElements + 1) = sub_4708BC("%s -b -p -x", (const char *)MultiByteStr);
  }
  v34 = 0;
  do
  {
    if ( strchr(*v3, 47) != nullptr )
    {
      v23 = sub_460288(0, 1);
LABEL_43:
      if ( v23 == 0 )
      {
        sub_41783C("no manual entry for '%s'", *v3);
        v34 = 1;
      }
      goto LABEL_45;
    }
    v30 = v31;
    v23 = 0;
LABEL_36:
    v32 = *(const char **)v30;
    if ( *(_DWORD *)v30 == 0 )
      goto LABEL_43;
    j = (const char *)Block;
    while ( 1 )
    {
      v33 = sub_4635B0(v22, 58);
      v25 = 0;
      do
      {
        v35 = (void *)sub_4708BC(
                        "%s/%s%.*s/%s.%.*s",
                        v32,
                        (const char *)(4 * v25 + 4674181),
                        v33 - (_DWORD)j,
                        j,
                        *v3,
                        v33 - (_DWORD)j,
                        j);
        v26 = sub_460288(0, v25);
        v23 |= v26;
        v25 += v26 + 1;
        free(v35);
      }
      while ( v25 <= 1 );
      if ( v23 != 0 && (v36 & 1) == 0 )
        break;
      for ( j = (const char *)v33; *j == 58; ++j )
        ;
      if ( *j == 0 )
      {
        v30 += 4;
        goto LABEL_36;
      }
    }
LABEL_45:
    ++v3;
  }
  while ( *v3 != nullptr );
  return v34;
}

