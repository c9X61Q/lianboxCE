// busybox.exe @ 0x45da18 size=847

void __usercall __noreturn sub_45DA18(char *a1@<eax>, int a2@<edx>)
{
  int v3; // ebx
  char *Block; // edi
  int v5; // edx
  const char *v6; // eax
  char *SubStr; // esi
  const char *v8; // edi
  char *v9; // edi
  char v10; // al
  const char *i; // edi
  unsigned int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // kr00_8
  int SubStr_4; // [esp+8h] [ebp-8Ch]
  const char *v20; // [esp+18h] [ebp-7Ch]
  __int64 v21; // [esp+18h] [ebp-7Ch]
  size_t v22; // [esp+1Ch] [ebp-78h]
  int v23; // [esp+20h] [ebp-74h]
  signed int v25; // [esp+24h] [ebp-70h]
  _BYTE v26[40]; // [esp+28h] [ebp-6Ch] BYREF
  int v27; // [esp+50h] [ebp-44h]
  int v28; // [esp+54h] [ebp-40h]
  int v29; // [esp+60h] [ebp-34h]

  v3 = dword_486010;
  if ( *(_BYTE *)(dword_486010 + 5) != 0 )
  {
    Block = (char *)sub_4708BC("%s.gz", a1);
    v23 = sub_443508(Block, 0, SubStr_4);
    free(Block);
    if ( v23 != -1 )
    {
      sub_44305C(v23, (int)v26);
      v5 = v28;
      *(_DWORD *)(v3 + 64) = v27;
      *(_DWORD *)(v3 + 68) = v5;
      *(_DWORD *)(v3 + 8) = v29;
      goto LABEL_6;
    }
    *(_BYTE *)(v3 + 5) = 0;
  }
  v23 = sub_443508(a1, 0, SubStr_4);
LABEL_6:
  if ( v23 < 0 )
  {
    if ( a2 == 2 )
      goto LABEL_8;
LABEL_11:
    sub_45E0C0();
  }
  sub_462670(v3 + 116, "\"%llx-%llx\"", (__int64)*(int *)(v3 + 8), *(_QWORD *)(v3 + 64));
  v6 = *(const char **)(v3 + 12);
  if ( v6 != nullptr && strstr(v6, (const char *)(v3 + 116)) != nullptr )
    goto LABEL_11;
  sub_46F190(13, 1);
  SubStr = strrchr(a1, 46);
  if ( SubStr != nullptr )
  {
    v8 = ".txt.h.c.cc.cpp";
    while ( 1 )
    {
      v20 = &v8[strlen(v8) + 1];
      v22 = strlen(v20);
      v9 = strstr(v8, SubStr);
      if ( v9 != nullptr )
        break;
      v8 = &v20[v22 + 1];
      if ( *v8 == 0 )
        goto LABEL_19;
    }
    v10 = v9[strlen(SubStr)];
    if ( v10 == 46 || v10 == 0 )
      *(_DWORD *)(v3 + 40) = v20;
LABEL_19:
    for ( i = *(const char **)(v3 + 100); ; i = *(const char **)i )
    {
      if ( i == nullptr )
        goto LABEL_24;
      if ( strcmp(i + 8, SubStr) == 0 )
        break;
    }
    *(_DWORD *)(v3 + 40) = *((_DWORD *)i + 1);
  }
LABEL_24:
  if ( a2 == 2 || *(_BYTE *)(v3 + 5) != 0 )
  {
    *(_DWORD *)(v3 + 72) = -1;
    *(_DWORD *)(v3 + 76) = -1;
  }
  *(_DWORD *)(v3 + 88) = -1;
  *(_DWORD *)(v3 + 92) = 0x7FFFFFFF;
  v21 = *(_QWORD *)(v3 + 72);
  if ( v21 >= 0 )
  {
    v12 = *(_DWORD *)(v3 + 64);
    v13 = *(_DWORD *)(v3 + 68);
    if ( *(_QWORD *)(v3 + 80) == 0 || *(_QWORD *)(v3 + 80) >= __SPAIR64__(v13, v12) )
      *(_QWORD *)(v3 + 80) = __PAIR64__(v13, v12) - 1;
    if ( *(_QWORD *)(v3 + 80) >= v21 )
    {
      v14 = sub_443400(v23, v21, 0);
      v15 = *(_DWORD *)(v3 + 72);
      v16 = *(_DWORD *)(v3 + 76);
      if ( v14 == __PAIR64__(v16, v15) )
      {
        *(_QWORD *)(v3 + 88) = *(_QWORD *)(v3 + 80) - __PAIR64__(v16, v15) + 1;
LABEL_36:
        sub_45DD68();
        do
        {
LABEL_41:
          v25 = sub_45C560(0x2000, *(LPSTR *)(v3 + 104), v23);
          if ( v25 <= 0 )
            break;
          if ( *(_QWORD *)(v3 + 88) < v25 )
            v25 = *(_DWORD *)(v3 + 88);
          if ( v25 != sub_43269C(v25, *(char **)(v3 + 104)) )
            break;
          v17 = v25;
          v18 = *(_QWORD *)(v3 + 88) - v25;
          *(_QWORD *)(v3 + 88) = v18;
        }
        while ( v18 != 0 );
        if ( v25 < 0 && *(int *)v3 > 1 )
          sub_418224("error", SHIDWORD(v17));
LABEL_8:
        sub_43E920();
      }
    }
    sub_443400(v23, 0, 0);
    *(_DWORD *)(v3 + 72) = -1;
    *(_DWORD *)(v3 + 76) = -1;
  }
  if ( a2 == 2 )
    goto LABEL_41;
  goto LABEL_36;
}

