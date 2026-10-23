// lian86.exe @ 0x0040249d  size=455  name=sub_40249D
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40249D(int a1)
{
  int v1; // eax
  int v2; // eax
  wchar_t *v3; // edx
  const unsigned __int16 *CommandLineW; // eax
  int v6; // eax
  wchar_t *v7; // edx
  WCHAR *v8; // eax
  int v9; // eax
  int v10; // edx
  int v12; // [esp+0h] [ebp-38h]
  int v13; // [esp+4h] [ebp-34h]
  int v14; // [esp+8h] [ebp-30h]
  int v15; // [esp+Ch] [ebp-2Ch]
  LPCWSTR v16; // [esp+Ch] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-2Ch]
  int v18; // [esp+Ch] [ebp-2Ch]
  wchar_t *v19; // [esp+Ch] [ebp-2Ch]
  int v20; // [esp+Ch] [ebp-2Ch]
  int v21; // [esp+Ch] [ebp-2Ch]
  wchar_t *v22; // [esp+Ch] [ebp-2Ch]
  int v23; // [esp+10h] [ebp-28h]
  __int16 v24; // [esp+14h] [ebp-24h]
  LPVOID lpMem; // [esp+18h] [ebp-20h] BYREF
  LPCWSTR lpName; // [esp+1Ch] [ebp-1Ch] BYREF
  LPVOID v27; // [esp+20h] [ebp-18h] BYREF
  LPWSTR pszPath[2]; // [esp+24h] [ebp-14h] BYREF
  int v29; // [esp+2Ch] [ebp-Ch]
  LPCWSTR lpValue; // [esp+30h] [ebp-8h] BYREF

  mutex_enter();
  sub_4051A0(a1);
  dword_41808C = (int)&unk_4170C8;
  v23 = 0;
  do
  {
    if ( v23 > 6 )
      break;
    v24 = *(char *)dword_41808C++;
    v15 = str_append();
    v1 = str_append();
    sub_405DC0(-v24, v1);
    str_assign(&lpMem, v15);
    v16 = lpName;
    v2 = str_append();
    v3 = (wchar_t *)v16;
    v17 = v2;
    str_append_w(v3);
    str_append_w((wchar_t *)lpMem);
    str_assign((LPVOID *)&lpName, v17);
  }
  while ( !__OFADD__(1, v23++) );
  v18 = str_append();
  v14 = str_append();
  CommandLineW = GetCommandLineW();
  sub_40A240(CommandLineW, v14);
  str_assign(&v27, v18);
  v19 = (wchar_t *)v27;
  v6 = str_append();
  v7 = v19;
  v20 = v6;
  str_append_w(v7);
  str_assign((LPVOID *)pszPath, v20);
  PathRemoveArgsW(pszPath[0]);
  pszPath[1] = v8;
  v29 = sub_405DE0(pszPath[0]);
  if ( v29 > 0 )
  {
    v21 = str_append();
    str_append_w(asc_41702A);
    str_append();
    v13 = str_append();
    v12 = str_append();
    v9 = str_append();
    sub_406110(v27, v29 + 1, v9);
    sub_405182();
    sub_406060(v10 + v12, v13);
    str_assign((LPVOID *)&lpValue, v21);
  }
  sub_4099A5(lpName, lpValue);
  v22 = (wchar_t *)lpValue;
  str_append();
  str_append_w(v22);
  sub_405170();
  sub_40E5F0(pszPath[0]);
  sub_40E5F0(lpMem);
  sub_40E5F0(v27);
  sub_40E5F0((LPVOID)lpName);
  return sub_40E5F0((LPVOID)lpValue);
}

