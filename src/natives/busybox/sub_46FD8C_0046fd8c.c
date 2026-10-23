// busybox.exe @ 0x46fd8c size=901

int __usercall sub_46FD8C@<eax>(_DWORD *a1@<eax>, char *Source@<edx>, const char *a3@<ecx>, int a4)
{
  int v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  int i; // ecx
  __int16 v10; // ax
  char *v11; // ebp
  int result; // eax
  unsigned __int64 v13; // rax
  char v14; // bp
  FILE *(__cdecl *v15)(int); // edi
  FILE *v16; // eax
  const char *v17; // ecx
  char *v19; // [esp+14h] [ebp-214h]
  char Str[528]; // [esp+18h] [ebp-210h] BYREF

  memset(Str, 0, 0x200u);
  strncpy(Str, Source, 0x64u);
  sub_4528E0(&Str[100], 8u, *(_DWORD *)(a4 + 16) & 0xFFFLL);
  sub_4528E0(&Str[108], 8u, *(int *)(a4 + 24));
  sub_4528E0(&Str[116], 8u, *(int *)(a4 + 28));
  memset(&Str[124], 48, 0xBu);
  v6 = *(_DWORD *)(a4 + 56);
  if ( v6 < 0 )
    v6 = 0;
  sub_4528E0(&Str[136], 0xCu, v6);
  v7 = (const char *)sub_433600(*(_DWORD *)(a4 + 24));
  sub_45C5AC(&Str[265], v7, 32);
  v8 = (const char *)sub_4335EC(*(_DWORD *)(a4 + 28));
  sub_45C5AC(&Str[297], v8, 32);
  i = a1[4];
  if ( i != 0 )
  {
    Str[156] = 49;
    v19 = (char *)(i + 16);
    strncpy(&Str[157], (const char *)(i + 16), 0x64u);
    if ( Str[256] != 0 )
      sub_46FBAC(v19, 75, 0);
    goto LABEL_30;
  }
  v10 = *(_DWORD *)(a4 + 16) & 0xF000;
  if ( v10 == -24576 )
  {
    v11 = (char *)sub_471264();
    result = 0;
    if ( v11 == nullptr )
      return result;
    Str[156] = 50;
    strncpy(&Str[157], v11, 0x64u);
    if ( Str[256] != 0 )
      sub_46FBAC(v11, 75, 0);
    free(v11);
    goto LABEL_30;
  }
  if ( v10 != 0x4000 )
  {
    if ( v10 == 0x2000 )
    {
      Str[156] = 51;
    }
    else
    {
      if ( v10 != 12288 )
      {
        if ( v10 == 4096 )
        {
          Str[156] = 54;
        }
        else
        {
          if ( v10 != (__int16)0x8000 )
          {
            sub_41783C("%s: unknown file type", a3);
            return 0;
          }
          v13 = *(_QWORD *)(a4 + 40);
          if ( HIDWORD(v13) > 0xF )
          {
            for ( i = 12; i != 0; --i )
            {
              v14 = v13;
              Str[i + 123] = v13;
              v13 >>= 8;
            }
            Str[124] = v14 | 0x80;
          }
          else
          {
            sub_4528E0(&Str[124], 0xCu, *(_QWORD *)(a4 + 40));
          }
          Str[156] = 48;
        }
        goto LABEL_30;
      }
      Str[156] = 52;
    }
    sub_4528E0(&Str[329], 8u, 0);
    sub_4528E0(&Str[337], 8u, 0);
    goto LABEL_30;
  }
  Str[156] = 53;
  if ( Str[99] != 0 )
  {
LABEL_13:
    sub_46FBAC(Source, 76, (*(_DWORD *)(a4 + 16) & 0xF000) == 0x4000);
    goto LABEL_31;
  }
  Str[strlen(Str)] = 47;
LABEL_30:
  if ( Str[99] != 0 )
    goto LABEL_13;
LABEL_31:
  sub_41C6C4(i, (int)Str);
  result = 1;
  if ( a1[1] != 0 )
  {
    v15 = off_4730E8;
    v16 = off_4730E8(1);
    if ( *a1 == 1 )
      v16 = v15(2);
    v17 = "/";
    if ( (*(_DWORD *)(a4 + 16) & 0xF000) != 0x4000 )
      v17 = (const char *)&unk_478805;
    sub_46EEFC(v16, "%s%s\n", Source, v17);
    return 1;
  }
  return result;
}

