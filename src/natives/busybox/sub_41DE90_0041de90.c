// busybox.exe @ 0x41de90 size=834

int __cdecl sub_41DE90(const char **a1, const char **a2)
{
  int v2; // edi
  int i; // eax
  char *Str1; // esi
  const char *Str2; // eax
  char *v6; // ebx
  unsigned int v7; // edx
  int v8; // edx
  double v9; // st7
  bool v10; // zf
  double v11; // st5
  bool v12; // dl
  char v13; // fps^1
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  char v17; // ah
  int v18; // eax
  double v19; // st7
  char v20; // fps^1
  bool v21; // c0
  char v22; // c2
  bool v23; // c3
  unsigned int v24; // ebx
  double v26; // [esp+Ch] [ebp-44h]
  int v27; // [esp+Ch] [ebp-44h]
  double v28; // [esp+Ch] [ebp-44h]
  int v29; // [esp+Ch] [ebp-44h]
  int v30; // [esp+Ch] [ebp-44h]
  int v31; // [esp+14h] [ebp-3Ch]
  int *v32; // [esp+18h] [ebp-38h]
  char *v33; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v34[4]; // [esp+20h] [ebp-30h] BYREF
  int v35; // [esp+30h] [ebp-20h]

  LOWORD(v2) = dword_486008;
  for ( i = dword_473444; ; i = *v32 )
  {
    v32 = (int *)i;
    if ( i == 0 )
      break;
    v2 = dword_486008;
    if ( *(_DWORD *)(i + 20) != 0 )
      v2 = *(_DWORD *)(i + 20);
    Str1 = (char *)sub_434630(v2, i);
    Str2 = (const char *)sub_434630(v2, v32);
    v6 = (char *)Str2;
    v7 = v2 & 0xF;
    if ( v7 == 4 )
    {
      v31 = sub_4639A8(Str1, "%b", v34);
      v27 = v35;
      v18 = sub_4639A8(v6, "%b", v34);
      if ( v31 == 0 )
      {
        v10 = v18 == 0;
        goto LABEL_30;
      }
      v8 = 1;
      if ( v18 != 0 )
        v8 = v27 - v35;
    }
    else
    {
      if ( v7 > 4 )
        goto LABEL_11;
      if ( v7 == 2 )
      {
        v26 = sub_402B30((int)Str1, (int)&v33);
        v9 = sub_402B30((int)v6, (int)v34);
        if ( v33 == Str1 )
        {
          v10 = v34[0] == (_DWORD)v6;
LABEL_30:
          v12 = !v10;
          goto LABEL_36;
        }
        v8 = 1;
        if ( (char *)v34[0] == v6 )
          goto LABEL_37;
        v11 = 1.0 / v9;
        if ( 1.0 / v26 == 0.0 )
        {
          if ( v26 < 0.0 )
          {
            if ( v11 != 0.0 )
            {
              v8 = -1;
              goto LABEL_37;
            }
            v12 = v9 >= 0.0;
            goto LABEL_36;
          }
          v8 = v11 != 0.0 || v9 <= 0.0;
        }
        else
        {
          if ( v11 == 0.0 )
          {
            v8 = 2 * (v9 < 0.0) - 1;
            goto LABEL_37;
          }
          v8 = 1;
          if ( v26 <= v9 )
          {
            v14 = v9 < v26;
            v15 = 0;
            v16 = v9 == v26;
            v17 = v13;
            goto LABEL_35;
          }
        }
      }
      else
      {
        if ( (v2 & 0xFu) > 2 )
          goto LABEL_11;
        if ( (v2 & 0xF) == 0 )
        {
          v8 = strcmp(Str1, Str2);
          goto LABEL_37;
        }
        if ( v7 != 1 )
LABEL_11:
          sub_418210("unknown sort type");
        v28 = atof(Str1);
        v19 = atof(v6);
        v8 = 1;
        if ( v28 <= v19 )
        {
          v21 = v19 < v28;
          v22 = 0;
          v23 = v19 == v28;
          v17 = v20;
LABEL_35:
          v12 = (v17 & 1) == 0 && (v17 & 0x40) == 0;
LABEL_36:
          v8 = -v12;
        }
      }
    }
LABEL_37:
    if ( *a1 != Str1 )
    {
      v29 = v8;
      free(Str1);
      v8 = v29;
    }
    if ( *a2 != v6 )
    {
      v30 = v8;
      free(v6);
      v8 = v30;
    }
    if ( v8 != 0 )
      goto LABEL_45;
  }
  if ( (dword_486008 & 0x40) != 0 )
  {
    v24 = *(_DWORD *)&(*a1)[(strlen(*a1) + 4) & 0xFFFFFFFC];
    v8 = *(_DWORD *)&(*a2)[(strlen(*a2) + 4) & 0xFFFFFFFC] < v24 ? 1 : -1;
  }
  else
  {
    v8 = 0;
    if ( (dword_486008 & 0x40000000) == 0 )
    {
      LOWORD(v2) = dword_486008;
      v8 = strcmp(*a1, *a2);
    }
  }
LABEL_45:
  if ( (v2 & 0x200) != 0 )
    return -v8;
  return v8;
}

