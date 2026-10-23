// lian86.exe @ 0x00403e37  size=284  name=sub_403E37
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_403E37(wchar_t *String, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp-4h] [ebp-18h]
  wchar_t *v6; // [esp-4h] [ebp-18h]
  LPCWSTR lpName; // [esp+0h] [ebp-14h] BYREF
  HRSRC hResInfo; // [esp+4h] [ebp-10h]
  LPVOID lpMem; // [esp+8h] [ebp-Ch]
  LPVOID v10[2]; // [esp+Ch] [ebp-8h] BYREF

  v10[0] = nullptr;
  lpMem = nullptr;
  hResInfo = nullptr;
  lpName = nullptr;
  mutex_enter();
  sub_4051A0(a3);
  str_init((int)&lpName, String);
  hResInfo = FindResourceW(hModule, lpName, (LPCWSTR)0xA);
  if ( hResInfo == nullptr )
    goto LABEL_5;
  lpMem = load_resource_copy(hModule, hResInfo);
  nNumberOfBytesToWrite = buf_length(lpMem);
  rc4_crypt(lpMem, nNumberOfBytesToWrite, (wchar_t *)lpWideCharStr);
  if ( a2 != 1 )
  {
    v5 = str_append();
    v3 = str_append();
    sub_40A330((LPCCH)lpMem, nNumberOfBytesToWrite, 2u, v3);
    str_assign(v10, v5);
    sub_40A200(lpMem);
LABEL_5:
    v6 = (wchar_t *)v10[0];
    str_append();
    str_append_w(v6);
    sub_405170();
    goto LABEL_6;
  }
  write_file((wchar_t *)dword_4180B8, lpMem, nNumberOfBytesToWrite, (int)nNumberOfBytesToWrite >> 31);
  sub_40A200(lpMem);
  *(_WORD *)sub_40E750() = 0;
LABEL_6:
  sub_40E5F0((LPVOID)lpName);
  return sub_40E5F0(v10[0]);
}

