// busybox.exe @ 0x43adb0 size=703

int __cdecl sub_43ADB0(int a1, int a2)
{
  LPCSTR *v2; // ebx
  _DWORD *v3; // esi
  const char *Str; // edi
  char *v5; // eax
  _BYTE *v6; // ecx
  char *v7; // edx
  int v8; // ebp
  int v9; // edi
  char *v10; // edx
  int Val; // eax
  _BYTE *v12; // eax
  HANDLE FileA; // eax
  HANDLE EventA; // eax
  int *v15; // esi
  DWORD v16; // eax
  DWORD v17; // ebx
  int v18; // edi
  int v19; // esi
  int v20; // esi
  int i; // eax
  int *v22; // ebx
  int v23; // eax
  DWORD nCount; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+20h] [ebp-20h]
  HANDLE *lpHandles; // [esp+28h] [ebp-18h]
  char *v28; // [esp+2Ch] [ebp-14h]
  _DWORD *v29; // [esp+2Ch] [ebp-14h]

  if ( *(_DWORD *)(a2 + 4) == 0 || *(_DWORD *)(a2 + 8) == 0 )
    sub_418164();
  v2 = (LPCSTR *)(a2 + 4);
  v26 = sub_4728CC();
  lpHandles = (HANDLE *)sub_4728CC();
  v3 = (_DWORD *)v26;
  for ( nCount = 0; ; ++nCount )
  {
    Str = *++v2;
    if ( *v2 == nullptr )
      break;
    v5 = strrchr(Str, 58);
    v7 = v5;
    if ( v5 == nullptr )
      goto LABEL_16;
    if ( v5 == Str + 1 )
    {
      if ( *v5 != 0 )
      {
LABEL_16:
        v8 = 63;
        v9 = 511;
        goto LABEL_17;
      }
    }
    else
    {
      *v5 = 0;
    }
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = v7 + 1;
      Val = (unsigned __int8)*v10;
      if ( (_BYTE)Val == 0 )
        break;
      v28 = v10;
      v12 = memchr("xndcmy", Val, 6u);
      v6 = v12;
      v7 = v28;
      if ( v12 != nullptr )
      {
        v6 = (_BYTE *)(v12 - "xndcmy");
        v9 |= dword_4803A8[v12 - "xndcmy"];
        v8 |= 1 << (v12 - "xndcmy");
      }
    }
    if ( v9 == 0 )
      sub_41784C("%s: invalid mask\n", *v2);
LABEL_17:
    if ( sub_43C4D8(v6, 0) == 0 )
      sub_41784C("%s: not a directory", *v2);
    FileA = CreateFileA(*v2, 0x80000001, 7u, nullptr, 3u, 0x42000000u, nullptr);
    *v3 = FileA;
    if ( FileA != (HANDLE)-1 )
    {
      v3[9] = *v2;
      v3[2] = v9;
      v3[3] = v8;
      EventA = CreateEventA(nullptr, true, false, nullptr);
      lpHandles[nCount] = EventA;
      v3[1] = EventA;
      v3 += 522;
      if ( sub_462D94() != 0 )
        continue;
    }
    if ( *v2 != nullptr )
    {
      v15 = _errno();
      *v15 = sub_429CD0();
      sub_418014((int)*v2, "add watch (%s) failed", *v2);
    }
    goto LABEL_24;
  }
  while ( 1 )
  {
LABEL_24:
    v16 = WaitForMultipleObjects(nCount, lpHandles, false, 0xFFFFFFFF);
    if ( v16 >= nCount )
    {
      v22 = _errno();
      v23 = sub_429CD0();
      *v22 = v23;
      sub_418014(v23, "watch failed");
    }
    v17 = v26 + 2088 * v16;
    v18 = 0;
    v19 = 0;
    do
    {
      v18 += *(_DWORD *)(v17 + v19 + 44) == 0;
      v29 = (_DWORD *)(v17 + v19 + 40);
      sub_45BC64(v17);
      v19 += *v29;
    }
    while ( *v29 != 0 );
    v20 = sub_462D94();
    if ( v20 == 0 )
    {
      if ( v18 == 0 )
      {
        memset(v29, 0, 0x10u);
        sub_45BC64(v17);
      }
      *(_DWORD *)(v17 + 8) = 0;
      for ( i = v26; i != v26 + 2088 * nCount; i += 2088 )
      {
        if ( *(_DWORD *)(i + 8) != 0 )
          ++v20;
      }
      if ( v20 == 0 )
        break;
    }
  }
  return 0;
}

