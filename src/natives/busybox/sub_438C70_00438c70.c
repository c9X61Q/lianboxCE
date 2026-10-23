// busybox.exe @ 0x438c70 size=911

int __cdecl sub_438C70(int a1, _BYTE **a2)
{
  int v2; // ebx
  char v3; // al
  FILE *v4; // ebx
  FILE *v5; // esi
  char *v6; // edi
  char *v7; // edx
  char *v8; // ebx
  int v9; // eax
  int v11; // edi
  LPSTR *v12; // ebx
  int v13; // esi
  u_short v14; // dx
  _BYTE *v15; // eax
  int v16; // ecx
  int v17; // eax
  void *v18; // esp
  int v19; // esi
  int v20; // eax
  int v21; // eax
  char Str; // [esp+0h] [ebp-6Ch]
  char *Stra; // [esp+0h] [ebp-6Ch]
  BOOL Strb; // [esp+0h] [ebp-6Ch]
  char *Strc; // [esp+0h] [ebp-6Ch]
  char v26; // [esp+4h] [ebp-68h]
  LPSTR v27; // [esp+28h] [ebp-44h]
  int v28; // [esp+2Ch] [ebp-40h]
  int v29; // [esp+30h] [ebp-3Ch]
  int v30; // [esp+30h] [ebp-3Ch]
  const char *v31; // [esp+34h] [ebp-38h] BYREF
  char *v32; // [esp+38h] [ebp-34h] BYREF
  _BYTE *v33; // [esp+3Ch] [ebp-30h] BYREF
  int v34; // [esp+40h] [ebp-2Ch] BYREF
  struct sockaddr v35[2]; // [esp+44h] [ebp-28h] BYREF

  v2 = sub_4728CC();
  dword_486010 = v2;
  *(_DWORD *)(v2 + 52) = "Web Server Authentication";
  *(_DWORD *)(v2 + 72) = -1;
  *(_DWORD *)(v2 + 76) = -1;
  *(_DWORD *)(v2 + 20) = "80";
  *(_DWORD *)(v2 + 36) = "index.html";
  *(_DWORD *)(v2 + 64) = -1;
  *(_DWORD *)(v2 + 68) = -1;
  *(_DWORD *)(v2 + 32) = sub_471624();
  v3 = sub_435D44((int)a2, (int)"^c:d:h:e:r:p:I:+fv", v2 + 28, &v31, v2 + 32, &v32, v2 + 52, v2 + 20, &v33, v2);
  if ( (v3 & 2) != 0 )
  {
    v4 = off_4730E8(1);
    Stra = (char *)sub_44C994();
    sub_46EF20(Stra, v4);
  }
  else
  {
    if ( (v3 & 8) == 0 )
    {
      if ( v3 >= 0 && **a2 != 45 )
      {
        v11 = sub_463690();
        v12 = (LPSTR *)sub_470E78();
        *v12 = sub_433530();
        v12[1] = "--busybox";
        v12[2] = "-httpd";
        qmemcpy(v12 + 3, a2 + 1, 4 * v11);
        v13 = sub_47154C(0, 2);
        sub_470C64();
        sub_470C64();
        sub_470C64();
        sub_442EA4(v13);
        Strb = sub_444978() == 0;
        exit(Strb);
      }
      v28 = v3 & 0x40;
      if ( (v3 & 0x40) == 0 )
      {
        sub_470B28();
        v30 = sub_418398(10, *(const char **)(v2 + 20), nullptr);
        if ( *_errno() != 0 || (v14 = v30, (unsigned int)(v30 - 1) > 0xFFFE) )
        {
          v15 = *(_BYTE **)(v2 + 20);
          v14 = 80;
        }
        else
        {
          v15 = nullptr;
        }
        sub_420910(v15, v14);
        sub_470E04();
      }
      sub_4493DC();
      byte_4735D4 = 0;
      if ( v28 != 0 )
      {
        sub_471530();
        sub_470C64();
        while ( 1 )
        {
          v17 = (int)(v33 - 1);
          v33 = (_BYTE *)v17;
          if ( v17 <= 2 )
            break;
          sub_442EA4(v17);
        }
        memset(v35, 0, 0x1Cu);
        v34 = 28;
        sub_443334(0, v35, &v34);
        sub_437558((int)&v34, (int)Strc, v26);
      }
      v18 = alloca(sub_4115D8(4 * a1 + 20, v16, Str));
      v27 = sub_433530();
      v31 = "-I";
      qmemcpy(&v33, a2 + 1, (unsigned int)"p:I:+fv");
      while ( 1 )
      {
        do
          v19 = sub_442CF4((int)"httpd", nullptr, nullptr);
        while ( v19 < 0 );
        sub_45EA3C();
        v32 = (char *)sub_417B68();
        v20 = v27 != nullptr ? sub_44484C() : sub_444978();
        v21 = v20 + 1;
        LOBYTE(v21) = v21 == 0;
        if ( (_BYTE)v21 != 0 )
          break;
        sub_442EA4(v19);
      }
      sub_418014(v21, "can't execute 'httpd'");
    }
    v5 = off_4730E8(1);
    v6 = v32;
    strlen(v32);
    v7 = (char *)sub_470E78();
    v8 = v7;
    while ( 1 )
    {
      v9 = (unsigned __int8)*v6;
      if ( (_BYTE)v9 == 0 )
        break;
      if ( (unsigned __int8)(v9 - 48) > 9u && (unsigned __int8)((v9 | 0x20) - 97) > 0x19u )
      {
        v29 = (int)v7;
        v8 += sub_462670(v8, "&#%u;", v9);
        v7 = (char *)v29;
      }
      else
      {
        *v8++ = v9;
      }
      ++v6;
    }
    *v8 = 0;
    sub_46EF20(v7, v5);
  }
  return 0;
}

