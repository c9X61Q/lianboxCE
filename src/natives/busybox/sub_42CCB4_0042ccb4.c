// busybox.exe @ 0x42ccb4 size=1427

int __usercall sub_42CCB4@<eax>(unsigned int *a1@<eax>, int a2@<edx>)
{
  int v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  long double v8; // st7
  double v9; // st7
  int *v10; // eax
  int v11; // ecx
  void *Block; // edi
  _DWORD *v13; // eax
  int i; // ebx
  int v15; // eax
  int v16; // ecx
  double v17; // st7
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  unsigned int v22; // ebx
  int v23; // ebx
  _BYTE *j; // eax
  char v25; // bl
  char *v26; // ebx
  char *v27; // esi
  int v28; // edi
  char *v29; // eax
  int v30; // eax
  struct tm *v31; // eax
  char *v32; // edx
  int v33; // ebx
  int v34; // ecx
  __time32_t v35; // eax
  void **v36; // ebx
  int v37; // ecx
  int v38; // ecx
  int v39; // ebx
  int v41; // [esp+14h] [ebp-8Ch]
  int v42; // [esp+18h] [ebp-88h]
  long double v43; // [esp+1Ch] [ebp-84h]
  int v44; // [esp+1Ch] [ebp-84h]
  int v45; // [esp+1Ch] [ebp-84h]
  signed int MaxCount; // [esp+1Ch] [ebp-84h]
  double v47; // [esp+1Ch] [ebp-84h]
  double v48; // [esp+1Ch] [ebp-84h]
  int v49; // [esp+1Ch] [ebp-84h]
  unsigned int v52; // [esp+2Ch] [ebp-74h]
  __time32_t Time; // [esp+30h] [ebp-70h] BYREF
  _DWORD *v54[2]; // [esp+34h] [ebp-6Ch]
  int *v55; // [esp+3Ch] [ebp-64h]
  int v56; // [esp+44h] [ebp-5Ch]
  int v57; // [esp+4Ch] [ebp-54h]
  int v58; // [esp+50h] [ebp-50h]
  char *Str; // [esp+54h] [ebp-4Ch]
  char *SubStr; // [esp+58h] [ebp-48h]
  int v61; // [esp+64h] [ebp-3Ch] BYREF
  int v62; // [esp+68h] [ebp-38h]
  void *v63[11]; // [esp+74h] [ebp-2Ch] BYREF

  v42 = sub_447010();
  v3 = *a1;
  v52 = a1[2];
  v58 = 0;
  v57 = 0;
  v4 = v3;
  v5 = 0;
  while ( v52 != 0 )
  {
    v54[v5] = (_DWORD *)sub_446AA0();
    if ( (v4 & 0x9000000) != 0 )
      *(&v56 + v5) = sub_42B834(v2, v42 + 24 * v5);
    if ( (v4 & 0x8000000) != 0 )
      (&Str)[v5] = (char *)sub_436704(v2);
    v4 >>= 1;
    if ( ++v5 == 4 )
      goto LABEL_11;
  }
  if ( v3 >> 30 > v5 )
    sub_4645B8();
LABEL_11:
  v6 = v3 & 0x7F;
  switch ( v6 )
  {
    case 0:
      v43 = sub_436630(v2);
      v8 = sub_436630(v7);
      v9 = sub_407D90(v8, v43);
      goto LABEL_67;
    case 1:
      v26 = SubStr;
      MaxCount = strlen(SubStr);
      v27 = Str;
      v41 = strlen(Str) - MaxCount;
      if ( v41 < 0 || MaxCount <= 0 )
        goto LABEL_41;
      if ( *(_BYTE *)(dword_486010 - 12) != 0 )
      {
        v28 = 0;
        while ( 1 )
        {
          v30 = strnicmp(&v27[v28++], v26, MaxCount);
          if ( v30 == 0 )
            break;
          if ( v41 < v28 )
            goto LABEL_41;
        }
      }
      else
      {
        v29 = strstr(Str, SubStr);
        if ( v29 == nullptr )
        {
LABEL_41:
          v28 = 0;
          goto LABEL_49;
        }
        v28 = v29 - v27 + 1;
      }
LABEL_49:
      v44 = v28;
LABEL_66:
      v9 = (double)v44;
LABEL_67:
      sub_45EC34(v9);
LABEL_68:
      sub_4470A4();
      return a2;
    case 2:
      v36 = (void **)sub_415434(v54[1], (int)v63);
      if ( sub_459FE8((int)v36, Str, 1, (int)&v61, 0) != 0 )
      {
        v61 = 0;
        v62 = -1;
      }
      else
      {
        ++v61;
        ++v62;
      }
      v47 = (double)v61;
      sub_437FC0(v37, "RSTART");
      sub_45EC34(v47);
      v48 = (double)(v62 - v61);
      sub_437FC0(v38, "RLENGTH");
      sub_45EC34(v48);
      sub_45EC34((double)v61);
      if ( v36 == v63 )
        sub_45A08C(v36);
      goto LABEL_68;
    case 3:
      v10 = (int *)(dword_486010 + 284);
      if ( v5 > 2 )
      {
        v10 = v55;
        if ( (*v55 & 0xFF00) != 0x2100 )
        {
          sub_42B834(dword_486010, v42 + 48);
          sub_436704(v11);
          v10 = (int *)sub_445100();
        }
      }
      v44 = sub_4166CC(Str, v10, (char **)v63);
      Block = v63[0];
      v13 = (_DWORD *)sub_4394A8();
      sub_41C970(v13);
      for ( i = 1; i <= v44; ++i )
      {
        v15 = sub_446BC0();
        sub_45E580(v15, i);
      }
      free(Block);
      goto LABEL_66;
    case 4:
      strlen(Str);
      v17 = sub_436630(v16) - 1.0;
      if ( v5 > 2 )
        sub_436630((int)v17);
      sub_4718A8();
      goto LABEL_38;
    case 5:
      if ( v5 <= 1 )
        time(&Time);
      else
        Time = (int)sub_436630(v2);
      v31 = localtime(&Time);
      v32 = "%a %b %d %H:%M:%S %Z %Y";
      if ( v5 != 0 )
        v32 = Str;
      v33 = dword_486010;
      *(_BYTE *)(*(_DWORD *)(v33 - 16) + sub_444C3C(*(char **)(dword_486010 - 16), 0xF0u, (int)v32, v31)) = 0;
      sub_45EC78(v34);
      goto LABEL_68;
    case 6:
      v35 = sub_42744C((int)Str);
      goto LABEL_65;
    case 7:
    case 8:
      for ( j = (_BYTE *)sub_47188C(); *j != 0; ++j )
      {
        v25 = *j | 0x20;
        if ( (unsigned __int8)(v25 - 97) <= 0x19u )
        {
          if ( v6 == 8 )
            v25 = *j & 0xDF;
          *j = v25;
        }
      }
LABEL_38:
      sub_45EC5C();
      goto LABEL_68;
    case 9:
      v39 = v58;
      v49 = (int)sub_436630(v2);
      sub_4168F4(v54[0], SubStr, v49, v39, a2, 1);
      goto LABEL_68;
    case 10:
      v35 = sub_4168F4(v54[0], SubStr, 0, v57, v57, 0);
      goto LABEL_65;
    case 11:
      v35 = sub_4168F4(v54[0], SubStr, 1, v57, v57, 0);
LABEL_65:
      v44 = v35;
      goto LABEL_66;
    case 12:
      v18 = sub_4366A4();
      v19 = sub_4366A4() & v18;
      goto LABEL_28;
    case 13:
      v45 = ~sub_4366A4();
      goto LABEL_25;
    case 14:
      v20 = sub_4366A4();
      v19 = v20 << sub_4366A4();
      goto LABEL_28;
    case 15:
      v21 = sub_4366A4();
      v19 = sub_4366A4() | v21;
      goto LABEL_28;
    case 16:
      v22 = sub_4366A4();
      v19 = v22 >> sub_4366A4();
      goto LABEL_28;
    case 17:
      v23 = sub_4366A4();
      v19 = sub_4366A4() ^ v23;
LABEL_28:
      v45 = v19;
LABEL_25:
      v9 = (double)(unsigned int)v45;
      goto LABEL_67;
    default:
      goto LABEL_68;
  }
}

