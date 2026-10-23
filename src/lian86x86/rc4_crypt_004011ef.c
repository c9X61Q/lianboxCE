// lian86.exe @ 0x004011ef  size=802  name=rc4_crypt
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall rc4_crypt(_BYTE *a1, int a2, wchar_t *String)
{
  bool v3; // of
  int v4; // ebp
  int v5; // ebp
  int v7; // [esp-4h] [ebp-50h]
  LPCWCH lpWideCharStr; // [esp+0h] [ebp-4Ch] BYREF
  LPCVOID lpMem; // [esp+4h] [ebp-48h]
  int v10; // [esp+8h] [ebp-44h]
  _DWORD v11[2]; // [esp+Ch] [ebp-40h] BYREF
  _DWORD v12[2]; // [esp+14h] [ebp-38h] BYREF
  int v13; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+20h] [ebp-2Ch]
  int v15; // [esp+24h] [ebp-28h]
  int v16; // [esp+28h] [ebp-24h]
  int v17; // [esp+2Ch] [ebp-20h]
  int v18; // [esp+30h] [ebp-1Ch]
  int *v19; // [esp+34h] [ebp-18h]
  _BYTE *v20; // [esp+38h] [ebp-14h]
  _BYTE *v21; // [esp+3Ch] [ebp-10h]

  str_init((int)&lpWideCharStr, String);
  lpMem = (LPCVOID)w2a(lpWideCharStr);
  v10 = sub_40A1E0(lpMem);
  sub_40E266(4, 256, 5, 0, v11);
  sub_40E266(4, 256, 5, 0, v12);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v14 = 1;
  v10 = 32;
  v19 = (int *)v11[0];
  v20 = lpMem;
  v13 = 0;
  do
  {
    if ( v13 > 255 )
      break;
    *v19++ = v13;
    if ( *v20 == 0 )
      v20 = lpMem;
    *(_DWORD *)(v12[0] + 4 * v13) = (char)*v20++;
    v3 = __OFADD__(1, v13++);
  }
  while ( !v3 );
  v14 = 0;
  v13 = 0;
  do
  {
    if ( v13 > 255 )
      break;
    v14 = (unsigned __int8)(*(_BYTE *)(v12[0] + 4 * v13) + *(_BYTE *)(v11[0] + 4 * v13) + v14);
    v4 = v11[0];
    v17 = *(_DWORD *)(v11[0] + 4 * v13);
    *(_DWORD *)(v11[0] + 4 * v13) = *(_DWORD *)(v11[0] + 4 * v14);
    *(_DWORD *)(v4 + 4 * v14) = v17;
    v3 = __OFADD__(1, v13++);
  }
  while ( !v3 );
  v13 = 0;
  v14 = 0;
  v21 = a1;
  v16 = 0;
  do
  {
    if ( a2 - 1 < v16 )
      break;
    v13 = (unsigned __int8)(v13 + 1);
    v5 = v11[0];
    v14 = (unsigned __int8)(*(_BYTE *)(v11[0] + 4 * v13) + v14);
    v17 = *(_DWORD *)(v11[0] + 4 * v13);
    *(_DWORD *)(v11[0] + 4 * v13) = *(_DWORD *)(v11[0] + 4 * v14);
    *(_DWORD *)(v5 + 4 * v14) = v17;
    v15 = (unsigned __int8)(*(_DWORD *)(v5 + 4 * v14) + *(_DWORD *)(v5 + 4 * v13));
    v18 = *(_DWORD *)(v5 + 4 * v15);
    *v21++ ^= v18;
    v3 = __OFADD__(1, v16++);
  }
  while ( !v3 );
  sub_40E266(4, 1, 5, 0, v11);
  sub_40E266(4, 1, 5, 0, v12);
  sub_40A200((LPVOID)lpMem);
  v7 = sub_40E5F0((LPVOID)lpWideCharStr);
  sub_40E3B9(v11[0]);
  sub_40E3B9(v12[0]);
  return v7;
}

