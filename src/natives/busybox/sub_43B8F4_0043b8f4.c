// busybox.exe @ 0x43b8f4 size=2016

int __usercall sub_43B8F4@<eax>(unsigned __int8 *a1@<eax>, const char *a2@<edx>, int a3@<ecx>, unsigned int a4)
{
  const char *i; // ebp
  int v6; // edx
  int C; // esi
  int v8; // eax
  unsigned __int8 *v9; // esi
  char v10; // al
  bool v11; // zf
  int v12; // ebx
  int v13; // eax
  unsigned __int8 v14; // al
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  unsigned __int8 *v18; // esi
  unsigned __int8 v19; // bl
  int result; // eax
  unsigned int v21; // ebx
  char v22; // al
  unsigned int v23; // edi
  int v24; // ebx
  char v25; // al
  bool v26; // zf
  unsigned __int8 v27; // al
  unsigned __int8 *v28; // edi
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // al
  int v31; // esi
  unsigned __int8 v32; // al
  int v33; // ebx
  char *v34; // eax
  int v35; // edx
  char *v36; // esi
  int v37; // eax
  char v38; // dl
  int v39; // eax
  bool v40; // zf
  int v41; // ebx
  int v42; // eax
  unsigned __int8 v43; // al
  int v44; // ebx
  unsigned __int8 *v45; // eax
  unsigned __int8 v46; // cl
  int v47; // ebx
  int v48; // eax
  unsigned __int8 v49; // [esp+8h] [ebp-3Ch]
  unsigned __int8 v50; // [esp+8h] [ebp-3Ch]
  unsigned __int8 v51; // [esp+8h] [ebp-3Ch]
  unsigned int v52; // [esp+8h] [ebp-3Ch]
  char v53; // [esp+8h] [ebp-3Ch]
  unsigned __int8 v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+10h] [ebp-34h]
  unsigned __int8 v56; // [esp+10h] [ebp-34h]
  int v59; // [esp+1Ch] [ebp-28h]
  int v60; // [esp+20h] [ebp-24h]
  char v62[23]; // [esp+2Dh] [ebp-17h] BYREF

  for ( i = a2; ; ++i )
  {
    v6 = *a1;
    if ( (_BYTE)v6 == 0 )
    {
      result = 0;
      if ( *i != 0 )
      {
        LOBYTE(result) = *i == 47;
        return (unsigned __int8)((a4 >> 3) & result ^ 1);
      }
      return result;
    }
    if ( (a4 & 0x10) != 0 && (v6 & 0x80u) == 0 )
    {
      C = (unsigned __int8)v6;
      v49 = *a1;
      v8 = isupper((unsigned __int8)v6);
      v6 = v49;
      if ( v8 != 0 )
        v6 = (unsigned __int8)tolower(C);
    }
    v9 = a1 + 1;
    if ( (_BYTE)v6 == 92 )
    {
      if ( (a4 & 2) != 0 )
      {
        if ( (a4 & 0x10) == 0 )
          goto LABEL_29;
      }
      else
      {
        v6 = a1[1];
        if ( (_BYTE)v6 == 0 )
          return 1;
        v9 = a1 + 2;
        if ( (a4 & 0x10) == 0 )
          goto LABEL_29;
        if ( (v6 & 0x80u) == 0 )
        {
          v12 = (unsigned __int8)v6;
          v50 = v6;
          v13 = isupper((unsigned __int8)v6);
          v6 = v50;
          if ( v13 != 0 )
            v6 = (unsigned __int8)tolower(v12);
        }
      }
      v14 = *i;
      if ( *i >= 0 )
      {
        v51 = v6;
        v15 = v14;
        v16 = isupper(v14);
        v6 = v51;
        if ( v16 != 0 )
        {
          v17 = tolower(v15);
          v6 = v51;
LABEL_30:
          v11 = v6 == v17;
          goto LABEL_31;
        }
      }
LABEL_29:
      v17 = *(unsigned __int8 *)i;
      goto LABEL_30;
    }
    if ( (unsigned __int8)v6 > 0x5Cu )
      goto LABEL_196;
    if ( (_BYTE)v6 == 91 )
    {
      if ( dword_4734FC == 0 )
        dword_4734FC = getenv("POSIXLY_CORRECT") == nullptr ? -1 : 1;
      v25 = *i;
      if ( *i == 0 )
        return 1;
      if ( v25 == 46 && a3 != 0 )
      {
        if ( i == a2 )
          return 1;
        v26 = *(i - 1) == 47;
      }
      else
      {
        v26 = v25 == 47;
      }
      if ( v26 && (a4 & 1) != 0 )
        return 1;
      v27 = a1[1];
      if ( v27 == 33 || dword_4734FC < 0 && v27 == 94 )
      {
        v9 = a1 + 2;
        v59 = 1;
      }
      else
      {
        v59 = 0;
      }
      v28 = v9 + 1;
      v29 = *v9;
      while ( 2 )
      {
        v30 = *i;
        v56 = *i;
        if ( (a4 & 0x10) != 0 && (v30 & 0x80u) == 0 )
        {
          v31 = v30;
          if ( isupper(v30) != 0 )
            v56 = tolower(v31);
        }
        v60 = a4 & 2;
        if ( v29 == 92 && (a4 & 2) == 0 )
        {
          v32 = *v28;
          v53 = *v28;
          if ( *v28 == 0 )
            return 1;
          if ( (a4 & 0x10) != 0 && (v32 & 0x80u) == 0 )
          {
            v33 = v32;
            if ( isupper(v32) != 0 )
              v53 = tolower(v33);
          }
          v9 = v28 + 1;
          if ( v56 == v53 )
          {
            v60 = 0;
            goto LABEL_184;
          }
          goto LABEL_175;
        }
        if ( v29 == 91 )
        {
          if ( *v28 == 58 )
          {
            v34 = (char *)v28;
            v35 = 0;
            while ( 1 )
            {
              v36 = v34++;
              v53 = *v34;
              if ( *v34 == 58 )
                break;
              if ( (unsigned __int8)(v53 - 97) > 0x18u )
                goto LABEL_158;
              v62[v35++] = v53;
              if ( v35 == 6 )
                return 1;
            }
            if ( v34[1] == 93 )
            {
              v9 = (unsigned __int8 *)(v36 + 3);
              v62[v35] = 0;
              v37 = sub_439918("alnum", v62);
              v38 = *i;
              switch ( v37 )
              {
                case 0:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = isalnum(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 1:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = isalpha(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 2:
                  if ( v38 == 9 )
                    goto LABEL_184;
                  v40 = v38 == 32;
                  goto LABEL_137;
                case 3:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = iscntrl(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 4:
                  if ( (unsigned __int8)(v38 - 48) > 9u )
                    goto LABEL_122;
                  goto LABEL_184;
                case 5:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v41 = (unsigned __int8)v38;
                  if ( isprint((unsigned __int8)v38) == 0 )
                    goto LABEL_122;
                  v40 = isspace(v41) == 0;
LABEL_137:
                  if ( !v40 )
                    goto LABEL_122;
                  goto LABEL_184;
                case 6:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = islower(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 7:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = isprint(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 8:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = ispunct(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 9:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = isspace(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 10:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = isupper(*(unsigned __int8 *)i);
                  goto LABEL_151;
                case 11:
                  if ( v38 < 0 )
                    goto LABEL_122;
                  v39 = isxdigit(*(unsigned __int8 *)i);
LABEL_151:
                  if ( v39 == 0 )
                    goto LABEL_122;
                  goto LABEL_184;
                default:
                  goto LABEL_122;
              }
            }
          }
LABEL_158:
          if ( (a4 & 0x10) == 0 )
            goto LABEL_159;
LABEL_156:
          if ( isupper(v29) == 0 )
            goto LABEL_159;
          v42 = tolower(v29);
        }
        else
        {
          if ( v29 == 0 )
            return 1;
          if ( (a4 & 0x10) != 0 && (v29 & 0x80u) == 0 )
            goto LABEL_156;
LABEL_159:
          v42 = v29;
        }
        if ( v56 == v42 )
        {
          v53 = v29;
          v9 = v28;
          goto LABEL_184;
        }
        v9 = v28 + 1;
        v53 = *v28;
        if ( *v28 == 45 )
        {
          v43 = v28[1];
          if ( v43 != 93 )
          {
            if ( v43 == 92 && (a4 & 2) == 0 )
            {
              v9 = v28 + 3;
              v43 = v28[2];
            }
            else
            {
              v9 = v28 + 2;
            }
            if ( v43 == 0 )
              return 1;
            if ( v56 >= v29 )
            {
              v44 = v43;
              if ( (a4 & 0x10) != 0 && (v43 & 0x80u) == 0 && isupper(v43) != 0 )
                v44 = tolower(v44);
              if ( v56 <= v44 )
              {
LABEL_184:
                if ( v53 == 93 )
                {
                  v11 = v59 == 0;
                  goto LABEL_31;
                }
                if ( v53 == 0 )
                  return 1;
                while ( 1 )
                {
                  v53 = *v9;
                  if ( v60 != 0 || *v9 != 92 )
                  {
                    v45 = v9 + 1;
                    if ( v53 != 91 )
                      goto LABEL_183;
                    if ( v9[1] == 58 )
                    {
                      while ( 1 )
                      {
                        v46 = v45[1];
                        if ( v46 == 0 )
                          return 1;
                        if ( v46 == 58 && v45[2] != 93 )
                          break;
                        ++v45;
                      }
                      v53 = v45[3];
                      v45 += 3;
LABEL_183:
                      v9 = v45;
                      goto LABEL_184;
                    }
                  }
                  else
                  {
                    if ( v9[1] == 0 )
                      return 1;
                    v45 = v9 + 2;
                  }
                  v9 = v45;
                }
              }
            }
            v53 = *v9++;
            goto LABEL_175;
          }
        }
        else
        {
LABEL_175:
          if ( v53 == 93 )
          {
            if ( v59 != 0 )
              goto LABEL_201;
            return 1;
          }
        }
LABEL_122:
        v29 = v53;
        v28 = v9;
        continue;
      }
    }
    if ( (_BYTE)v6 == 42 )
      break;
    if ( (_BYTE)v6 != 63 )
    {
LABEL_196:
      v47 = *(unsigned __int8 *)i;
      if ( (a4 & 0x10) != 0 && (v47 & 0x80u) == 0 )
      {
        v54 = v6;
        v48 = isupper(v47);
        v6 = v54;
        if ( v48 != 0 )
        {
          v47 = tolower(v47);
          v6 = v54;
        }
      }
      v11 = v6 == v47;
LABEL_31:
      if ( !v11 )
        return 1;
      goto LABEL_201;
    }
    v10 = *i;
    if ( *i == 0 )
      return 1;
    if ( v10 == 47 )
      goto LABEL_18;
    if ( a3 != 0 && v10 == 46 )
    {
      if ( i == a2 )
        return 1;
      if ( *(i - 1) != 47 )
        goto LABEL_201;
LABEL_18:
      v11 = (a4 & 1) == 0;
      goto LABEL_31;
    }
LABEL_201:
    a1 = v9;
  }
  if ( *i == 46 && a3 != 0 && (i == a2 || *(i - 1) == 47 && (a4 & 1) != 0) )
    return 1;
  v18 = a1 + 2;
  v19 = a1[1];
  while ( 2 )
  {
    if ( v19 == 42 || v19 == 63 )
    {
      if ( *i == 47 )
      {
        if ( (a4 & 1) != 0 )
          return 1;
        if ( v19 != 63 )
          goto LABEL_46;
      }
      else
      {
        if ( v19 != 63 )
        {
LABEL_46:
          v19 = *v18++;
          continue;
        }
        if ( *i == 0 )
          return 1;
      }
      ++i;
      goto LABEL_46;
    }
    break;
  }
  if ( v19 != 0 )
  {
    v52 = sub_4635B0(a4 & 1, -(a4 & 1) & 0x2F);
    if ( v19 == 91 )
    {
      v21 = a4;
      if ( (a4 & 1) == 0 )
        v21 = a4 & 0xFFFFFFFB;
      while ( (unsigned int)i < v52 )
      {
        if ( sub_43B8F4(v21) == 0 )
          return 0;
        ++i;
      }
      return 1;
    }
    if ( v19 == 47 )
    {
      if ( (a4 & 1) != 0 )
      {
        while ( 1 )
        {
          v22 = *i;
          if ( *i == 0 )
            break;
          ++i;
          if ( v22 == 47 )
          {
            LOBYTE(result) = sub_43B8F4(a4) != 0;
            return (unsigned __int8)result;
          }
        }
        return 1;
      }
    }
    else
    {
      v23 = a4;
      if ( (a4 & 1) != 0 )
        goto LABEL_66;
    }
    v23 = a4 & 0xFFFFFFFB;
LABEL_66:
    if ( v19 == 92 )
    {
      if ( (a4 & 2) != 0 )
      {
        if ( (a4 & 0x10) != 0 )
        {
LABEL_71:
          if ( isupper(v19) != 0 )
            v19 = tolower(v19);
        }
LABEL_73:
        v55 = v19;
        while ( (unsigned int)i < v52 )
        {
          v24 = *(unsigned __int8 *)i;
          if ( (a4 & 0x10) != 0 && (v24 & 0x80u) == 0 && isupper(*(unsigned __int8 *)i) != 0 )
            v24 = tolower(v24);
          if ( v55 == v24 && sub_43B8F4(v23) == 0 )
            return 0;
          ++i;
        }
        return 1;
      }
      v19 = *v18;
    }
    if ( (a4 & 0x10) == 0 || (v19 & 0x80u) != 0 )
      goto LABEL_73;
    goto LABEL_71;
  }
  if ( (a4 & 1) == 0 )
    return 0;
  result = (int)strchr(i, 47);
  if ( result != 0 )
    return 1;
  return result;
}

