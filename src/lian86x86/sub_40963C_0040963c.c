// lian86.exe @ 0x0040963c  size=45  name=sub_40963C
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

HANDLE *__stdcall sub_40963C(int a1)
{
  HANDLE *result; // eax

  result = (HANDLE *)sub_40DAD9(dword_418728, a1);
  if ( result != nullptr )
  {
    CloseHandle(*result);
    return (HANDLE *)sub_40DA8A(dword_418728, a1);
  }
  return result;
}

