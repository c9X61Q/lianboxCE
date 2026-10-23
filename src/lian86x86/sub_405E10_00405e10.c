// lian86.exe @ 0x00405e10  size=154  name=sub_405E10
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405E10(const unsigned __int16 *a1, int a2)
{
  const unsigned __int16 *v2; // esi
  unsigned int v3; // edi
  int v4; // ebp
  int v5; // ebx
  const unsigned __int16 *v6; // edx
  int v7; // ebp
  unsigned int v8; // edi
  unsigned __int16 v9; // cx
  unsigned int v11; // [esp+10h] [ebp-4h]

  v2 = a1;
  if ( a1 == nullptr )
    v2 = (const unsigned __int16 *)&unk_413024;
  v3 = wcslen(v2);
  v11 = v3;
  v4 = sub_40E880(v2);
  v5 = sub_40E900(v3, a2);
  if ( v3 != 0 )
  {
    if ( v4 != 0 )
      v2 = (const unsigned __int16 *)sub_40EA10(v4);
    v6 = &v2[v3 - 1];
    if ( v2 <= v6 )
    {
      v7 = v5 - (_DWORD)v2;
      v8 = v5 + 2 * (v3 - 1) - (_DWORD)v6;
      do
      {
        v9 = *v2;
        *(const unsigned __int16 *)((char *)v2++ + v7) = *v6;
        *(const unsigned __int16 *)((char *)v6-- + v8) = v9;
      }
      while ( v2 <= v6 );
      v3 = v11;
    }
  }
  *(_WORD *)(v5 + 2 * v3) = 0;
  return 0;
}

