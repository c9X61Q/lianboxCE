// lian86.exe @ 0x00401e66  size=230  name=sub_401E66
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __userpurge sub_401E66@<eax>(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  wchar_t *v5; // edx
  int v6; // eax
  wchar_t *v7; // edx
  int v9; // [esp-4h] [ebp-10h]
  int v10; // [esp-4h] [ebp-10h]
  LPWSTR v11; // [esp-4h] [ebp-10h]
  int v12; // [esp-4h] [ebp-10h]
  LPWSTR v13; // [esp-4h] [ebp-10h]
  wchar_t *v14; // [esp-4h] [ebp-10h]
  LPWSTR lpsz; // [esp+0h] [ebp-Ch] BYREF
  LPVOID lpMem[2]; // [esp+4h] [ebp-8h] BYREF

  lpMem[0] = nullptr;
  lpsz = nullptr;
  mutex_enter();
  sub_4051A0(a2);
  v9 = str_append();
  v2 = str_append();
  sub_409698(v2);
  str_assign((LPVOID *)&lpsz, v9);
  PathQuoteSpacesW(lpsz);
  if ( a1 <= 0 )
  {
    v13 = lpsz;
    v6 = str_append();
    v7 = v13;
    v12 = v6;
    str_append_w(v7);
  }
  else
  {
    v3 = str_append();
    sub_40249D(v3);
    str_assign(lpMem, v10);
    v11 = lpsz;
    v4 = str_append();
    v5 = v11;
    v12 = v4;
    str_append_w(v5);
    str_append_w(asc_41702A);
    str_append_w((wchar_t *)lpMem[0]);
  }
  str_assign(lpMem, v12);
  v14 = (wchar_t *)lpMem[0];
  str_append();
  str_append_w(v14);
  sub_405170();
  sub_40E5F0(lpsz);
  return sub_40E5F0(lpMem[0]);
}

