// busybox.exe @ 0x4683f4 size=439

void __cdecl __noreturn sub_4683F4(int a1, int a2)
{
  int v2; // ecx
  int v3; // ebx
  const char *v4; // eax
  int v5; // ecx
  _BYTE *v6; // eax
  const char *v7; // ebp
  char *i; // edi
  const char *String2; // ebx
  char *v10; // eax
  char *v11; // esi
  int k; // ebx
  _BYTE *v13; // eax
  const char *v14; // eax
  int v15; // eax
  FILE *v16; // eax
  char *String1; // [esp+0h] [ebp-3Ch]
  const char *v18; // [esp+14h] [ebp-28h]
  int j; // [esp+18h] [ebp-24h]
  int v20; // [esp+1Ch] [ebp-20h]
  int v21; // [esp+20h] [ebp-1Ch] BYREF
  int v22; // [esp+24h] [ebp-18h] BYREF
  size_t MaxCount[5]; // [esp+28h] [ebp-14h] BYREF

  v22 = 0;
  v21 = 0;
  MaxCount[0] = 0x7FFFFFFF;
  v20 = sub_435D44(a2, (int)"cduf:+s:+w:+i", &v21, &v22, MaxCount);
  v3 = a2 + 4 * dword_473090;
  v4 = *(const char **)v3;
  v18 = *(const char **)v3;
  if ( *(_DWORD *)v3 != 0 )
  {
    if ( *v4 != 45 || v4[1] != 0 )
    {
      sub_442EA4(0);
      sub_47154C(v5, 0);
    }
    v6 = *(_BYTE **)(v3 + 4);
    if ( v6 != nullptr )
    {
      if ( *(_DWORD *)(v3 + 8) != 0 )
        sub_418164();
      if ( *v6 != 45 || v6[1] != 0 )
      {
        sub_47154C(v2, 769);
        sub_471530(String1);
      }
    }
  }
  v7 = nullptr;
  for ( i = nullptr; ; i = v11 )
  {
    String2 = v7;
    for ( j = 0; ; ++j )
    {
      off_4730E8(0);
      v10 = (char *)sub_470E94();
      v11 = v10;
      if ( v10 == nullptr )
        break;
      for ( k = v21; k != 0; --k )
      {
        v13 = sub_460FB8(v10);
        v10 = sub_460E8C(v13);
      }
      String2 = v10;
      v14 = &v10[v22];
      while ( String2 != v14 && *String2 != 0 )
        ++String2;
      if ( i == nullptr )
        goto LABEL_33;
      if ( (v20 & 0x40) != 0 )
        v15 = strnicmp(v7, String2, MaxCount[0]);
      else
        v15 = strncmp(v7, String2, MaxCount[0]);
      if ( v15 != 0 )
        goto LABEL_28;
      free(v11);
    }
    if ( i == nullptr )
      break;
LABEL_28:
    if ( ((j == 0 ? 2 : 4) & v20) == 0 )
    {
      if ( (v20 & 1) != 0 )
        sub_46F088("%7lu ", j + 1);
      sub_46F108(i);
    }
    free(i);
    if ( v11 == nullptr )
      break;
LABEL_33:
    v7 = String2;
  }
  v16 = off_4730E8(0);
  sub_4235CC(v16, v18);
  sub_42F138(0);
}

