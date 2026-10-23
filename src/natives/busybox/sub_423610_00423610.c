// busybox.exe @ 0x423610 size=1631

int __cdecl sub_423610(int a1, int a2)
{
  char *v2; // ebx
  char *v3; // edi
  int v4; // esi
  int v5; // ebp
  char *v6; // eax
  int v7; // edx
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  void *v11; // ebp
  BOOL v12; // edi
  int v13; // esi
  void *v14; // edx
  int v15; // ecx
  __int16 v16; // ax
  __int16 v17; // dx
  const char *v18; // eax
  unsigned __int8 v19; // di
  char *v20; // eax
  const char *v21; // edx
  char *Str; // [esp+0h] [ebp-74h]
  char *Stra; // [esp+0h] [ebp-74h]
  char Str2; // [esp+4h] [ebp-70h]
  char Str2a; // [esp+4h] [ebp-70h]
  int v27; // [esp+18h] [ebp-5Ch]
  __int16 v28; // [esp+18h] [ebp-5Ch]
  void *v29; // [esp+18h] [ebp-5Ch]
  const char *v30; // [esp+18h] [ebp-5Ch]
  const char *v31; // [esp+18h] [ebp-5Ch]
  char *v32; // [esp+24h] [ebp-50h]
  char *v33; // [esp+28h] [ebp-4Ch]
  void *Block[2]; // [esp+2Ch] [ebp-48h]
  void *v35; // [esp+34h] [ebp-40h]
  void *v36; // [esp+38h] [ebp-3Ch]
  const char *v37; // [esp+3Ch] [ebp-38h]
  const char *v38; // [esp+40h] [ebp-34h]
  _DWORD v39[9]; // [esp+44h] [ebp-30h] BYREF

  v2 = (char *)sub_4728CC();
  dword_486010 = (int)v2;
  *((_DWORD *)v2 + 1) = 3;
  sub_435D60(a2, "^abdiL:*NqrsS:tTU:+wupBE", "ignore-case");
  byte_4735D4 = 2;
  v3 = v2 + 24;
  v27 = a2 + 4 * dword_473090;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(char **)(v27 + 4 * v4);
    (&v32)[v4] = v6;
    if ( *v6 != 45 || v6[1] != 0 )
    {
      if ( (dword_486008 & 0x20) == 0 || sub_444C28(v6, v3) != 0 )
        ((void (*)(void))sub_471860)();
    }
    else
    {
      Str2 = (char)v3;
      sub_44305C(0);
      ++v5;
    }
    v3 += 96;
    if ( v4 == 1 )
      break;
    v4 = 1;
  }
  byte_4735D4 = 1;
  v7 = *((_DWORD *)v2 + 10);
  if ( v5 != 0 && ((v7 & 0xF000) == 0x4000 || (*((_DWORD *)v2 + 34) & 0xF000) == 0x4000) )
    sub_418210("can't compare stdin to a directory");
  v28 = *((_DWORD *)v2 + 34);
  if ( *((_QWORD *)v2 + 4) != 0
    && *((_DWORD *)v2 + 9) == *((_DWORD *)v2 + 33)
    && *((_DWORD *)v2 + 8) == *((_DWORD *)v2 + 32)
    && *((_DWORD *)v2 + 6) == *((_DWORD *)v2 + 30)
    && *((_DWORD *)v2 + 17) == *((_DWORD *)v2 + 41)
    && *((_DWORD *)v2 + 16) == *((_DWORD *)v2 + 40)
    && *((_DWORD *)v2 + 20) == *((_DWORD *)v2 + 44)
    && *((_DWORD *)v2 + 22) == *((_DWORD *)v2 + 46)
    && v28 == (_WORD)v7
    && *((_DWORD *)v2 + 11) == *((_DWORD *)v2 + 35)
    && *((_DWORD *)v2 + 12) == *((_DWORD *)v2 + 36) )
  {
    v8 = 0;
    if ( *((_DWORD *)v2 + 13) == *((_DWORD *)v2 + 37) )
      return v8;
  }
  v9 = v28 & 0xF000;
  if ( (v7 & 0xF000) == 0x4000 )
  {
    if ( v9 == 0x4000 )
    {
      memset(v39, 0, 0x20u);
      *((_DWORD *)v2 + 2) = v33;
      v39[0] = strlen(v32);
      sub_45927C(sub_460DF0, (char)v39, 0);
      sub_452C9C();
      *((_DWORD *)v2 + 2) = v32;
      v39[4] = strlen(v33);
      sub_45927C(sub_460DF0, (char)&v39[4], 0);
      sub_452C9C();
      while ( 1 )
      {
        v14 = nullptr;
        if ( v39[1] < v39[2] )
          v14 = *(void **)(v39[3] + 4 * v39[1]);
        Block[0] = v14;
        v11 = nullptr;
        if ( v39[5] < v39[6] )
        {
          v10 = v39[7];
          v11 = *(void **)(v39[7] + 4 * v39[5]);
        }
        Block[1] = v11;
        if ( v14 != nullptr )
        {
          if ( v11 != nullptr )
          {
            v29 = v14;
            v13 = strcmp((const char *)v14, (const char *)v11);
            v12 = v13 > 0;
            v14 = v29;
            if ( v13 == 0 )
              goto LABEL_45;
          }
          else
          {
            v12 = false;
            v13 = -1;
          }
        }
        else
        {
          if ( v11 == nullptr )
            return *v2;
          v12 = true;
          v13 = 1;
        }
        if ( (dword_486008 & 0x20) != 0 )
          break;
        sub_46F088("Only in %s: %s\n", (&v32)[v13 > 0], (const char *)Block[v12]);
        *v2 |= 1u;
LABEL_36:
        free(Block[v12]);
        ++v39[4 * v12 + 1];
        if ( v13 == 0 )
        {
          free(Block[1 - v12]);
          ++v39[4 * (1 - v12) + 1];
        }
      }
      if ( v12 )
      {
        v35 = (void *)sub_41E9A4(v32, (const char *)v11, v10);
        v37 = "/dev/null";
      }
      else
      {
LABEL_45:
        v30 = (const char *)v14;
        v35 = (void *)sub_41E9A4(v32, (const char *)v14, v10);
        v37 = (const char *)v35;
        sub_444C28(v35, v2 + 24);
        if ( v13 != 0 && !v12 )
        {
          v36 = (void *)sub_41E9A4(v33, v30, v15);
          v38 = "/dev/null";
          goto LABEL_53;
        }
      }
      v36 = (void *)sub_41E9A4(v33, (const char *)v11, v15);
      v38 = (const char *)v36;
      sub_444C28(v36, v2 + 120);
      if ( v13 == 0 )
      {
LABEL_54:
        v16 = *((_DWORD *)v2 + 10) & 0xF000;
        if ( v16 == 0x4000 )
        {
          if ( (*((_DWORD *)v2 + 34) & 0xF000) == 0x4000 )
          {
            sub_46F088("Common subdirectories: %s and %s\n", (const char *)v35, (const char *)v36);
LABEL_66:
            free(v35);
            free(v36);
            goto LABEL_36;
          }
        }
        else if ( v16 != (__int16)0x8000 )
        {
          v18 = (const char *)v35;
LABEL_60:
          sub_46F088("File %s is not a regular file or directory and was skipped\n", v18);
          goto LABEL_66;
        }
        v17 = *((_DWORD *)v2 + 34) & 0xF000;
        if ( ((v17 - 0x4000) & 0xB000) == 0 )
        {
          if ( (v16 == 0x4000) == (v17 == 0x4000) )
          {
            sub_423C70(Stra, Str2a);
            sub_44F020();
          }
          else if ( v16 == 0x4000 )
          {
            sub_46F088(
              "File %s is a %s while file %s is a %s\n",
              (const char *)v35,
              "directory",
              (const char *)v36,
              "regular file");
          }
          else
          {
            sub_46F088(
              "File %s is a %s while file %s is a %s\n",
              (const char *)v35,
              "regular file",
              (const char *)v36,
              "directory");
          }
          goto LABEL_66;
        }
        v18 = (const char *)v36;
        goto LABEL_60;
      }
LABEL_53:
      sub_444C28(*(&v35 + v12), &v2[96 * (1 - v12) + 24]);
      goto LABEL_54;
    }
    v19 = 0;
  }
  else
  {
    v19 = 1;
    if ( v9 != 0x4000 )
    {
      v19 = 0;
      v4 = 0;
      goto LABEL_73;
    }
  }
  v31 = (&v32)[v9 != 0x4000];
  v20 = strrchr(v31, 47);
  v21 = v31;
  if ( v20 != nullptr )
    v21 = v20 + 1;
  (&v32)[v19] = (char *)sub_41E9A4((&v32)[v19], v21, v19);
  sub_471860(96 * v19, &v2[96 * v19 + 24]);
LABEL_73:
  if ( v5 <= 1 )
    sub_423C70(Str, Str2);
  sub_44F020();
  if ( v4 != 0 )
    free((&v32)[v19]);
  return *v2;
}

