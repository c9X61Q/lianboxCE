// lian86.exe @ 0x00403f53  size=1777  name=runtime_init
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __noreturn runtime_init()
{
  int v0; // eax
  int v1; // eax
  wchar_t *v2; // edx
  bool v3; // of
  int v4; // eax
  int v5; // eax
  wchar_t *v6; // edx
  int v7; // eax
  int v8; // eax
  wchar_t *v9; // edx
  int v10; // eax
  int v11; // eax
  wchar_t *v12; // edx
  int v13; // eax
  int v14; // eax
  wchar_t *v15; // edx
  int v16; // eax
  int v17; // eax
  wchar_t *v18; // edx
  int v19; // eax
  int v20; // eax
  wchar_t *v21; // edx
  int v22; // eax
  int v23; // eax
  wchar_t *v24; // edx
  int v25; // eax
  int v26; // eax
  wchar_t *v27; // edx
  int v28; // eax
  wchar_t *v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edx
  int v39; // eax
  wchar_t *v40; // edx
  int v41; // eax
  int v42; // [esp+0h] [ebp-48h]
  int v43; // [esp+0h] [ebp-48h]
  const WCHAR *v44; // [esp+0h] [ebp-48h]
  int v45; // [esp+4h] [ebp-44h]
  int v46; // [esp+4h] [ebp-44h]
  wchar_t *v47; // [esp+4h] [ebp-44h]
  int v48; // [esp+4h] [ebp-44h]
  int v49; // [esp+4h] [ebp-44h]
  int v50; // [esp+8h] [ebp-40h]
  wchar_t *v51; // [esp+8h] [ebp-40h]
  int v52; // [esp+8h] [ebp-40h]
  int v53; // [esp+8h] [ebp-40h]
  wchar_t *v54; // [esp+8h] [ebp-40h]
  int v55; // [esp+8h] [ebp-40h]
  int v56; // [esp+8h] [ebp-40h]
  wchar_t *v57; // [esp+8h] [ebp-40h]
  int v58; // [esp+8h] [ebp-40h]
  int v59; // [esp+8h] [ebp-40h]
  wchar_t *v60; // [esp+8h] [ebp-40h]
  int v61; // [esp+8h] [ebp-40h]
  int v62; // [esp+8h] [ebp-40h]
  LPCWSTR v63; // [esp+8h] [ebp-40h]
  int v64; // [esp+8h] [ebp-40h]
  int v65; // [esp+8h] [ebp-40h]
  LPCWSTR v66; // [esp+8h] [ebp-40h]
  int v67; // [esp+8h] [ebp-40h]
  int v68; // [esp+8h] [ebp-40h]
  int v69; // [esp+8h] [ebp-40h]
  int v70; // [esp+8h] [ebp-40h]
  int v71; // [esp+8h] [ebp-40h]
  LPCWSTR v72; // [esp+8h] [ebp-40h]
  int v73; // [esp+8h] [ebp-40h]
  int v74; // [esp+8h] [ebp-40h]
  LPCWSTR v75; // [esp+8h] [ebp-40h]
  int v76; // [esp+8h] [ebp-40h]
  LPCWSTR v77; // [esp+8h] [ebp-40h]
  int v78; // [esp+8h] [ebp-40h]
  int v79; // [esp+8h] [ebp-40h]
  int v80; // [esp+8h] [ebp-40h]
  int v81; // [esp+8h] [ebp-40h]
  int v82; // [esp+8h] [ebp-40h]
  int v83; // [esp+8h] [ebp-40h]
  int v84; // [esp+8h] [ebp-40h]
  int v85; // [esp+8h] [ebp-40h]
  LPCWSTR v86; // [esp+8h] [ebp-40h]
  int v87; // [esp+8h] [ebp-40h]
  int v88; // [esp+8h] [ebp-40h]
  int v89; // [esp+Ch] [ebp-3Ch]
  int v90; // [esp+Ch] [ebp-3Ch]
  int v91; // [esp+Ch] [ebp-3Ch]
  int v92; // [esp+Ch] [ebp-3Ch]
  int v93; // [esp+Ch] [ebp-3Ch]
  int v94; // [esp+Ch] [ebp-3Ch]
  int v95; // [esp+Ch] [ebp-3Ch]
  int v96; // [esp+Ch] [ebp-3Ch]
  int v97; // [esp+Ch] [ebp-3Ch]
  __int16 v98; // [esp+10h] [ebp-38h]
  __int16 v99; // [esp+10h] [ebp-38h]
  __int16 v100; // [esp+10h] [ebp-38h]
  __int16 v101; // [esp+10h] [ebp-38h]
  __int16 v102; // [esp+10h] [ebp-38h]
  __int16 v103; // [esp+10h] [ebp-38h]
  __int16 v104; // [esp+10h] [ebp-38h]
  __int16 v105; // [esp+10h] [ebp-38h]
  __int16 v106; // [esp+10h] [ebp-38h]
  wchar_t *String; // [esp+14h] [ebp-34h] BYREF
  wchar_t *v108; // [esp+18h] [ebp-30h] BYREF
  wchar_t *v109; // [esp+1Ch] [ebp-2Ch] BYREF
  wchar_t *v110; // [esp+20h] [ebp-28h] BYREF
  wchar_t *v111; // [esp+24h] [ebp-24h] BYREF
  LPCWSTR lpName; // [esp+28h] [ebp-20h] BYREF
  wchar_t *v113; // [esp+2Ch] [ebp-1Ch] BYREF
  int v114; // [esp+30h] [ebp-18h]
  LPVOID lpParameter; // [esp+34h] [ebp-14h] BYREF
  int v116; // [esp+38h] [ebp-10h]
  wchar_t *v117; // [esp+3Ch] [ebp-Ch] BYREF
  int v118; // [esp+40h] [ebp-8h]

  mutex_enter();
  dword_41808C = (int)&unk_417092;
  v89 = 0;
  do
  {
    if ( v89 > 25 )
      break;
    v98 = *(char *)dword_41808C++;
    v50 = str_append();
    v0 = str_append();
    sub_405DC0(-v98, v0);
    str_assign((LPVOID *)&String, v50);
    v51 = v108;
    v1 = str_append();
    v2 = v51;
    v52 = v1;
    str_append_w(v2);
    str_append_w(String);
    str_assign((LPVOID *)&v108, v52);
    v3 = __OFADD__(1, v89++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_4170F6;
  v90 = 0;
  do
  {
    if ( v90 > 2 )
      break;
    v99 = *(char *)dword_41808C++;
    v53 = str_append();
    v4 = str_append();
    sub_405DC0(-v99, v4);
    str_assign((LPVOID *)&String, v53);
    v54 = v109;
    v5 = str_append();
    v6 = v54;
    v55 = v5;
    str_append_w(v6);
    str_append_w(String);
    str_assign((LPVOID *)&v109, v55);
    v3 = __OFADD__(1, v90++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_4170FB;
  v91 = 0;
  do
  {
    if ( v91 > 3 )
      break;
    v100 = *(char *)dword_41808C++;
    v56 = str_append();
    v7 = str_append();
    sub_405DC0(-v100, v7);
    str_assign((LPVOID *)&String, v56);
    v57 = v110;
    v8 = str_append();
    v9 = v57;
    v58 = v8;
    str_append_w(v9);
    str_append_w(String);
    str_assign((LPVOID *)&v110, v58);
    v3 = __OFADD__(1, v91++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_4170F9;
  v92 = 0;
  do
  {
    if ( v92 > 1 )
      break;
    v101 = *(char *)dword_41808C++;
    v59 = str_append();
    v10 = str_append();
    sub_405DC0(-v101, v10);
    str_assign((LPVOID *)&String, v59);
    v60 = v111;
    v11 = str_append();
    v12 = v60;
    v61 = v11;
    str_append_w(v12);
    str_append_w(String);
    str_assign((LPVOID *)&v111, v61);
    v3 = __OFADD__(1, v92++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_4170CF;
  v93 = 0;
  do
  {
    if ( v93 > 13 )
      break;
    v102 = *(char *)dword_41808C++;
    v62 = str_append();
    v13 = str_append();
    sub_405DC0(-v102, v13);
    str_assign((LPVOID *)&String, v62);
    v63 = lpName;
    v14 = str_append();
    v15 = (wchar_t *)v63;
    v64 = v14;
    str_append_w(v15);
    str_append_w(String);
    str_assign((LPVOID *)&lpName, v64);
    v3 = __OFADD__(1, v93++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_4170DD;
  v94 = 0;
  do
  {
    if ( v94 > 14 )
      break;
    v103 = *(char *)dword_41808C++;
    v65 = str_append();
    v16 = str_append();
    sub_405DC0(-v103, v16);
    str_assign((LPVOID *)&String, v65);
    v66 = ::lpName;
    v17 = str_append();
    v18 = (wchar_t *)v66;
    v67 = v17;
    str_append_w(v18);
    str_append_w(String);
    str_assign((LPVOID *)&::lpName, v67);
    v3 = __OFADD__(1, v94++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_4170EC;
  v95 = 0;
  do
  {
    if ( v95 > 9 )
      break;
    v104 = *(char *)dword_41808C++;
    v68 = str_append();
    v19 = str_append();
    sub_405DC0(-v104, v19);
    str_assign((LPVOID *)&String, v68);
    v69 = dword_4180E0;
    v20 = str_append();
    v21 = (wchar_t *)v69;
    v70 = v20;
    str_append_w(v21);
    str_append_w(String);
    str_assign((LPVOID *)&dword_4180E0, v70);
    v3 = __OFADD__(1, v95++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_417084;
  v96 = 0;
  do
  {
    if ( v96 > 4 )
      break;
    v105 = *(char *)dword_41808C++;
    v71 = str_append();
    v22 = str_append();
    sub_405DC0(-v105, v22);
    str_assign((LPVOID *)&String, v71);
    v72 = lpCaption;
    v23 = str_append();
    v24 = (wchar_t *)v72;
    v73 = v23;
    str_append_w(v24);
    str_append_w(String);
    str_assign((LPVOID *)&lpCaption, v73);
    v3 = __OFADD__(1, v96++);
  }
  while ( !v3 );
  dword_41808C = (int)&unk_417103;
  v97 = 0;
  do
  {
    if ( v97 > 3 )
      break;
    v106 = *(char *)dword_41808C++;
    v74 = str_append();
    v25 = str_append();
    sub_405DC0(-v106, v25);
    str_assign((LPVOID *)&String, v74);
    v75 = dword_4180B8;
    v26 = str_append();
    v27 = (wchar_t *)v75;
    v76 = v26;
    str_append_w(v27);
    str_append_w(String);
    str_assign((LPVOID *)&dword_4180B8, v76);
    v3 = __OFADD__(1, v97++);
  }
  while ( !v3 );
  v77 = dword_4180B8;
  v28 = str_append();
  v29 = (wchar_t *)v77;
  v78 = v28;
  str_append_w(v29);
  str_append_w(v110);
  str_assign((LPVOID *)&dword_4180B8, v78);
  v30 = str_append();
  get_windir(v109, v110, v30);
  str_assign((LPVOID *)&v113, v79);
  v114 = sub_40985E();
  hModule = GetModuleHandleW(nullptr);
  v80 = str_append();
  v45 = str_append();
  v42 = str_append();
  v31 = str_append();
  sub_40D780(lpWideCharStr, 1, v31);
  sub_405182();
  sub_405EB0(v32 + v42, v45);
  str_assign(&lpParameter, v80);
  v81 = str_append();
  v46 = str_append();
  v43 = str_append();
  v33 = str_append();
  sub_40D780((LPCWCH)lpParameter, 1, v33);
  sub_405182();
  sub_405EB0(v34 + v43, v46);
  str_assign(&lpParameter, v81);
  v116 = sub_402E49((wchar_t *)lpParameter);
  v35 = str_append();
  sub_402150(v116, v35);
  sub_4051A0(v82);
  sub_40196C();
  sub_40469C(v116);
  v83 = str_append();
  v47 = v108;
  v36 = sub_405100();
  sub_403539(v36, v47, v83);
  str_assign((LPVOID *)&dword_4180A8, v84);
  PathRemoveBackslashW(dword_4180A8);
  sub_402068(v116);
  v85 = str_append();
  v37 = str_append();
  get_short_path(dword_4180A8, v37);
  sub_40E720(v48);
  v44 = lpName;
  sub_405182();
  sub_4099A5(v44, (LPCWSTR)(v38 + v49));
  sub_4051A0(v85);
  v86 = pszPath;
  v39 = str_append();
  v40 = (wchar_t *)v86;
  v87 = v39;
  str_append_w(v40);
  str_append_w((wchar_t *)dword_4180B8);
  str_assign((LPVOID *)&dword_4180B8, v87);
  sub_403801();
  v41 = str_append();
  sub_401E66(v114, v41);
  str_assign((LPVOID *)&v117, v88);
  if ( dword_4180C0 == 1 )
    dword_418070 = sub_40548C((LPTHREAD_START_ROUTINE)sub_402C55, lpParameter);
  else
    sub_402C55((wchar_t *)lpParameter);
  v118 = sub_403C83(v117, v113, v109, v111);
  SetConsoleCtrlHandler(HandlerRoutine, false);
  sub_401FBA(v118);
}

