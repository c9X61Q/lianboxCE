// lian86.exe @ 0x004120a6  size=94  name=sub_4120A6
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_WORD *__stdcall sub_4120A6(_WORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  _WORD *v5; // esi
  _BYTE *v6; // edi
  __int16 v7; // cx
  _BYTE v9[64]; // [esp+10h] [ebp-40h] BYREF

  HIDWORD(v3) = a3;
  v5 = a1;
  v6 = v9;
  do
  {
    LODWORD(v3) = sub_405260(__PAIR64__(HIDWORD(v3), a2), 10);
    a2 = v3;
    *(_WORD *)v6 = v7 + 48;
    v6 += 2;
  }
  while ( v3 != 0 );
  do
  {
    v6 -= 2;
    *v5++ = *(_WORD *)v6;
  }
  while ( v6 != v9 );
  *v5 = 0;
  return a1;
}

