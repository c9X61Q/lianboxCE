// busybox.exe @ 0x42692c size=306

BOOL __usercall sub_42692C@<eax>(_DWORD *a1@<eax>, char *a2@<edx>, int a3@<ecx>)
{
  void *v4; // esp
  const char ***v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int i; // edi
  void *v9; // edx
  int v10; // edx
  int v11; // esi
  const char **j; // ebx
  char Block; // [esp+0h] [ebp-24h]
  void *Blocka; // [esp+0h] [ebp-24h]
  const char ***v17; // [esp+Ch] [ebp-18h]
  const char **v18; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+14h] [ebp-10h]

  v4 = alloca(sub_4115D8(4 * (a1[4] + a1[6]) + 16, a3, Block));
  v18 = (const char **)&v18;
  v5 = &v18;
  v19 = 0;
  while ( 1 )
  {
    v6 = (_DWORD *)a1[5];
    if ( a1[4] <= v19 )
      break;
    if ( v6 == nullptr )
    {
      v17 = v5 + 1;
      v7 = sub_471458("{}", a2);
      Blocka = v9;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1[3] + 4 * v19) == 0 )
    {
      v17 = v5 + 1;
      v7 = sub_47188C(Blocka);
LABEL_10:
      *v5 = (const char **)v7;
      goto LABEL_11;
    }
    for ( i = 0; ; ++i )
    {
      v17 = &v5[i];
      if ( *(_DWORD *)(a1[5] + i * 4) == 0 )
        break;
      v5[i] = (const char **)sub_471458("{}", *(char **)(a1[5] + i * 4));
      free(*(void **)(a1[5] + i * 4));
    }
LABEL_11:
    ++v19;
    v5 = v17;
  }
  *v5 = nullptr;
  if ( v6 != nullptr )
  {
    *v6 = 0;
    a1[6] = 0;
    a1[7] = 0;
  }
  v11 = sub_461710(Blocka);
  if ( v11 < 0 )
    sub_418224(*v18, v10);
  for ( j = v18; *j++ != nullptr; free((void *)*(j - 1)) )
    ;
  return v11 == 0;
}

