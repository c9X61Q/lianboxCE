// lian86.exe @ 0x0040a120  size=100  name=sub_40A120
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A120(int a1, int a2)
{
  int v2; // eax
  const unsigned __int16 *v3; // esi
  int result; // eax
  unsigned __int16 v5; // cx

  v2 = 0;
  v3 = L"Unknown error code";
  while ( dword_4130F0[2 * v2] != a1 )
  {
    if ( (unsigned int)++v2 >= 0x14 )
      goto LABEL_6;
  }
  v3 = (&off_4130F4)[2 * v2];
LABEL_6:
  result = sub_40E900(wcslen(v3), a2) - (_DWORD)v3;
  do
  {
    v5 = *v3++;
    *(const unsigned __int16 *)((char *)v3 + result - 2) = v5;
  }
  while ( v5 != 0 );
  return result;
}

