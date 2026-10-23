// gettime.exe @ 0x401120 size=627

int __cdecl sub_401120(int a1)
{
  int v1; // eax
  char *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v17; // [esp-Ch] [ebp-134h]
  int v18; // [esp-8h] [ebp-130h]
  int v19; // [esp-8h] [ebp-130h]
  int v20; // [esp-8h] [ebp-130h]
  int v21; // [esp-8h] [ebp-130h]
  int v22; // [esp-8h] [ebp-130h]
  __int64 v23; // [esp-8h] [ebp-130h]
  _BYTE v24[16]; // [esp+0h] [ebp-128h] BYREF
  _BYTE v25[16]; // [esp+10h] [ebp-118h] BYREF
  _BYTE v26[16]; // [esp+20h] [ebp-108h] BYREF
  _BYTE v27[16]; // [esp+30h] [ebp-F8h] BYREF
  _BYTE v28[16]; // [esp+40h] [ebp-E8h] BYREF
  _BYTE v29[16]; // [esp+50h] [ebp-D8h] BYREF
  _BYTE v30[152]; // [esp+60h] [ebp-C8h] BYREF
  _BYTE v31[8]; // [esp+F8h] [ebp-30h] BYREF
  _BYTE v32[8]; // [esp+100h] [ebp-28h] BYREF
  __time64_t v33; // [esp+108h] [ebp-20h] BYREF
  _BYTE v34[8]; // [esp+110h] [ebp-18h] BYREF
  __int64 v35; // [esp+118h] [ebp-10h]
  char v36; // [esp+122h] [ebp-6h] BYREF
  char v37; // [esp+123h] [ebp-5h] BYREF
  int *v38; // [esp+124h] [ebp-4h]

  sub_407670(v34);
  `anonymous namespace'::_Transcode_result::_Value(v32);
  v1 = sub_402380(v31, v32);
  v35 = sub_406560(v1) / 1000;
  v33 = sub_408370(v34);
  v38 = (int *)sub_401100(&v33);
  sub_4028D0(1);
  v2 = (char *)sub_402500(&v37, 48);
  sub_4014C0((int)v30, v2);
  v3 = sub_403A40(v38[5] + 1900);
  sub_401540(v3, ".");
  v18 = v38[4] + 1;
  v4 = std::setw(v29, 2, 0);
  sub_401510((int)v30, v4);
  v5 = sub_403A40(v18);
  sub_401540(v5, ".");
  v19 = v38[3];
  v6 = std::setw(v28, 2, 0);
  sub_401510((int)v30, v6);
  v7 = sub_403A40(v19);
  sub_401540(v7, "_");
  v20 = v38[2];
  v8 = std::setw(v27, 2, 0);
  sub_401510((int)v30, v8);
  v9 = sub_403A40(v20);
  sub_401540(v9, ".");
  v21 = v38[1];
  v10 = std::setw(v26, 2, 0);
  sub_401510((int)v30, v10);
  v11 = sub_403A40(v21);
  sub_401540(v11, ".");
  v22 = *v38;
  v12 = std::setw(v25, 2, 0);
  sub_401510((int)v30, v12);
  v13 = sub_403A40(v22);
  sub_401540(v13, ".");
  v23 = v35 % 1000;
  v17 = (char *)sub_402500(&v36, 48);
  v14 = std::setw(v24, 3, 0);
  v15 = sub_401510((int)v30, v14);
  sub_4014C0(v15, v17);
  sub_403C00(v23, HIDWORD(v23));
  sub_408250(a1);
  sub_4040C0(v30);
  return a1;
}

