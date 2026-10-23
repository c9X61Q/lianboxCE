// busybox.exe @ 0x44174c size=907

int __fastcall sub_44174C(int a1, UINT *a2)
{
  char *Str1; // esi
  UINT v4; // ebp
  int v5; // edi
  char *i; // edx
  char v7; // al
  int v8; // eax
  int ACP; // eax
  int v10; // edx
  int v11; // edi
  const char *v12; // ebp
  int v13; // eax
  int v15; // eax
  int v16; // [esp+Ch] [ebp-2Ch]
  struct _cpinfo CPInfo; // [esp+14h] [ebp-24h] BYREF

  Str1 = (char *)sub_47188C();
  v4 = 0;
  v16 = 1;
  while ( 1 )
  {
    v5 = sub_4639D0();
    if ( v5 == 0 )
      break;
    for ( i = (char *)(v5 + 2); ; ++i )
    {
      v7 = *i;
      if ( *i == 0 )
        break;
      if ( (unsigned __int8)(v7 - 65) <= 0x19u )
        v7 += 32;
      *i = v7;
    }
    v8 = sub_439918("nocompat", (const char *)(v5 + 2));
    if ( v8 == 2 )
    {
      v4 |= 4u;
    }
    else if ( v8 <= 2 )
    {
      if ( v8 != 0 )
      {
        if ( v8 == 1 )
          v4 |= 2u;
      }
      else
      {
        v16 = 0;
      }
    }
    *(_BYTE *)v5 = 0;
  }
  a2[6] = 0;
  a2[1] = v4;
  a2[4] = 0;
  a2[5] = 0;
  a2[7] = 0;
  if ( *Str1 == 0 || strcmp(Str1, "char") == 0 )
  {
    ACP = GetACP();
    goto LABEL_31;
  }
  v10 = strcmp(Str1, "wchar_t");
  ACP = 1200;
  if ( v10 != 0 )
  {
    if ( strnicmp(Str1, "cp", 2u) == 0 )
      goto LABEL_25;
    if ( (unsigned __int8)(*Str1 - 48) <= 9u )
    {
      ACP = atoi(Str1);
      goto LABEL_31;
    }
    if ( strnicmp(Str1, "xx", 2u) == 0 )
    {
LABEL_25:
      ACP = atoi(Str1 + 2);
      goto LABEL_31;
    }
    v11 = 0;
    v12 = "CP65001";
    do
    {
      if ( stricmp(v12, Str1) == 0 )
      {
        ACP = dword_47F060[v11];
        goto LABEL_31;
      }
      v12 += strlen(v12) + 1;
      ++v11;
    }
    while ( *v12 != 0 );
    ACP = -1;
  }
LABEL_31:
  *a2 = ACP;
  if ( (unsigned int)(ACP - 1200) <= 1 )
  {
    a2[2] = (UINT)sub_46BF74;
    a2[3] = (UINT)sub_46C0D4;
    if ( stricmp(Str1, "UTF-16") != 0
      && stricmp(Str1, "UTF16") != 0
      && stricmp(Str1, "UCS-2") != 0
      && stricmp(Str1, "UCS2") != 0 )
    {
      v13 = stricmp(Str1, "UCS-2-INTERNAL");
LABEL_43:
      if ( v13 != 0 )
        goto LABEL_61;
    }
LABEL_39:
    a2[1] |= 1u;
    goto LABEL_61;
  }
  if ( (unsigned int)(ACP - 12000) <= 1 )
  {
    a2[2] = (UINT)sub_46C1F4;
    a2[3] = (UINT)sub_46C2B0;
    if ( stricmp(Str1, "UTF-32") == 0 || stricmp(Str1, "UTF32") == 0 || stricmp(Str1, "UCS-4") == 0 )
      goto LABEL_39;
    v13 = stricmp(Str1, "UCS4");
    goto LABEL_43;
  }
  if ( ACP == 65001 )
  {
    a2[2] = (UINT)sub_43CBF0;
    a2[3] = (UINT)sub_43CCD0;
    a2[4] = (UINT)sub_46C374;
    goto LABEL_70;
  }
  if ( (unsigned int)(ACP - 50220) <= 2 && sub_43E804() != 0 )
  {
    a2[2] = (UINT)sub_43C6E8;
    a2[3] = (UINT)sub_43C8FC;
    a2[5] = (UINT)sub_43C678;
  }
  else if ( *a2 == 51932 && sub_43E804() != 0 )
  {
    a2[2] = (UINT)sub_445480;
    a2[3] = (UINT)sub_4454FC;
    a2[4] = (UINT)sub_42A078;
  }
  else
  {
    if ( !IsValidCodePage(*a2) || !GetCPInfo(*a2, &CPInfo) )
    {
      free(Str1);
      *_errno() = 22;
      return 0;
    }
    a2[2] = (UINT)sub_43CBF0;
    a2[3] = (UINT)sub_43CCD0;
    if ( CPInfo.MaxCharSize == 1 )
    {
      a2[4] = (UINT)sub_45C698;
    }
    else if ( CPInfo.MaxCharSize == 2 )
    {
      a2[4] = (UINT)sub_421DF0;
    }
    else
    {
      a2[4] = (UINT)sub_442494;
    }
  }
LABEL_61:
  if ( v16 != 0 )
  {
    v15 = *a2;
    if ( *a2 == 51932 )
    {
LABEL_68:
      a2[7] = (UINT)&unk_473240;
      goto LABEL_70;
    }
    if ( v15 <= 50222 )
    {
      if ( v15 <= 50219 && v15 != 932 )
      {
        if ( v15 == 20932 )
          a2[7] = (UINT)&unk_4731C0;
        goto LABEL_70;
      }
      goto LABEL_68;
    }
  }
LABEL_70:
  free(Str1);
  return 1;
}

