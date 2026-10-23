// lian86.exe @ 0x00409872  size=78  name=sub_409872
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_409872(int a1, int a2)
{
  int *v2; // eax
  __int16 *v3; // esi
  _WORD *v4; // eax
  int v5; // eax
  int v7; // [esp+0h] [ebp-4h] BYREF

  v7 = 0;
  v2 = (int *)sub_40D968(dword_41872C);
  if ( a1 >= 0 )
    *v2 = a1;
  v3 = (__int16 *)sub_40973A(&v7);
  v4 = (_WORD *)sub_40E900(v7, a2);
  v5 = sub_4096F9(v3, v4, v7);
  return sub_40EA90(v5);
}

