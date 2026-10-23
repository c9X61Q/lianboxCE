// busybox.exe @ 0x4394d0 size=392

int __cdecl sub_4394D0(int a1, int a2)
{
  char v2; // al
  const char *Str; // ebx
  char v4; // bl
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // edi
  _BYTE *v8; // eax
  FILE *v9; // eax
  FILE *v10; // ebp
  FILE *v12; // [esp+14h] [ebp-20h]
  void *v13; // [esp+18h] [ebp-1Ch] BYREF
  const char *v14; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD v15[5]; // [esp+20h] [ebp-14h] BYREF

  v13 = &unk_474BF0;
  v14 = (const char *)&unk_474BF0;
  v12 = off_4730E8(1);
  v2 = sub_435D44(a2, (int)"f:t:lco:", &v13, &v14, v15);
  if ( (v2 & 4) != 0 )
  {
    Str = "CP65001";
    do
    {
      sub_46F088("%s\n", Str);
      Str += strlen(Str) + 1;
    }
    while ( *Str != 0 );
    return 0;
  }
  v4 = v2;
  if ( (v2 & 0x10) != 0 )
    v12 = (FILE *)sub_470CCC();
  if ( (v4 & 8) != 0 )
    v14 = (const char *)sub_4708BC("%s//IGNORE", v14);
  v5 = (_DWORD *)sub_4728CC();
  *_errno() = 0;
  if ( sub_44174C() == 0 || (v6 = sub_44174C()) == 0 )
  {
    free(v5);
LABEL_14:
    sub_418014(v6, "iconv_open error");
  }
  *v5 = v5;
  if ( v5 == (_DWORD *)-1 )
    goto LABEL_14;
  v7 = dword_473090;
  if ( dword_473090 == a1 )
    *(_DWORD *)(a2 + 4 * a1++) = "-";
  while ( a1 > v7 )
  {
    v8 = *(_BYTE **)(a2 + 4 * v7);
    if ( *v8 != 45 || v8[1] != 0 )
      v9 = (FILE *)sub_470CCC();
    else
      v9 = off_4730E8(0);
    v10 = v9;
    sub_44FB40(v12, v9);
    fclose(v10);
    ++v7;
  }
  return 0;
}

