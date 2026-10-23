// busybox.exe @ 0x4228d0 size=870

char *__usercall sub_4228D0@<eax>(const char *a1@<eax>, char *a2@<edx>, int *a3@<ecx>)
{
  int Val; // ebp
  char v6; // al
  char *v7; // eax
  unsigned __int8 v8; // cl
  unsigned int v9; // esi
  char *v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  int v16; // eax
  int (__cdecl *v17)(int, int); // edx
  char *v18; // eax
  unsigned __int8 v19; // cl
  unsigned int v20; // esi
  char *v21; // eax
  bool v22; // zf
  unsigned __int8 v24; // [esp+10h] [ebp-1Ch]
  char *v25; // [esp+10h] [ebp-1Ch]
  unsigned __int8 v26; // [esp+10h] [ebp-1Ch]
  char v28; // [esp+14h] [ebp-18h]
  char *v30[5]; // [esp+18h] [ebp-14h] BYREF

  Val = (unsigned __int8)*a2;
  v6 = *a2;
  if ( *a2 == 120 )
  {
LABEL_6:
    v24 = a2[1];
    v7 = strchr("CSIL", v24);
    v8 = v24;
    if ( v7 != nullptr && *v7 != 0 )
    {
      v9 = (unsigned __int8)byte_47D0DC[v7 - "CSIL"];
      v10 = a2 + 2;
    }
    else
    {
      v25 = a2 + 1;
      if ( (unsigned __int8)(v8 - 48) > 9u )
      {
        v9 = 4;
        goto LABEL_17;
      }
      v9 = sub_418398(0, a2 + 1, v30);
      if ( *_errno() == 34 || v9 > 8 || byte_48015C[v9] == 0 )
        sub_41784C("invalid type string '%s'; %u-byte %s type is not supported", a1, v9, "integral");
      v10 = v30[0];
    }
    v25 = v10;
LABEL_17:
    v11 = (unsigned __int8)byte_48015C[v9];
    v28 = byte_48015C[v9];
    v12 = strchr("doux", Val) - "doux";
    v13 = 4 * v12 + 4716768;
    if ( v11 == 4 )
    {
      v13 = 4 * v12 + 4716769;
    }
    else if ( v11 != 5 )
    {
      v13 = 4 * v12 + 4716770;
    }
    v14 = dword_47F8D0[v12];
    v15 = *((unsigned __int8 *)*(&off_47F8C0 + v12) + v9);
    v16 = sub_4708BC(&aUS[9 * v12], v15, v13);
    v17 = (int (__cdecl *)(int, int))sub_44E7B4;
    if ( (unsigned __int8)v28 <= 4u )
    {
      v17 = (int (__cdecl *)(int, int))sub_44E580;
      if ( (unsigned __int8)v28 <= 2u )
      {
        if ( v28 == 1 )
        {
          v17 = (int (__cdecl *)(int, int))sub_44EA14;
          v11 = 1;
          if ( v14 != 0 )
            v17 = (int (__cdecl *)(int, int))sub_44E140;
        }
        else
        {
          v17 = (int (__cdecl *)(int, int))sub_44E7B4;
          if ( v28 == 2 )
          {
            v17 = (int (__cdecl *)(int, int))sub_44EA44;
            v11 = 2;
            if ( v14 != 0 )
              v17 = (int (__cdecl *)(int, int))sub_44EA78;
          }
        }
      }
    }
    goto LABEL_50;
  }
  if ( (unsigned __int8)v6 > 0x78u )
LABEL_49:
    sub_41784C("invalid character '%c' in type string '%s'", Val, a1);
  if ( (unsigned __int8)v6 > 0x6Fu )
  {
    if ( v6 == 117 )
      goto LABEL_6;
    goto LABEL_49;
  }
  switch ( v6 )
  {
    case 'a':
      v25 = a2 + 1;
      v15 = 3;
      v17 = sub_44E87C;
      v16 = 0;
      v14 = 5;
      goto LABEL_48;
    case 'c':
      v25 = a2 + 1;
      v15 = 3;
      v17 = sub_44DED4;
      v16 = 0;
      v14 = 6;
LABEL_48:
      v11 = 1;
      break;
    case 'd':
    case 'o':
      goto LABEL_6;
    case 'f':
      v26 = a2[1];
      v18 = strchr("FDL", v26);
      v19 = v26;
      if ( v18 != nullptr && *v18 != 0 )
      {
        v20 = (unsigned __int8)byte_47D2E4[v18 - "FDL"];
        v21 = a2 + 2;
LABEL_39:
        v25 = v21;
        goto LABEL_41;
      }
      v25 = a2 + 1;
      if ( (unsigned __int8)(v19 - 48) <= 9u )
      {
        v20 = sub_418398(0, a2 + 1, v30);
        if ( *_errno() == 34 || v20 > 0xC || byte_47FC4C[v20] == 0 )
          sub_41784C("invalid type string '%s'; %u-byte %s type is not supported", a1, v20, "floating point");
        v21 = v30[0];
        goto LABEL_39;
      }
      v20 = 8;
LABEL_41:
      v11 = (unsigned __int8)byte_47FC4C[v20];
      if ( (_BYTE)v11 == 6 )
      {
        v16 = sub_4708BC(" %%%d.%de", 15, 7);
        v15 = 15;
        v17 = (int (__cdecl *)(int, int))sub_44E52C;
        v14 = 4;
        v11 = 6;
      }
      else if ( (_BYTE)v11 == 7 )
      {
        v16 = sub_4708BC(" %%%d.%de", 23, 15);
        v15 = 23;
        v17 = (int (__cdecl *)(int, int))sub_44E434;
        v14 = 4;
        v11 = 7;
      }
      else
      {
        v16 = sub_4708BC(" %%%d.%dLe", 23, 15);
        v15 = 23;
        v17 = (int (__cdecl *)(int, int))sub_44E778;
        v14 = 4;
      }
      break;
    default:
      goto LABEL_49;
  }
LABEL_50:
  a3[1] = v11;
  *a3 = v14;
  a3[2] = (int)v17;
  a3[3] = v16;
  a3[5] = v15;
  v22 = *v25 == 122;
  a3[4] = v22;
  if ( v22 )
    ++v25;
  return v25;
}

