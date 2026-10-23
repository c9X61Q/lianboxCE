// lian86.exe @ 0x00403801  size=1001  name=sub_403801
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_403801()
{
  int v0; // eax
  int v1; // eax
  wchar_t *v2; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  wchar_t *v24; // edx
  int v25; // edx
  wchar_t *v27; // [esp-8h] [ebp-48h]
  wchar_t *v28; // [esp-8h] [ebp-48h]
  int v29; // [esp+0h] [ebp-40h]
  int v30; // [esp+0h] [ebp-40h]
  int v31; // [esp+0h] [ebp-40h]
  int v32; // [esp+0h] [ebp-40h]
  int v33; // [esp+0h] [ebp-40h]
  int v34; // [esp+0h] [ebp-40h]
  int v35; // [esp+0h] [ebp-40h]
  int v36; // [esp+0h] [ebp-40h]
  int v37; // [esp+0h] [ebp-40h]
  wchar_t *v38; // [esp+0h] [ebp-40h]
  int v39; // [esp+4h] [ebp-3Ch]
  int v40; // [esp+4h] [ebp-3Ch]
  int v41; // [esp+4h] [ebp-3Ch]
  int v42; // [esp+4h] [ebp-3Ch]
  int v43; // [esp+4h] [ebp-3Ch]
  int v44; // [esp+4h] [ebp-3Ch]
  int v45; // [esp+4h] [ebp-3Ch]
  wchar_t *v46; // [esp+4h] [ebp-3Ch]
  int v47; // [esp+4h] [ebp-3Ch]
  int v48; // [esp+4h] [ebp-3Ch]
  int v49; // [esp+8h] [ebp-38h]
  wchar_t *v50; // [esp+8h] [ebp-38h]
  int v51; // [esp+8h] [ebp-38h]
  int v52; // [esp+8h] [ebp-38h]
  int v53; // [esp+8h] [ebp-38h]
  int v54; // [esp+8h] [ebp-38h]
  int v55; // [esp+8h] [ebp-38h]
  int v56; // [esp+8h] [ebp-38h]
  int v57; // [esp+8h] [ebp-38h]
  int v58; // [esp+8h] [ebp-38h]
  int v59; // [esp+8h] [ebp-38h]
  int v60; // [esp+8h] [ebp-38h]
  int v61; // [esp+8h] [ebp-38h]
  int v62; // [esp+8h] [ebp-38h]
  int v63; // [esp+8h] [ebp-38h]
  int v64; // [esp+8h] [ebp-38h]
  int v65; // [esp+Ch] [ebp-34h]
  __int16 v66; // [esp+10h] [ebp-30h]
  wchar_t *v67; // [esp+14h] [ebp-2Ch] BYREF
  LPVOID v68; // [esp+18h] [ebp-28h] BYREF
  LPVOID lpMem; // [esp+1Ch] [ebp-24h] BYREF
  wchar_t *v70; // [esp+20h] [ebp-20h] BYREF
  LPCWCH lpWideCharStr; // [esp+24h] [ebp-1Ch] BYREF
  LPCWCH v72; // [esp+28h] [ebp-18h] BYREF
  wchar_t *v73; // [esp+2Ch] [ebp-14h] BYREF
  wchar_t *String; // [esp+30h] [ebp-10h] BYREF
  wchar_t *v75; // [esp+34h] [ebp-Ch] BYREF
  wchar_t *v76; // [esp+38h] [ebp-8h] BYREF

  mutex_enter();
  dword_41808C = (int)&unk_417089;
  v65 = 0;
  do
  {
    if ( v65 > 8 )
      break;
    v66 = *(char *)dword_41808C++;
    v49 = str_append();
    v0 = str_append();
    sub_405DC0(-v66, v0);
    str_assign((LPVOID *)&v67, v49);
    v50 = (wchar_t *)v68;
    v1 = str_append();
    v2 = v50;
    v51 = v1;
    str_append_w(v2);
    str_append_w(v67);
    str_assign(&v68, v51);
  }
  while ( !__OFADD__(1, v65++) );
  v52 = str_append();
  v39 = str_append();
  v29 = str_append();
  v4 = str_append();
  sub_40D780(::lpWideCharStr, 1, v4);
  sub_405182();
  sub_405EB0(v5 + v29, v39);
  str_assign(&lpMem, v52);
  v53 = str_append();
  v40 = str_append();
  v30 = str_append();
  v6 = str_append();
  sub_40D780(::lpWideCharStr, 3, v6);
  sub_405182();
  sub_405EB0(v7 + v30, v40);
  str_assign((LPVOID *)&v70, v53);
  v54 = str_append();
  v41 = str_append();
  v31 = str_append();
  v8 = str_append();
  sub_40D780((LPCWCH)lpMem, 3, v8);
  sub_405182();
  sub_405EB0(v9 + v31, v41);
  str_assign((LPVOID *)&lpWideCharStr, v54);
  v55 = str_append();
  v42 = str_append();
  v32 = str_append();
  v10 = str_append();
  sub_40D780(lpWideCharStr, 3, v10);
  sub_405182();
  sub_405EB0(v11 + v32, v42);
  str_assign((LPVOID *)&v72, v55);
  v56 = str_append();
  v43 = str_append();
  v33 = str_append();
  v12 = str_append();
  sub_40D780(v72, 3, v12);
  sub_405182();
  sub_405EB0(v13 + v33, v43);
  str_assign((LPVOID *)&v73, v56);
  v14 = str_append();
  sub_403E37(v73, 1, v14);
  sub_4051A0(v57);
  v15 = str_append();
  sub_403E37(v70, 0, v15);
  str_assign((LPVOID *)&dword_4180B4, v58);
  v16 = str_append();
  sub_403E37((wchar_t *)lpWideCharStr, 0, v16);
  str_assign((LPVOID *)&String, v59);
  v17 = str_append();
  sub_403E37((wchar_t *)v72, 0, v17);
  str_assign((LPVOID *)&v75, v60);
  v18 = str_append();
  sub_403E37((wchar_t *)lpMem, 0, v18);
  str_assign((LPVOID *)&v76, v61);
  v62 = str_append();
  v44 = str_append();
  v19 = str_append();
  get_short_path((wchar_t *)dword_4180C8, v19);
  sub_40E720(v34);
  v27 = String;
  sub_405182();
  sub_406650(v27, asc_417056, (wchar_t *)(v20 + v35), v44);
  str_assign((LPVOID *)&String, v62);
  v63 = str_append();
  v45 = str_append();
  v21 = str_append();
  get_short_path((wchar_t *)dword_4180B8, v21);
  sub_40E720(v36);
  v28 = String;
  sub_405182();
  sub_406650(v28, asc_41702E, (wchar_t *)(v22 + v37), v45);
  str_assign((LPVOID *)&String, v63);
  v64 = str_append();
  v46 = (wchar_t *)v68;
  v23 = str_append();
  v24 = v46;
  v47 = v23;
  str_append_w(v24);
  str_append_w(::String);
  str_append_w(String);
  str_append_w(v76);
  str_append_w(v75);
  sub_40E720(v47);
  v38 = dword_418098;
  sub_405182();
  sub_4023B8(v38, (wchar_t *)(v25 + v48));
  sub_4051A0(v64);
  sub_40E5F0(lpMem);
  sub_40E5F0(v68);
  sub_40E5F0((LPVOID)v72);
  sub_40E5F0(v73);
  sub_40E5F0(v75);
  sub_40E5F0((LPVOID)lpWideCharStr);
  sub_40E5F0(v76);
  sub_40E5F0(v70);
  sub_40E5F0(v67);
  return sub_40E5F0(String);
}

