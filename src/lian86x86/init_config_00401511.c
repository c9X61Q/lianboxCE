// lian86.exe @ 0x00401511  size=1115  name=init_config
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int init_config()
{
  int v1; // eax
  int v2; // eax
  wchar_t *v3; // edx
  DWORD v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v9; // zf
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  wchar_t *v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  wchar_t *v18; // edx
  int v19; // eax
  int v20; // eax
  wchar_t *v21; // edx
  int v22; // eax
  wchar_t *v23; // edx
  int v25; // [esp-4h] [ebp-38h]
  int v26; // [esp-4h] [ebp-38h]
  LPCWCH v27; // [esp-4h] [ebp-38h]
  int v28; // [esp-4h] [ebp-38h]
  int v29; // [esp-4h] [ebp-38h]
  int v30; // [esp-4h] [ebp-38h]
  int v31; // [esp-4h] [ebp-38h]
  int v32; // [esp-4h] [ebp-38h]
  int v33; // [esp-4h] [ebp-38h]
  LPWSTR v34; // [esp-4h] [ebp-38h]
  int v35; // [esp-4h] [ebp-38h]
  wchar_t *v36; // [esp-4h] [ebp-38h]
  int v37; // [esp-4h] [ebp-38h]
  int v38; // [esp-4h] [ebp-38h]
  LPCWCH v39; // [esp-4h] [ebp-38h]
  int v40; // [esp-4h] [ebp-38h]
  wchar_t *v41; // [esp-4h] [ebp-38h]
  int v42; // [esp-4h] [ebp-38h]
  int v43; // [esp+0h] [ebp-34h]
  int v44; // [esp+4h] [ebp-30h]
  int v45; // [esp+4h] [ebp-30h]
  LPVOID lpMem; // [esp+8h] [ebp-2Ch] BYREF
  wchar_t *String; // [esp+Ch] [ebp-28h] BYREF
  LPCWCH lpWideCharStr; // [esp+10h] [ebp-24h] BYREF
  LPCVOID lpBuffer; // [esp+14h] [ebp-20h]
  DWORD NumberOfBytesWritten; // [esp+18h] [ebp-1Ch] BYREF
  int i; // [esp+1Ch] [ebp-18h]
  int v52; // [esp+20h] [ebp-14h]
  LPVOID v53; // [esp+24h] [ebp-10h] BYREF
  wchar_t *Source; // [esp+28h] [ebp-Ch] BYREF

  mutex_enter();
  if ( dword_4180EC == 1 )
  {
    if ( dword_4180D4 == 1 && dword_4180C0 != 1 )
    {
      v43 = sub_405760(String1, &unk_417026);
      v45 = 1;
      do
      {
        if ( v43 < v45 )
          break;
        v25 = str_append();
        v1 = str_append();
        sub_4057F0(String1, v45, ::String, v1);
        str_assign(&lpMem, v25);
        if ( file_exists((wchar_t *)lpMem) != 0 )
        {
          v26 = str_append();
          get_short_path((wchar_t *)lpMem);
          str_assign((LPVOID *)&String, v26);
          v27 = lpWideCharStr;
          v2 = str_append();
          v3 = (wchar_t *)v27;
          v28 = v2;
          str_append_w(v3);
          str_append_w(String);
          str_append_w(::String);
          str_assign((LPVOID *)&lpWideCharStr, v28);
        }
      }
      while ( !__OFADD__(1, v45++) );
      lpBuffer = (LPCVOID)w2a(lpWideCharStr);
      v5 = sub_40A1E0(lpBuffer);
      WriteFile(hFile, lpBuffer, v5, &NumberOfBytesWritten, nullptr);
      sub_40A200((LPVOID)lpBuffer);
      sub_405068((int)&String1, &Caption);
    }
  }
  else
  {
    dword_4180EC = 1;
    for ( i = 1; ; ++i )
    {
      v29 = str_append();
      v6 = str_append();
      sub_4057F0(dword_41807C, i, asc_41702E, v6);
      str_assign((LPVOID *)&lpWideCharStr, v29);
      v52 = sub_4059C0((int)lpWideCharStr, SubStr);
      if ( v52 != 0 )
      {
        v30 = str_append();
        v7 = str_append();
        sub_4057F0((wchar_t *)lpWideCharStr, 2, SubStr, v7);
        str_assign(&v53, v30);
        v31 = str_append();
        v8 = str_append();
        sub_4057F0((wchar_t *)lpWideCharStr, 1, SubStr, v8);
        str_assign((LPVOID *)&lpWideCharStr, v31);
      }
      sub_405120(0, lpWideCharStr);
      if ( !v9 )
        break;
      if ( i % 2 != 0 )
      {
        v32 = str_append();
        v10 = str_append();
        sub_405B20(lpWideCharStr, 1, v10);
        sub_40E720(v32);
        v11 = sub_405160(v33);
        sub_405120(v11, v12);
        if ( v9 )
        {
          v38 = str_append();
          v19 = str_append();
          sub_405DA0((wchar_t *)lpWideCharStr, (int)&unk_417036, v19);
          str_assign((LPVOID *)&lpWideCharStr, v38);
          v39 = lpWideCharStr;
          v20 = str_append();
          v21 = (wchar_t *)v39;
          v40 = v20;
          str_append_w(v21);
          str_assign((LPVOID *)(12 * v44 + dword_4180F0 + 4), v40);
          *(_DWORD *)(12 * v44 + dword_4180F0) = sub_4059E0(v53);
          v41 = String1;
          v22 = str_append();
          v23 = v41;
          v42 = v22;
          str_append_w(v23);
          str_append_w(dword_4180A8);
          str_append_w(dword_4180C4);
          str_append_w((wchar_t *)lpWideCharStr);
          str_append_w(::String);
          str_assign((LPVOID *)&String1, v42);
        }
        else
        {
          v34 = dword_4180A8;
          v13 = str_append();
          v14 = v34;
          v35 = v13;
          str_append_w(v14);
          str_append_w(dword_4180C4);
          str_append();
          v15 = str_append();
          sub_405DA0((wchar_t *)lpWideCharStr, (int)&unk_417036, v15);
          str_assign((LPVOID *)&Source, v35);
          sub_40AD45(Source);
          if ( dword_4180DC == 1 )
          {
            v16 = sub_4059E0(v53);
            sub_40ADC5(Source, v16);
          }
          sub_403BEA(Source);
          v36 = String1;
          v17 = str_append();
          v18 = v36;
          v37 = v17;
          str_append_w(v18);
          str_append_w(Source);
          str_append_w(::String);
          str_assign((LPVOID *)&String1, v37);
        }
      }
      else
      {
        *(_DWORD *)(12 * v44++ + dword_4180F0 + 8) = sub_4059E0(lpWideCharStr);
      }
    }
  }
  sub_40E5F0(lpMem);
  sub_40E5F0(Source);
  sub_40E5F0((LPVOID)lpWideCharStr);
  sub_40E5F0(v53);
  return sub_40E5F0(String);
}

