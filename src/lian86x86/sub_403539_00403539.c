// lian86.exe @ 0x00403539  size=712  name=sub_403539
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_403539(int a1, wchar_t *String, int a3)
{
  int v3; // eax
  wchar_t *v4; // edx
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  int v13; // eax
  char v14; // zf
  int v15; // eax
  LPCWSTR v17; // [esp-4h] [ebp-14h]
  int v18; // [esp-4h] [ebp-14h]
  int v19; // [esp-4h] [ebp-14h]
  int v20; // [esp-4h] [ebp-14h]
  int v21; // [esp-4h] [ebp-14h]
  int v22; // [esp-4h] [ebp-14h]
  int v23; // [esp-4h] [ebp-14h]
  int v24; // [esp-4h] [ebp-14h]
  int v25; // [esp-4h] [ebp-14h]
  int v26; // [esp-4h] [ebp-14h]
  int v27; // [esp-4h] [ebp-14h]
  int v28; // [esp-4h] [ebp-14h]
  wchar_t *v29; // [esp+0h] [ebp-10h]
  LPVOID v30; // [esp+4h] [ebp-Ch] BYREF
  LPVOID lpMem[2]; // [esp+8h] [ebp-8h] BYREF

  lpMem[0] = nullptr;
  v30 = nullptr;
  mutex_enter();
  sub_4051A0(a3);
  str_init((int)&v30, String);
  if ( a1 != 0 )
  {
    switch ( a1 )
    {
      case 1:
        v17 = lpFileName;
        v3 = str_append();
        v4 = (wchar_t *)v17;
        v18 = v3;
        str_append_w(v4);
        str_assign(lpMem, v18);
        goto LABEL_25;
      case 2:
        v19 = str_append();
        v5 = (wchar_t *)str_append();
        sub_40AEBA(4, v5);
        str_assign(lpMem, v19);
        goto LABEL_25;
      case 3:
        v20 = str_append();
        v6 = (wchar_t *)str_append();
        sub_40AEBA(0, v6);
        str_assign(lpMem, v20);
        goto LABEL_25;
      case 4:
        v21 = str_append();
        v7 = (wchar_t *)str_append();
        sub_40AEBA(3, v7);
        str_assign(lpMem, v21);
        goto LABEL_25;
      case 5:
        v22 = str_append();
        v8 = (wchar_t *)str_append();
        sub_40AEBA(8, v8);
        str_assign(lpMem, v22);
        goto LABEL_25;
      case 6:
        v23 = str_append();
        v9 = (wchar_t *)str_append();
        sub_40AEBA(7, v9);
        str_assign(lpMem, v23);
        goto LABEL_25;
      case 7:
        v24 = str_append();
        v10 = (wchar_t *)str_append();
        sub_40AEBA(6, v10);
        str_assign(lpMem, v24);
        goto LABEL_25;
      case 8:
        v25 = str_append();
        v11 = (wchar_t *)str_append();
        sub_40AEBA(2, v11);
        str_assign(lpMem, v25);
        goto LABEL_25;
      case 9:
        v26 = str_append();
        v12 = (wchar_t *)str_append();
        sub_40AEBA(1, v12);
        str_assign(lpMem, v26);
        goto LABEL_25;
      case 10:
        v27 = str_append();
        v13 = str_append();
        sub_409355((int)v30, &Caption, v13);
        str_assign(lpMem, v27);
        sub_405120(0, lpMem[0]);
        if ( !v14 )
          sub_401FBA(0);
        sub_4056D8(1);
LABEL_25:
        v29 = (wchar_t *)lpMem[0];
        str_append();
        str_append_w(v29);
        sub_405170();
        sub_40E5F0(lpMem[0]);
        return sub_40E5F0(v30);
      default:
        break;
    }
  }
  v28 = str_append();
  v15 = str_append();
  sub_40AE75(v15);
  str_assign(lpMem, v28);
  goto LABEL_25;
}

