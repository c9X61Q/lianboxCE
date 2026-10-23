// lian86.exe @ 0x00401fba  size=112  name=sub_401FBA
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __cdecl __noreturn sub_401FBA(int a1)
{
  mutex_enter();
  sub_40AE67(dword_4180C8);
  sub_40AE67(dword_4180B8);
  sub_40347D();
  sub_40AE67(dword_418098);
  RemoveDirectoryW(pszPath);
  RemoveDirectoryW(lpFileName);
  JUMPOUT(0x4011B6);
}

