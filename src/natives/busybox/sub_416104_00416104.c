// busybox.exe @ 0x416104 size=996

void __cdecl __noreturn sub_416104(int a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int v6; // ecx
  _DWORD *v7; // esi
  FILE *(__cdecl *v8)(int); // edi
  _DWORD *v9; // esi
  _DWORD *v10; // esi
  char **v11; // edi
  char *v12; // eax
  char *v13; // esi
  int v14; // ecx
  _DWORD *v15; // esi
  int i; // edi
  int v17; // ecx
  int v18; // eax
  int *v19; // eax
  int v20; // [esp+20h] [ebp-48h]
  char v21; // [esp+28h] [ebp-40h]
  const char *v22; // [esp+3Ch] [ebp-2Ch]
  _BYTE v23[24]; // [esp+44h] [ebp-24h] BYREF

  v22 = "CONVFMT";
  v2 = (_DWORD *)sub_4728CC();
  v3 = v2 + 30;
  dword_486010 = (int)(v2 + 30);
  v2[56] = 49152;
  v2[65] = 1;
  memset(v23, 0, sizeof(v23));
  v2[26] = sub_470E78();
  v2[15] = sub_4380CC();
  v2[16] = sub_4380CC();
  v2[17] = sub_4380CC();
  v2[18] = sub_4380CC();
  v4 = v2 + 34;
  while ( *v22 != 0 )
  {
    sub_446BC0();
    v5 = (_DWORD *)sub_437FC0();
    *v4 = v5;
    if ( a6g[0] == -1 )
    {
      sub_45EC34(0.0);
    }
    else
    {
      sub_446BC0();
      sub_45EC78(v6);
    }
    if ( *v22 == 42 )
    {
      *v5 |= 0x400u;
      ++v22;
    }
    ++v4;
  }
  sub_437B2C();
  sub_437B2C();
  v7 = (_DWORD *)sub_437FC0();
  v8 = off_4730E8;
  *v7 = off_4730E8(0);
  v9 = (_DWORD *)sub_437FC0();
  *v9 = v8(1);
  v10 = (_DWORD *)sub_437FC0();
  *v10 = v8(2);
  v11 = environ;
  if ( environ != nullptr )
  {
    while ( *v11 != nullptr )
    {
      v12 = strchr(*v11, 61);
      v13 = v12;
      if ( v12 != nullptr )
      {
        *v12 = 0;
        sub_4394A8();
        sub_437FC0();
        sub_45EC9C();
        *v13 = 61;
      }
      ++v11;
    }
  }
  v21 = sub_435D44(a2, "+F:v:*f:*e:*W:");
  v20 = dword_473090;
  if ( (v21 & 0x10) != 0 )
    sub_4181F8();
  if ( (v21 & 1) != 0 )
  {
    sub_4683D8();
    sub_45EC78(v14);
  }
  *(v3 - 11) = "cmd. line";
  v15 = (_DWORD *)(a2 + 4 * v20);
  if ( (v21 & 0xC) == 0 )
  {
    if ( *v15 == 0 )
      sub_418164();
    ++v15;
    sub_44B3DC();
  }
  sub_45E580("awk", 0);
  for ( i = 0; ; sub_45E580(v17, i) )
  {
    v17 = v15[i++];
    if ( v17 == 0 )
      break;
  }
  sub_45EC34((double)i);
  sub_42B834();
  if ( *(v3 - 25) != 0 || *(v3 - 22) != 0 )
  {
    if ( *(v3 - 16) != 0 )
      goto LABEL_32;
LABEL_31:
    while ( 1 )
    {
      *(v3 - 16) = sub_446628();
LABEL_32:
      if ( *(v3 - 16) == 0 )
        break;
      *((_BYTE *)v3 - 9) = 0;
      sub_45EC34(0.0);
      while ( 1 )
      {
        v18 = sub_415DEC(*(v3 - 16), (_DWORD *)v3[13]);
        if ( v18 <= 0 )
          break;
        *((_BYTE *)v3 - 10) = 0;
        sub_4398F4();
        sub_4398F4();
        sub_42B834();
        if ( *((_BYTE *)v3 - 9) != 0 )
          goto LABEL_31;
      }
      if ( v18 != 0 )
      {
        v19 = _errno();
        strerror(*v19);
        sub_4645B8();
      }
    }
  }
  sub_415D70(0);
}

