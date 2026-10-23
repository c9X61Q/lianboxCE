// busybox.exe @ 0x46dff0 size=2784

int __cdecl sub_46DFF0(int a1, int a2)
{
  int v2; // ecx
  int v3; // ebp
  int v4; // ecx
  _DWORD *v5; // esi
  _BYTE *v6; // eax
  int v7; // ebx
  char *v8; // ebx
  const char *v9; // eax
  const char *v10; // edi
  char v11; // si
  _BYTE *v12; // eax
  int v13; // ecx
  char *v14; // eax
  char *v15; // eax
  int v16; // ecx
  char *v17; // esi
  char *v18; // ebx
  char *v19; // eax
  int v20; // edx
  char v21; // al
  const char *v22; // eax
  char v23; // al
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  char *v28; // ecx
  char *v29; // ebx
  const char *v30; // esi
  FILE *v31; // eax
  FILE *v32; // eax
  FILE *v33; // ebx
  int v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  const char *v37; // eax
  char *v38; // eax
  size_t v39; // eax
  int v40; // eax
  _BYTE *v41; // eax
  const char *v42; // eax
  int v43; // eax
  int v44; // edi
  unsigned __int8 *v45; // eax
  char *v46; // esi
  unsigned __int8 *i; // eax
  char v48; // dl
  int v49; // edx
  char *v50; // eax
  const char *v51; // eax
  int v52; // ecx
  FILE *v53; // edi
  FILE *v54; // eax
  int v55; // eax
  const char *v56; // esi
  char *v57; // eax
  char *v58; // edx
  int v59; // eax
  int v60; // eax
  int v61; // esi
  int v62; // edx
  int v63; // eax
  u_short v64; // ax
  int v65; // eax
  int v66; // ecx
  FILE *v67; // eax
  char *Str; // [esp+0h] [ebp-94h]
  char *Stra; // [esp+0h] [ebp-94h]
  char *Strb; // [esp+0h] [ebp-94h]
  char *SubStr; // [esp+4h] [ebp-90h]
  int v73; // [esp+8h] [ebp-8Ch]
  int v74; // [esp+34h] [ebp-60h]
  _WORD *v75; // [esp+34h] [ebp-60h]
  int v76; // [esp+38h] [ebp-5Ch]
  void *v77; // [esp+38h] [ebp-5Ch]
  char v78; // [esp+3Ch] [ebp-58h]
  void *Block; // [esp+40h] [ebp-54h]
  _DWORD *v80; // [esp+44h] [ebp-50h]
  const char *v81; // [esp+48h] [ebp-4Ch]
  int v82; // [esp+4Ch] [ebp-48h]
  _DWORD *v83; // [esp+50h] [ebp-44h] BYREF
  void *v84; // [esp+54h] [ebp-40h] BYREF
  void *v85; // [esp+5Ch] [ebp-38h]
  const char *v86; // [esp+60h] [ebp-34h]
  const char *v87; // [esp+64h] [ebp-30h]
  int v88; // [esp+68h] [ebp-2Ch]
  void *v89; // [esp+6Ch] [ebp-28h] BYREF
  const char *v90; // [esp+70h] [ebp-24h]
  char *v91; // [esp+74h] [ebp-20h]
  const char *v92; // [esp+78h] [ebp-1Ch]
  char *v93; // [esp+7Ch] [ebp-18h]
  int v94; // [esp+80h] [ebp-14h]

  v83 = nullptr;
  v3 = sub_4728CC(v2);
  dword_486010 = v3;
  *(_DWORD *)(v3 + 40) = "on";
  *(_DWORD *)(v3 + 44) = "Wget";
  sub_435D60(a2, (int)"^cqSO:o:P:Y:U:T:+t:n::", (int)"continue");
  v74 = dword_473090;
  v5 = v83;
  if ( v83 != nullptr )
  {
    v7 = 0;
    do
    {
      v7 += strlen((const char *)v5[1]) + 2;
      v5 = (_DWORD *)*v5;
    }
    while ( v5 != nullptr );
    v8 = (char *)sub_470E78();
    *(_DWORD *)(v3 + 24) = v8;
    while ( v83 != nullptr )
    {
      v9 = (const char *)sub_43E400(&v83);
      v76 = sub_462694((int)v8, (int)"%s\r\n", v9);
      v10 = "Host:";
      v11 = 1;
      while ( v8 != strstr(v8, v10) )
      {
        v11 *= 2;
        v10 += strlen(v10) + 1;
        if ( *v10 == 0 )
          goto LABEL_12;
      }
      *(_BYTE *)(v3 + 28) |= v11;
LABEL_12:
      v8 += v76;
    }
  }
  *(_DWORD *)(v3 + 48) = -1;
  *(_DWORD *)(v3 + 56) = 1793;
  v6 = *(_BYTE **)(v3 + 32);
  if ( v6 != nullptr )
  {
    if ( *v6 == 45 && v6[1] == 0 )
    {
      *(_DWORD *)(v3 + 48) = 1;
      dword_486008 &= ~1u;
    }
    *(_DWORD *)(v3 + 56) = 769;
  }
  *(_DWORD *)(v3 + 52) = -1;
  v12 = *(_BYTE **)(v3 + 36);
  if ( v12 != nullptr && (*v12 != 45 || v12[1] != 0) )
  {
    *(_DWORD *)(v3 + 52) = sub_47154C(v4, 769);
    sub_470C64();
  }
  v13 = v74;
  v80 = (_DWORD *)(a2 + 4 * v74);
  while ( *v80 != 0 )
  {
    v84 = nullptr;
    v89 = nullptr;
    v85 = nullptr;
    v91 = nullptr;
    sub_44B680(v13, (int)&v89);
    if ( strcmp(*(const char **)(v3 + 40), "off") == 0 )
      goto LABEL_29;
    v14 = "ftp_proxy";
    if ( *v92 != 102 )
      v14 = "http_proxy";
    v15 = sub_44328C(v14);
    if ( v15 != nullptr && *v15 != 0 )
    {
      sub_44B680(v16, (int)&v84);
      v78 = 1;
    }
    else
    {
LABEL_29:
      v86 = v92;
      v88 = v94;
      v84 = (void *)sub_47188C();
      v87 = (const char *)v84;
      v78 = 0;
    }
    v17 = v93;
    if ( *v93 == 91 )
    {
      v18 = strchr(v93, 37);
      if ( v18 != nullptr )
      {
        v19 = strchr(v17, 93);
        v20 = (int)v19;
        if ( v19 != nullptr )
        {
          v21 = v19[1];
          if ( v21 == 0 || v21 == 58 )
            sub_448258((int)v18, v20);
        }
      }
    }
    v77 = nullptr;
    if ( (dword_486008 & 8) == 0 )
    {
      v22 = sub_417A0C((int)v90);
      *(_DWORD *)(v3 + 32) = v22;
      v23 = *v22;
      if ( v23 == 0 || v23 == 47 )
        *(_DWORD *)(v3 + 32) = "index.html";
      v24 = *(_DWORD *)(v3 + 16);
      if ( v24 != 0 )
        v25 = sub_41E9A4(*(const char **)(v3 + 16), *(const char **)(v3 + 32), v24);
      else
        v25 = sub_47188C();
      v77 = (void *)v25;
      *(_DWORD *)(v3 + 32) = v25;
    }
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    if ( (dword_486008 & 1) != 0 )
    {
      v26 = sub_443508(*(char **)(v3 + 32), 1, v73);
      *(_DWORD *)(v3 + 48) = v26;
      if ( v26 >= 0 )
      {
        v27 = sub_470E28(2);
        Stra = v28;
        *(_QWORD *)(v3 + 8) = v27;
      }
    }
    Block = nullptr;
    v82 = 16;
    while ( 1 )
    {
      v75 = (_WORD *)sub_470DF0(Stra);
      if ( (dword_486008 & 2) == 0 )
      {
        v29 = (char *)sub_47144C();
        v30 = v87;
        v31 = off_4730E8(2);
        sub_46EEFC(v31, "Connecting to %s (%s)\n", v30, v29);
        free(v29);
      }
LABEL_50:
      *(_WORD *)(v3 + 60) = 0;
      if ( v78 == 0 && *v92 == 102 )
        break;
      v32 = sub_447ABC();
      v33 = v32;
      if ( v86 == "https" )
      {
        v34 = fileno(v32);
        sub_461F88(0, v34);
      }
      if ( v78 != 0 )
      {
        sub_46EEFC(v33, "GET %s://%s/%s HTTP/1.1\r\n", v92, v93, v90);
      }
      else
      {
        v35 = "POST";
        if ( (dword_486008 & 0x1000) == 0 )
          v35 = "GET";
        sub_46EEFC(v33, "%s /%s HTTP/1.1\r\n", v35, v90);
      }
      if ( (*(_BYTE *)(v3 + 28) & 1) == 0 )
        sub_46EEFC(v33, "Host: %s\r\n", v93);
      if ( (*(_BYTE *)(v3 + 28) & 2) == 0 )
        sub_46EEFC(v33, "User-Agent: %s\r\n", *(const char **)(v3 + 44));
      sub_46EEFC(v33, "Connection: close\r\n");
      if ( v91 != nullptr && (*(_BYTE *)(v3 + 28) & 8) == 0 )
      {
        v36 = (const char *)sub_416CF0(v91);
        sub_46EEFC(v33, "Authorization: Basic %s\r\n", v36);
      }
      if ( v78 != 0 && v85 != nullptr && (*(_BYTE *)(v3 + 28) & 0x10) == 0 )
      {
        v37 = (const char *)sub_416CF0(v85);
        sub_46EEFC(v33, "Proxy-Authorization: Basic %s\r\n", v37);
      }
      if ( *(_QWORD *)(v3 + 8) != 0 && (*(_BYTE *)(v3 + 28) & 4) == 0 )
        sub_46EEFC(v33, "Range: bytes=%llu-\r\n", *(_QWORD *)(v3 + 8));
      v38 = *(char **)(v3 + 24);
      if ( v38 != nullptr )
        sub_46EF20(v38, v33);
      if ( (dword_486008 & 0x1000) != 0 )
      {
        v39 = strlen(*(const char **)(v3 + 20));
        sub_46EEFC(
          v33,
          "Content-Type: application/x-www-form-urlencoded\r\nContent-Length: %u\r\n\r\n%s",
          v39,
          *(const char **)(v3 + 20));
      }
      else
      {
        sub_46EEFC(v33, "\r\n");
      }
      fflush(v33);
      if ( v92 == "https" )
      {
        v40 = fileno(v33);
        sub_444780(v40, 1);
      }
      while ( 1 )
      {
        sub_42F168(v33, "  %s\n");
        v81 = (const char *)(v3 + 64);
        v41 = sub_460E8C((_BYTE *)(v3 + 64));
        v42 = sub_460FB8(v41);
        v43 = atoi(v42);
        v44 = v43;
        if ( v43 > 303 )
          goto LABEL_92;
        if ( v43 > 299 )
          goto LABEL_95;
        if ( v43 == 206 )
        {
          if ( *(_QWORD *)(v3 + 8) != 0 )
            goto LABEL_95;
LABEL_92:
          sub_41784C("server returned error: %s", v81);
        }
        if ( v43 > 204 )
          goto LABEL_92;
        if ( v43 > 199 )
          break;
        if ( v43 != 0 && v43 != 100 )
          goto LABEL_92;
        while ( sub_4353E8(v33) != 0 )
          ;
      }
      if ( *(_QWORD *)(v3 + 8) != 0 )
        sub_45A8BC();
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_95:
            v45 = (unsigned __int8 *)sub_4353E8(v33);
            v46 = (char *)v45;
            if ( v45 == nullptr )
            {
              v53 = v33;
              goto LABEL_150;
            }
            for ( i = sub_4635B0(v45, 0); v46 <= (char *)--i && (*i == 9 || *i == 32); *i = 0 )
              ;
            v48 = sub_439918("content-length", v81);
            if ( v48 != 0 )
              break;
            *(_DWORD *)v3 = sub_418400(v46, nullptr, 10);
            *(_DWORD *)(v3 + 4) = v49;
            if ( v49 < 0 || *_errno() != 0 )
              sub_41784C("content-length %s is garbage", v46);
            *(_BYTE *)(v3 + 61) = 1;
          }
          if ( v48 != 1 )
            break;
          v50 = sub_463510(v46);
          if ( strcmp(v50, "chunked") != 0 )
            sub_41784C("transfer encoding '%s' is not supported", v46);
          *(_BYTE *)(v3 + 60) = 1;
        }
      }
      while ( v44 <= 299 || v48 != 2 );
      if ( --v82 == 0 )
      {
        v51 = "too many redirections";
        goto LABEL_122;
      }
      fclose(v33);
      if ( *v46 == 47 )
      {
        free(Block);
        Block = (void *)sub_47188C();
        v90 = (const char *)Block;
        goto LABEL_50;
      }
      sub_44B680(v52, (int)&v89);
      if ( v78 != 0 )
        goto LABEL_50;
      free(v84);
      v84 = nullptr;
      v86 = v92;
      v87 = v93;
      v88 = v94;
      free(v75);
    }
    v54 = sub_447ABC();
    v33 = v54;
    if ( v92 == "ftps" )
    {
      v55 = fileno(v54);
      sub_461F88(1, v55);
    }
    if ( sub_432394(v33, nullptr, nullptr) != 220 )
    {
      v51 = (const char *)(dword_486010 + 64);
LABEL_122:
      sub_418210(v51);
    }
    v56 = "busybox";
    if ( v91 != nullptr )
    {
      v57 = strchr(v91, 58);
      v56 = v57;
      if ( v57 != nullptr )
      {
        *v57 = 0;
        v56 = v57 + 1;
      }
    }
    v58 = v91;
    if ( v91 == nullptr )
      v58 = "anonymous";
    v59 = sub_432394(v33, "USER ", v58);
    if ( v59 != 230 && (v59 != 331 || sub_432394(v33, "PASS ", v56) != 230) )
      sub_41784C("ftp login: %s", dword_486010 + 64);
    sub_432394(v33, "TYPE I", nullptr);
    v60 = sub_432394(v33, "SIZE ", v90);
    v61 = dword_486010;
    if ( v60 == 213 )
    {
      *(_DWORD *)v61 = sub_418400((char *)(dword_486010 + 68), nullptr, 10);
      *(_DWORD *)(v61 + 4) = v62;
      if ( v62 < 0 || *_errno() != 0 )
        sub_41784C("bad SIZE value '%s'", v61 + 68);
      *(_BYTE *)(v61 + 61) = 1;
    }
    if ( sub_432394(v33, "EPSV", nullptr) != 229 && sub_432394(v33, "PASV", nullptr) != 227
      || (v63 = sub_44B2F0(v61 + 64)) < 0 )
    {
      sub_41784C("bad response to %s: %s", "PASV", (const char *)(v61 + 64));
    }
    v64 = htons(v63);
    sub_45E440(v75 + 2, v64);
    v53 = sub_447ABC();
    if ( v92 == "ftps" && sub_432394(v33, "PROT P", nullptr) == 200 )
    {
      v65 = fileno(v53);
      sub_461F88(0, v65);
    }
    if ( *(_QWORD *)(v61 + 8) != 0 )
    {
      sub_462694(v61 + 64, (int)"REST %llu", *(_QWORD *)(v61 + 8));
      if ( sub_432394(v33, (const char *)(v61 + 64), nullptr) == 350 )
        *(_QWORD *)v61 -= *(_QWORD *)(v61 + 8);
      else
        sub_45A8BC();
    }
    if ( sub_432394(v33, "RETR ", v90) > 150 )
      sub_41784C("bad response to %s: %s", "RETR", (const char *)(v61 + 64));
LABEL_150:
    free(v75);
    if ( (dword_486008 & 0x2000) != 0 )
    {
      if ( (dword_486008 & 2) == 0 )
      {
        v67 = off_4730E8(2);
        sub_46EEFC(v67, "remote file exists\n");
      }
    }
    else
    {
      if ( *(int *)(v3 + 48) < 0 )
        *(_DWORD *)(v3 + 48) = sub_47154C(v66, *(_DWORD *)(v3 + 56));
      sub_45A964(v53);
      if ( (dword_486008 & 8) == 0 )
      {
        sub_470B50(Strb, SubStr);
        *(_DWORD *)(v3 + 48) = -1;
      }
    }
    if ( v33 != v53 )
    {
      fclose(v53);
      if ( sub_432394(v33, nullptr, nullptr) != 226 )
        sub_41784C("ftp error: %s", v3 + 64);
    }
    ++v80;
    fclose(v33);
    free(v84);
    free(v89);
    free(v85);
    free(v91);
    free(v77);
    free(Block);
  }
  if ( *(int *)(v3 + 48) >= 0 )
    sub_470B50(Str, SubStr);
  if ( *(int *)(v3 + 52) >= 0 )
    sub_470B50(Str, SubStr);
  return 0;
}

