// busybox.exe @ 0x436030 size=657

int __usercall sub_436030@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi
  int v4; // ebp
  unsigned int v5; // eax
  _BYTE *v6; // edi
  int v7; // eax
  int v8; // ebx
  _BYTE *v9; // edx
  unsigned __int8 *v10; // eax
  char v11; // cl
  int v12; // edi
  int v13; // ebx
  unsigned __int8 *v14; // ecx
  _BYTE *v15; // edx
  _BYTE *v16; // eax
  int v17; // ecx
  FILE *v18; // eax
  _BYTE **v19; // ecx
  unsigned __int8 *v20; // edx
  _BYTE *v21; // eax
  int v22; // ecx
  FILE *v23; // eax
  int v24; // ebp
  void *v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned __int8 *v29; // [esp+Ch] [ebp-20h]
  _BYTE **v30; // [esp+10h] [ebp-1Ch]
  _BYTE v31[18]; // [esp+1Ah] [ebp-12h] BYREF

  if ( a1 <= 2 )
    sub_415B40(a3, "usage: getopts optstring var [arg]");
  v3 = dword_485FEC;
  if ( a1 == 3 )
  {
    v4 = *(_DWORD *)(dword_485FEC + 16);
    v5 = *(_DWORD *)dword_485FEC + 1;
  }
  else
  {
    v4 = a2 + 12;
    v5 = a1 - 2;
  }
  if ( v5 < *(_DWORD *)(dword_485FEC + 4) )
  {
    *(_DWORD *)(dword_485FEC + 4) = 1;
    *(_DWORD *)(v3 + 8) = -1;
  }
  v6 = *(_BYTE **)(a2 + 4);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = *(_DWORD *)(v3 + 8);
  v31[1] = 0;
  *(_DWORD *)(v3 + 4) = -1;
  v30 = (_BYTE **)(v4 + 4 * v7 - 4);
  if ( v7 <= 1
    || v8 < 0
    || v8 > (int)strlen(*(const char **)(v4 + 4 * v7 - 8))
    || (v10 = &(*(v30 - 1))[v8]) == nullptr
    || *v10 == 0 )
  {
    v9 = *v30;
    if ( *v30 == nullptr || *v9 != 45 || (v10 = v9 + 1, (v11 = v9[1]) == 0) || (++v30, v11 == 45) && v9[2] == 0 )
    {
      sub_46A8E0();
      v12 = 1;
      LOBYTE(v13) = 63;
LABEL_47:
      v29 = nullptr;
      goto LABEL_50;
    }
  }
  v14 = v10 + 1;
  v29 = v10 + 1;
  v13 = *v10;
  v15 = v6;
  while ( 1 )
  {
    LOBYTE(v14) = *v15;
    if ( (_BYTE)v13 == *v15 )
      break;
    if ( (_BYTE)v14 == 0 )
    {
      v16 = (_BYTE *)sub_43E9A4();
      if ( v16 != nullptr && *v16 == 48 && v16[1] == 0 || *v6 == 58 )
      {
        v31[0] = v13;
        sub_45EC2C(v17, v31);
      }
      else
      {
        v18 = off_4730E8(2);
        sub_46EEFC(v18, "Illegal option -%c\n", v13);
        sub_46A8E0();
      }
      goto LABEL_42;
    }
    v14 = v15 + 1;
    if ( v15[1] == 58 )
      v15 += 2;
    else
      ++v15;
  }
  if ( v15[1] == 58 )
  {
    v19 = v30;
    v20 = *v30;
    if ( v10[1] != 0 )
    {
      if ( v20 != v29 )
      {
LABEL_46:
        sub_45EC2C(v19, v29);
        v12 = 0;
        goto LABEL_47;
      }
      v20 = v10 + 1;
    }
    else if ( v20 == nullptr )
    {
      v21 = (_BYTE *)sub_43E9A4();
      if ( (v21 == nullptr || *v21 != 48 || v21[1] != 0) && *v6 != 58 )
      {
        v23 = off_4730E8(2);
        sub_46EEFC(v23, "No arg for -%c option\n", v13);
        sub_46A8E0();
        v29 = nullptr;
LABEL_42:
        v12 = 0;
        LOBYTE(v13) = 63;
        goto LABEL_50;
      }
      v31[0] = v13;
      sub_45EC2C(v22, v31);
      LOBYTE(v13) = 58;
      v29 = nullptr;
      goto LABEL_49;
    }
    ++v30;
    v29 = v20;
    goto LABEL_46;
  }
  sub_45EC2C(v14, dword_485FF0 + 62);
LABEL_49:
  v12 = 0;
LABEL_50:
  v24 = (((int)v30 - v4) >> 2) + 1;
  v25 = sub_417B68();
  sub_45EB78(64, v25);
  v31[0] = v13;
  sub_45EC2C(v26, v31);
  v27 = -1;
  if ( v29 != nullptr )
    v27 = v29 - *(v30 - 1);
  *(_DWORD *)(v3 + 8) = v27;
  *(_DWORD *)(v3 + 4) = v24;
  return v12;
}

