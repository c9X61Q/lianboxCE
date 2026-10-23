// lian86.exe @ 0x00401f4c  size=96  name=TopLevelExceptionFilter
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall __noreturn TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  int v1; // eax
  int v2; // edx
  int v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+8h] [ebp-8h]

  mutex_enter();
  v5 = str_append();
  v3 = str_append();
  str_append_w(nullptr);
  str_append();
  v1 = str_append();
  sub_40A190(v1);
  sub_40E720(v3);
  sub_405182();
  sub_408E27(&Caption, (LPCWSTR)(v2 + v4), 0x10u);
  sub_4051A0(v5);
  JUMPOUT(0x4011B1);
}

