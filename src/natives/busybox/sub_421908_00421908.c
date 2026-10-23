// busybox.exe @ 0x421908 size=811

int __cdecl sub_421908(int a1, int a2)
{
  int v2; // esi
  char **v3; // edx
  const char *Str; // ebx
  size_t v5; // eax
  char v6; // cl
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  char **v11; // [esp+20h] [ebp-B8h]
  int v12; // [esp+24h] [ebp-B4h]
  char v13; // [esp+28h] [ebp-B0h]
  char *v14; // [esp+2Ch] [ebp-ACh]
  char *v15; // [esp+30h] [ebp-A8h] BYREF
  const char *v16; // [esp+34h] [ebp-A4h] BYREF
  int v17; // [esp+38h] [ebp-A0h] BYREF
  int v18; // [esp+3Ch] [ebp-9Ch] BYREF
  __time32_t Time; // [esp+40h] [ebp-98h] BYREF
  int v20; // [esp+44h] [ebp-94h]
  struct tm v21; // [esp+48h] [ebp-90h] BYREF
  char Destination[56]; // [esp+6Ch] [ebp-6Ch] BYREF
  __time32_t v23; // [esp+A4h] [ebp-34h]

  v18 = 0;
  v13 = sub_435D60(a2, "^Rud:r:I::D:", "rfc-822");
  v2 = dword_473090;
  if ( (v13 & 2) != 0 )
    sub_443A9C("TZ=UTC0");
  if ( (v13 & 0x10) != 0 )
    v12 = 0;
  else
    v12 = -1;
  v3 = (char **)(a2 + 4 * v2);
  v14 = *v3;
  if ( *v3 != nullptr )
  {
    if ( **v3 == 43 )
    {
      ++v14;
      ++v3;
    }
    else
    {
      v14 = nullptr;
    }
  }
  if ( (v13 & 4) == 0 )
  {
    Str = *v3;
    v11 = v3;
    v15 = (char *)Str;
    if ( Str == nullptr )
      goto LABEL_25;
    v5 = strspn(Str, "0123456789");
    v6 = Str[v5];
    if ( v6 == 0
      || v6 == 46
      && (unsigned __int8)(Str[v5 + 1] - 48) <= 9u
      && (unsigned __int8)(Str[v5 + 2] - 48) <= 9u
      && Str[v5 + 3] == 0 )
    {
      if ( v5 - 8 > 4 || (((_BYTE)v5 - 8) & 1) != 0 )
        sub_41784C("invalid date '%s'", Str);
      if ( v5 != 8 )
      {
        qmemcpy(Destination, Str + 8, v5 - 8);
        v7 = *((_DWORD *)Str + 1);
        *(_DWORD *)&Str[v5 - 8] = *(_DWORD *)Str;
        *(_DWORD *)&Str[v5 - 4] = v7;
        qmemcpy(v15, Destination, v5 - 8);
      }
    }
    v3 = v11 + 1;
  }
  if ( *v3 != nullptr )
    sub_418164();
LABEL_25:
  if ( (v13 & 8) != 0 )
  {
    sub_471860();
    Time = v23;
  }
  else
  {
    time(&Time);
  }
  v20 = 0;
  sub_43E8F8(&Time, (int)&v21);
  if ( v15 != nullptr )
  {
    memset(&v21, 0, 12);
    if ( (v13 & 0x20) != 0 )
    {
      if ( sub_4639A8(v15, v16, &v21, &v15, &v17, &v18, &v16) == 0 )
        sub_41784C("invalid date '%s'", v15);
    }
    else
    {
      sub_4497F0();
    }
    if ( *v15 != 64 )
      v21.tm_isdst = -1;
    Time = sub_46C858();
    v20 = 0;
  }
  if ( v14 == nullptr )
  {
    if ( v12 != -1 )
    {
      strcpy(Destination, "%Y-%m-%dT%H:%M:%S");
      v9 = 3 * v12 + 8;
LABEL_39:
      Destination[v9] = 0;
      v14 = Destination;
      goto LABEL_42;
    }
    v14 = "%a %b %e %H:%M:%S %Z %Y";
    if ( (v13 & 1) != 0 )
    {
      strcpy(Destination, "%a, %d %b %Y %H:%M:%S ");
      Destination[22] = 37;
      Destination[23] = (v13 & 2) == 0 ? 122 : 90;
      v9 = 24;
      goto LABEL_39;
    }
  }
LABEL_42:
  if ( *v14 != 0 )
  {
    if ( sub_43C594(v8, "%f") != 0 )
      v14 = "%Y.%m.%d-%H:%M:%S";
    sub_444C3C((char *)&MultiByteStr, 0x400u, (int)v14, &v21);
  }
  else
  {
    LOBYTE(MultiByteStr) = 0;
  }
  sub_46F108((char *)&MultiByteStr);
  return 0;
}

