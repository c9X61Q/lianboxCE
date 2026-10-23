// lian86.exe @ 0x0040d840  size=89  name=sub_40D840
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40D840(int a1)
{
  int *v1; // edi
  bool v2; // zf
  int *v3; // eax
  int v4; // edx
  int v6; // ecx

  v1 = nullptr;
  if ( a1 == -1 )
  {
    v2 = dword_418168 == 0;
  }
  else
  {
    if ( dword_418168 <= 0 )
      goto LABEL_11;
    v3 = dword_418170;
    v4 = dword_418168;
    do
    {
      if ( *v3 == a1 )
        v1 = v3;
      v3 += 5;
      --v4;
    }
    while ( v4 != 0 );
    v2 = v1 == nullptr;
  }
  if ( !v2 )
    return 0;
LABEL_11:
  v6 = dword_418168 + 1;
  dword_418170[5 * dword_418168] = a1;
  dword_418168 = v6;
  return 20 * v6 + 4292956;
}

