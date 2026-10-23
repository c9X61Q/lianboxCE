// busybox.exe @ 0x41cfdc size=3309

unsigned int __usercall sub_41CFDC@<eax>(char *a1@<eax>, int a2@<ecx>)
{
  char *v2; // edi
  char v3; // al
  int v4; // ebp
  unsigned __int8 *v5; // ebx
  char v6; // al
  _BYTE *i; // edi
  char v8; // al
  _BYTE *j; // eax
  const char *Source; // eax
  char v11; // cl
  int v12; // ecx
  _BYTE *v13; // eax
  int v14; // ecx
  size_t v15; // esi
  int v16; // eax
  int v17; // eax
  size_t MaxCount; // eax
  size_t v19; // eax
  _BYTE *v20; // eax
  int v21; // esi
  int v22; // ebx
  int v23; // edi
  int v24; // ecx
  int v25; // eax
  const char *v26; // ecx
  const char *v27; // edx
  size_t v28; // eax
  size_t v29; // eax
  size_t v30; // eax
  unsigned __int8 v31; // dl
  int v32; // esi
  size_t v33; // eax
  size_t v34; // eax
  size_t v35; // eax
  int v36; // eax
  int v37; // edx
  size_t v38; // eax
  int v39; // ebx
  int v40; // ecx
  int v41; // edi
  unsigned int v42; // ebx
  int v43; // eax
  const char *v44; // edx
  unsigned int v45; // eax
  size_t v46; // eax
  size_t v47; // eax
  char v48; // al
  const char *v49; // esi
  char *v50; // ebx
  const char *v51; // ebx
  const char *v52; // ecx
  const char *v53; // edx
  int v54; // edi
  char *v55; // eax
  char *v56; // esi
  char *v57; // eax
  char *v58; // edi
  unsigned int v59; // ebx
  int v60; // ecx
  int v61; // ebp
  const char *v62; // eax
  const char *v63; // ebx
  int v64; // eax
  size_t v65; // eax
  size_t v66; // eax
  int v67; // ecx
  size_t v68; // eax
  size_t v69; // eax
  int v70; // eax
  int v71; // esi
  int v72; // edi
  int v73; // eax
  int v74; // ecx
  int v75; // esi
  unsigned __int8 v76; // bl
  size_t v77; // eax
  int v78; // ebx
  unsigned int result; // eax
  char *Destination; // [esp+0h] [ebp-148h]
  char *Destinationa; // [esp+0h] [ebp-148h]
  unsigned int v82; // [esp+18h] [ebp-130h]
  int v83; // [esp+18h] [ebp-130h]
  int v84; // [esp+18h] [ebp-130h]
  char *k; // [esp+1Ch] [ebp-12Ch]
  char v86; // [esp+1Ch] [ebp-12Ch]
  unsigned __int8 v87; // [esp+1Ch] [ebp-12Ch]
  unsigned int v88; // [esp+1Ch] [ebp-12Ch]
  int v89; // [esp+20h] [ebp-128h]
  const char *v90; // [esp+20h] [ebp-128h]
  char *v91; // [esp+24h] [ebp-124h]
  char *v92; // [esp+24h] [ebp-124h]
  int v93; // [esp+28h] [ebp-120h]
  char v94; // [esp+28h] [ebp-120h]
  int v95; // [esp+2Ch] [ebp-11Ch]
  int v96; // [esp+30h] [ebp-118h]
  int v97; // [esp+34h] [ebp-114h] BYREF
  char Str; // [esp+38h] [ebp-110h] BYREF
  char v99; // [esp+39h] [ebp-10Fh]
  char String1[144]; // [esp+B8h] [ebp-90h] BYREF

  v2 = a1;
  v3 = *a1;
  if ( v3 == 0 )
    goto LABEL_233;
  if ( v3 == 58 )
    ++v2;
  v96 = -1;
  v95 = -1;
  v4 = dword_486010;
  v5 = *(unsigned __int8 **)dword_486010;
  v82 = *(_DWORD *)(dword_486010 + 4) - 1;
  sub_41F7C0(a2, v82);
  while ( 1 )
  {
    v6 = *v2;
    if ( *v2 != 32 && v6 != 9 )
      break;
    ++v2;
  }
  v91 = *(char **)(v4 + 64);
  if ( v6 == 37 )
  {
    i = v2 + 1;
    v95 = 1;
    v96 = sub_41F7C0(*(_DWORD *)(v4 + 64), v82);
LABEL_22:
    while ( *i == 9 || *i == 32 )
      ++i;
    goto LABEL_24;
  }
  for ( i = (_BYTE *)sub_43507C(); ; ++i )
  {
    v8 = *i;
    if ( *i != 9 && v8 != 32 )
      break;
  }
  if ( v8 == 44 )
  {
    for ( j = i + 1; *j == 32 || *j == 9; ++j )
      ;
    i = (_BYTE *)sub_43507C();
    goto LABEL_22;
  }
LABEL_24:
  Source = i;
  for ( k = &Str; ; *(k - 1) = v11 )
  {
    v11 = *Source;
    if ( (*Source & 0xDF) == 0 || (unsigned __int8)(v11 - 9) <= 4u )
      break;
    ++Source;
    ++k;
  }
  *k = 0;
  while ( *Source == 32 || *Source == 9 )
    ++Source;
  strcpy(String1, Source);
  v13 = (_BYTE *)sub_43D3D4(v12, 33);
  v93 = 0;
  if ( v13 != nullptr )
  {
    *v13 = 0;
    v93 = 1;
  }
  if ( v95 >= 0 )
  {
    v5 = (unsigned __int8 *)sub_430594();
    v82 = sub_4298C0();
  }
  if ( v96 >= 0 )
  {
    sub_430594();
    v82 = sub_4298C0();
  }
  v15 = strlen(&Str);
  if ( v15 == 0 )
  {
    if ( v95 >= 0 )
    {
      v16 = sub_430594();
LABEL_55:
      *(_DWORD *)(v4 + 8) = v16;
      sub_427A10();
    }
LABEL_233:
    v78 = dword_486010;
    result = sub_418CCC(*(_DWORD *)(dword_486010 + 8));
    *(_DWORD *)(v78 + 8) = result;
    return result;
  }
  v86 = Str;
  if ( Str == 33 )
  {
    sub_4367D4();
    sub_42F128(Destination);
    v17 = sub_444E20(i + 1);
    if ( v17 != 0 )
      sub_46F088("\nshell returned %i\n\n", v17);
    goto LABEL_83;
  }
  if ( Str == 61 && v99 == 0 )
  {
    if ( v95 < 0 )
      v95 = sub_41F7C0(v14, *(_DWORD *)(v4 + 8));
    sub_46304C("%d", v95);
    goto LABEL_233;
  }
  MaxCount = v15;
  if ( v15 > 7 )
    MaxCount = 7;
  if ( strncmp(&Str, "delete", MaxCount) == 0 )
  {
    if ( v95 < 0 )
    {
      sub_418A48(*(_DWORD *)(v4 + 8));
      sub_4298C0();
    }
    v16 = sub_4728E8(1, 1);
    goto LABEL_55;
  }
  v19 = v15;
  if ( v15 > 5 )
    v19 = 5;
  if ( strncmp(&Str, "edit", v19) == 0 )
  {
    if ( *(_DWORD *)(v4 + 20) == 0 || v93 != 0 )
    {
      if ( String1[0] != 0 || (v20 = *(_BYTE **)(v4 + 64)) != nullptr && *v20 != 0 )
      {
        v21 = sub_43AC70();
        free(*(void **)(v4 + 232));
        *(_DWORD *)(v4 + 232) = 0;
        free(*(void **)(v4 + 4 * *(unsigned __int8 *)(v4 + 120) + 124));
        *(_DWORD *)(v4 + 4 * *(unsigned __int8 *)(v4 + 120) + 124) = 0;
        v22 = *(_DWORD *)(v4 + 4);
        v23 = *(_DWORD *)v4;
        v25 = sub_41F7C0(v24, v22 - 1);
        v26 = " [Readonly]";
        if ( *(_BYTE *)(v4 + 17) == 0 )
          v26 = (const char *)&unk_47B4D8;
        v27 = " [New file]";
        if ( v21 >= 0 )
          v27 = (const char *)&unk_47B4D8;
        sub_46304C("'%s'%s%s %uL, %uC", *(const char **)(v4 + 64), v27, v26, v25, v22 - v23);
      }
      else
      {
        sub_463088("No current filename");
      }
      goto LABEL_233;
    }
    goto LABEL_61;
  }
  v28 = v15;
  if ( v15 > 5 )
    v28 = 5;
  if ( strncmp(&Str, "file", v28) == 0 )
  {
    if ( (v96 & v95) == 0xFFFFFFFF )
    {
      if ( String1[0] != 0 )
      {
        free(*(void **)(v4 + 64));
        *(_DWORD *)(v4 + 64) = sub_47188C();
      }
      else
      {
        *(_DWORD *)(v4 + 60) = 0;
      }
    }
    else
    {
      sub_463088("No address allowed on this command");
    }
    goto LABEL_233;
  }
  v29 = v15;
  if ( v15 > 9 )
    v29 = 9;
  if ( strncmp(&Str, "features", v29) == 0 )
  {
    sub_4367D4();
    sub_42F128(Destinationa);
    sub_46F108("These features are available:\n"
               "\tPattern searches with / and ?\n"
               "\tLast command repeat with .\n"
               "\tLine marking with 'x\n"
               "\tNamed buffers with \"x\n"
               "\tSome colon mode commands with :\n"
               "\tSettable options with \":set\"\n"
               "\tAdapt to window re-sizes");
LABEL_83:
    sub_411DA8();
    goto LABEL_233;
  }
  v30 = v15;
  if ( v15 > 5 )
    v30 = 5;
  if ( strncmp(&Str, "list", v30) == 0 )
  {
    if ( v95 < 0 )
    {
      v5 = (unsigned __int8 *)sub_418A48(*(_DWORD *)(v4 + 8));
      v82 = sub_4298C0();
    }
    sub_4367D4();
    sub_46F108("\r");
    while ( 1 )
    {
      if ( (unsigned int)v5 > v82 )
        goto LABEL_83;
      v31 = *v5;
      if ( (*v5 & 0x80u) != 0 )
        break;
      if ( v31 == 10 )
      {
        sub_46F964();
        v32 = 0;
        v31 = 10;
        goto LABEL_104;
      }
      if ( v31 <= 0x1Fu || (v32 = 0, v31 == 127) )
      {
        v87 = *v5;
        sub_418130(94);
        if ( v87 != 127 )
        {
          v31 = v87 + 64;
LABEL_102:
          v32 = 0;
          goto LABEL_104;
        }
        v32 = 0;
        v31 = 63;
      }
LABEL_104:
      sub_418130(v31);
      if ( v32 != 0 )
        sub_46F964();
      ++v5;
    }
    if ( v31 == 0x9B )
    {
      sub_46F964();
      v32 = 1;
      v31 = 46;
      goto LABEL_104;
    }
    goto LABEL_102;
  }
  v33 = v15;
  if ( v15 > 5 )
    v33 = 5;
  if ( strncmp(&Str, "quit", v33) != 0 )
  {
    v34 = v15;
    if ( v15 > 5 )
      v34 = 5;
    if ( strncmp(&Str, "next", v34) != 0 )
    {
      v35 = v15;
      if ( v15 > 5 )
        v35 = 5;
      if ( strncmp(&Str, "prev", v35) != 0 )
      {
        v38 = v15;
        if ( v15 > 5 )
          v38 = 5;
        if ( strncmp(&Str, "read", v38) == 0 )
        {
          if ( String1[0] != 0 )
          {
            if ( v95 < 0 )
              sub_418A48(*(_DWORD *)(v4 + 8));
            v39 = sub_446708();
            if ( v39 == *(_DWORD *)(v4 + 4) - 1 )
              v39 = *(_DWORD *)(v4 + 4);
            v83 = *(_DWORD *)v4;
            v41 = sub_42F4D0(0);
            if ( v41 >= 0 )
            {
              v42 = *(_DWORD *)v4 + v39 - v83;
              v43 = sub_41F7C0(v40, v42 + v41 - 1);
              v44 = " [Readonly]";
              if ( *(_BYTE *)(v4 + 17) == 0 )
                v44 = (const char *)&unk_47B4D8;
              sub_46304C("'%s'%s %uL, %uC", String1, v44, v43, v41);
              if ( v41 != 0 )
              {
                v45 = *(_DWORD *)(v4 + 8);
                if ( v45 >= v42 )
                  *(_DWORD *)(v4 + 8) = v41 + v45;
              }
            }
          }
          else
          {
            sub_463088("No filename given");
          }
          goto LABEL_233;
        }
        v46 = v15;
        if ( v15 > 7 )
          v46 = 7;
        if ( strncmp(&Str, "rewind", v46) == 0 )
        {
          if ( *(_DWORD *)(v4 + 20) == 0 || v93 != 0 )
          {
            dword_473090 = -1;
            goto LABEL_225;
          }
          goto LABEL_61;
        }
        v47 = v15;
        if ( v15 > 4 )
          v47 = 4;
        v89 = strncmp(&Str, "set", v47);
        if ( v89 == 0 )
        {
          if ( String1[0] == 0 || (v50 = String1, stricmp(String1, "all") == 0) )
          {
            v48 = *(_BYTE *)(v4 + 16);
            v49 = (const char *)&unk_47B4D8;
            if ( (v48 & 2) == 0 )
              v49 = "no";
            v51 = (const char *)&unk_47B4D8;
            if ( (v48 & 4) == 0 )
              v51 = "no";
            v52 = (const char *)&unk_47B4D8;
            if ( (v48 & 8) == 0 )
              v52 = "no";
            v53 = (const char *)&unk_47B4D8;
            if ( (v48 & 1) == 0 )
              v53 = "no";
            sub_463088(
              "%sautoindent %sflash %signorecase %sshowmatch tabstop=%u",
              v53,
              v52,
              v51,
              v49,
              *(_DWORD *)(v4 + 80));
          }
          else
          {
            while ( *v50 != 0 )
            {
              if ( strncmp(v50, "no", 2u) == 0 )
                v89 = 2;
              sub_45E7E0(v89, "autoindent ", "ai", 1);
              sub_45E7E0(v89, "flash ", "fl", 8);
              sub_45E7E0(v89, "ignorecase ", "ic", 4);
              sub_45E7E0(v89, "showmatch ", "sm", 2);
              if ( strncmp(&v50[v89], "tabstop=", 8u) == 0 )
              {
                v97 = 0;
                sub_462940(&v50[v89 + 8], "%u", &v97);
                if ( (unsigned int)(v97 - 1) <= 0x1F )
                  *(_DWORD *)(v4 + 80) = v97;
              }
              sub_460E8C();
              v50 = (char *)sub_460FB8();
            }
          }
          goto LABEL_233;
        }
        if ( v86 != 115 )
        {
          v65 = v15;
          if ( v15 > 8 )
            v65 = 8;
          if ( strncmp(&Str, "version", v65) == 0 )
          {
            sub_46304C("1.33.0.git");
            goto LABEL_233;
          }
          v66 = v15;
          if ( v15 > 6 )
            v66 = 6;
          if ( strncmp(&Str, "write", v66) != 0 )
          {
            v68 = v15;
            if ( v15 > 3 )
              v68 = 3;
            if ( strncmp(&Str, "wq", v68) != 0 )
            {
              v69 = v15;
              if ( v15 > 3 )
                v69 = 3;
              if ( strncmp(&Str, "wn", v69) != 0 && (v86 != 120 || v99 != 0) )
              {
                if ( v15 > 5 )
                  v15 = 5;
                if ( strncmp(&Str, "yank", v15) == 0 )
                {
                  if ( v95 < 0 )
                  {
                    sub_418A48(*(_DWORD *)(v4 + 8));
                    v82 = sub_4298C0();
                  }
                  sub_465928(*(unsigned __int8 *)(v4 + 120), v82);
                  v75 = sub_41F7C0(v74, v82);
                  v76 = sub_46EAD0();
                  v77 = strlen(*(const char **)(v4 + 4 * *(unsigned __int8 *)(v4 + 120) + 124));
                  sub_46304C("Yank %d lines (%d chars) into [%c]", v75, v77, v76);
                }
                else
                {
                  sub_446EC4();
                }
                goto LABEL_233;
              }
            }
          }
          if ( String1[0] != 0 )
            v91 = String1;
          if ( *(_BYTE *)(v4 + 17) != 0 && v93 == 0 )
          {
            sub_463088("'%s' is read only", v91);
            goto LABEL_233;
          }
          if ( *(_DWORD *)(v4 + 20) == 0 && v86 == 120 )
          {
            v72 = 0;
            v71 = 0;
          }
          else
          {
            v70 = sub_42F6FC(v82, v5);
            v71 = v70;
            if ( v70 < 0 )
            {
              if ( v70 == -1 )
                sub_4630F0();
              goto LABEL_233;
            }
            v72 = v82 - (_DWORD)v5 + 1;
          }
          v73 = sub_41F7C0(v67, &v5[v71 - 1]);
          sub_46304C("'%s' %uL, %uC", v91, v73, v71);
          if ( v71 != v72 )
            goto LABEL_233;
          if ( *(unsigned __int8 **)v4 == v5 && *(unsigned __int8 **)(v4 + 4) == &v5[v71] )
          {
            *(_DWORD *)(v4 + 20) = 0;
            *(_DWORD *)(v4 + 24) = -1;
          }
          if ( Str != 120 && (v99 & 0xDF) != 0x51 && (v99 & 0xDF) != 0x4E )
            goto LABEL_233;
          goto LABEL_225;
        }
        v90 = i + 2;
        v54 = (unsigned __int8)i[1];
        v55 = strchr(v90, v54);
        v56 = v55;
        if ( v55 != nullptr )
        {
          v92 = v55 + 1;
          *v55 = 0;
          v57 = strchr(v55 + 1, v54);
          v58 = v57;
          if ( v57 != nullptr )
          {
            *v57 = 0;
            v94 = v57[1];
            v59 = sub_418A48((unsigned int)v5);
            if ( v95 < 0 )
            {
              v59 = sub_418A48(*(_DWORD *)(v4 + 8));
              v95 = sub_41F7C0(v60, v59);
            }
            v61 = v95;
            if ( v96 < 0 )
              v96 = v95;
            v84 = 1;
            while ( v96 >= v61 )
            {
              v88 = v59;
              do
              {
                v62 = sub_41B7F0(v59, v90, 2);
                v63 = v62;
                if ( v62 == nullptr )
                  break;
                sub_4657B0(v84, &v62[v56 - v90 - 1]);
                v64 = sub_4636A4(2, v92);
                v88 += v64;
                if ( v94 != 103 )
                {
                  v84 = 2;
                  break;
                }
                v59 = (unsigned int)&v63[v58 - v92 + v64];
                v84 = 2;
              }
              while ( v59 < sub_4298C0() );
              v59 = sub_446708();
              ++v61;
            }
            goto LABEL_233;
          }
        }
        return sub_46304C(":s expression missing delimiters");
      }
    }
  }
  if ( v93 != 0 )
  {
    if ( v86 == 113 )
    {
      v36 = *(_DWORD *)(v4 + 28);
LABEL_130:
      dword_473090 = v36;
      goto LABEL_225;
    }
    goto LABEL_225;
  }
  if ( *(_DWORD *)(v4 + 20) == 0 )
  {
    v37 = *(_DWORD *)(v4 + 28) + ~dword_473090;
    if ( v86 == 113 )
    {
      if ( v37 > 0 )
      {
        sub_463088("%u more file(s) to edit", *(_DWORD *)(v4 + 28) + ~dword_473090);
        goto LABEL_233;
      }
    }
    else
    {
      if ( v86 == 110 && v37 <= 0 )
      {
        sub_463088("No more files to edit");
        goto LABEL_233;
      }
      if ( v86 == 112 )
      {
        if ( dword_473090 <= 0 )
        {
          sub_463088("No previous files to edit");
          goto LABEL_233;
        }
        v36 = dword_473090 - 2;
        goto LABEL_130;
      }
    }
LABEL_225:
    *(_BYTE *)(v4 + 18) = 0;
    goto LABEL_233;
  }
LABEL_61:
  sub_463088("No write since last change (:%s! overrides)", &Str);
  goto LABEL_233;
}

