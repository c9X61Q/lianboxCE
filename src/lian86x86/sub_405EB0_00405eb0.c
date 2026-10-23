// lian86.exe @ 0x00405eb0  size=104  name=sub_405EB0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LPWSTR __stdcall sub_405EB0(__int16 *a1, int a2)
{
  char *v2; // esi
  int v3; // edi
  int v4; // ebx
  WCHAR *v5; // edi
  int v6; // ecx
  __int16 v7; // ax

  v2 = (char *)a1;
  v3 = sub_405DE0(a1);
  v4 = sub_40E880(a1);
  v5 = (WCHAR *)sub_40E900(v3, a2);
  if ( v4 != 0 )
    v2 = (char *)sub_40EA10(v4);
  if ( v2 != nullptr )
  {
    v6 = (char *)v5 - v2;
    do
    {
      v7 = *(_WORD *)v2;
      v2 += 2;
      *(_WORD *)&v2[v6 - 2] = v7;
    }
    while ( v7 != 0 );
    return CharUpperW(v5);
  }
  else
  {
    *v5 = 0;
    return nullptr;
  }
}

