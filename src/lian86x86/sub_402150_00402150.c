// lian86.exe @ 0x00402150  size=616  name=sub_402150
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __userpurge sub_402150@<eax>(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // edx
  char v10; // zf
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v16; // [esp+0h] [ebp-2Ch]
  const WCHAR *v17; // [esp+0h] [ebp-2Ch]
  int v18; // [esp+4h] [ebp-28h]
  int v19; // [esp+4h] [ebp-28h]
  int v20; // [esp+8h] [ebp-24h]
  const WCHAR *v21; // [esp+8h] [ebp-24h]
  int v22; // [esp+Ch] [ebp-20h]
  int v23; // [esp+Ch] [ebp-20h]
  int v24; // [esp+Ch] [ebp-20h]
  int v25; // [esp+Ch] [ebp-20h]
  int v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+10h] [ebp-1Ch]
  int v28; // [esp+10h] [ebp-1Ch]
  int v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+14h] [ebp-18h]
  int v32; // [esp+14h] [ebp-18h]
  int v33; // [esp+14h] [ebp-18h]
  int v34; // [esp+14h] [ebp-18h]
  wchar_t *v35; // [esp+14h] [ebp-18h]
  LPVOID v36; // [esp+18h] [ebp-14h] BYREF
  LPVOID lpMem; // [esp+1Ch] [ebp-10h] BYREF
  LPVOID v38; // [esp+20h] [ebp-Ch] BYREF
  LPVOID v39; // [esp+24h] [ebp-8h] BYREF

  v39 = nullptr;
  v38 = nullptr;
  lpMem = nullptr;
  v36 = nullptr;
  mutex_enter();
  sub_4051A0(a2);
  if ( sub_405100() == 1 )
  {
    v30 = str_append();
    v26 = str_append();
    v22 = str_append();
    v2 = str_append();
    sub_40A290((void *)(a1 + 64), 40, v2);
    sub_405182();
    sub_406060(v3 + v22, v26);
    str_assign(&v36, v30);
    v31 = str_append();
    v27 = str_append();
    v23 = str_append();
    v4 = str_append();
    sub_40A290((void *)(a1 + 300), 100, v4);
    sub_405182();
    sub_406060(v5 + v23, v27);
    str_assign(&lpMem, v31);
    v32 = str_append();
    v28 = str_append();
    v18 = str_append();
    v6 = str_append();
    sub_4057F0((wchar_t *)lpMem, 2, dword_418074, v6);
    sub_40E720(v18);
    v16 = str_append();
    v7 = str_append();
    sub_4057F0((wchar_t *)lpMem, 1, dword_418074, v7);
    sub_405182();
    v17 = (const WCHAR *)(v8 + v16);
    sub_405182();
    sub_408F69(v17, (wchar_t *)(v9 + v19), &Caption, 1, v28);
    str_assign(&v38, v32);
    sub_405120(0, v38);
    if ( !v10 )
      sub_401FBA(0);
    v33 = str_append();
    v29 = str_append();
    v20 = str_append();
    v11 = str_append();
    sub_406060(v38, v11);
    sub_405182();
    sub_40D780((LPCWCH)(v12 + v20), 1, v29);
    str_assign(&v39, v33);
    sub_405120(v39, v36);
    if ( v10 )
    {
      v34 = str_append();
      v24 = str_append();
      v13 = str_append();
      sub_4057F0((wchar_t *)lpMem, 3, dword_418074, v13);
      sub_40E720(v24);
      v21 = lpCaption;
      sub_405182();
      sub_408E27(v21, (LPCWSTR)(v14 + v25), 0x10u);
      sub_4051A0(v34);
      sub_401FBA(0);
    }
  }
  v35 = (wchar_t *)v39;
  str_append();
  str_append_w(v35);
  sub_405170();
  sub_40E5F0(lpMem);
  sub_40E5F0(v38);
  sub_40E5F0(v36);
  return sub_40E5F0(v39);
}

