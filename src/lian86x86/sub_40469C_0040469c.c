// lian86.exe @ 0x0040469c  size=225  name=sub_40469C
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40469C(int a1)
{
  int v1; // eax
  int v2; // eax
  wchar_t *v3; // edx
  int v5; // eax
  wchar_t *v7; // [esp-8h] [ebp-20h]
  int v8; // [esp-4h] [ebp-1Ch]
  wchar_t *v9; // [esp-4h] [ebp-1Ch]
  int v10; // [esp-4h] [ebp-1Ch]
  int v11; // [esp-4h] [ebp-1Ch]
  int v12; // [esp-4h] [ebp-1Ch]
  int v13; // [esp+0h] [ebp-18h]
  __int16 v14; // [esp+4h] [ebp-14h]
  wchar_t *String; // [esp+8h] [ebp-10h] BYREF
  LPVOID lpMem; // [esp+Ch] [ebp-Ch] BYREF
  LPVOID v17; // [esp+10h] [ebp-8h] BYREF

  v17 = nullptr;
  lpMem = nullptr;
  String = nullptr;
  mutex_enter();
  dword_41808C = (int)&unk_4170AC;
  v13 = 0;
  do
  {
    if ( v13 > 27 )
      break;
    v14 = *(char *)dword_41808C++;
    v8 = str_append();
    v1 = str_append();
    sub_405DC0(-v14, v1);
    str_assign((LPVOID *)&String, v8);
    v9 = (wchar_t *)lpMem;
    v2 = str_append();
    v3 = v9;
    v10 = v2;
    str_append_w(v3);
    str_append_w(String);
    str_assign(&lpMem, v10);
  }
  while ( !__OFADD__(1, v13++) );
  v11 = str_append();
  v7 = (wchar_t *)lpMem;
  v5 = sub_405100();
  sub_403539(v5, v7, v11);
  str_assign(&v17, v12);
  sub_40AFDA(v17);
  sub_40E5F0(lpMem);
  sub_40E5F0(String);
  return sub_40E5F0(v17);
}

