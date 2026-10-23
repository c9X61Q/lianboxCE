// lian86.exe @ 0x0040a8e8  size=71  name=sub_40A8E8
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A8E8(int *a1)
{
  int *v1; // eax
  int v2; // ecx
  int v3; // eax

  v1 = (int *)*a1;
  v2 = a1[5];
  a1[2] = *a1;
  a1[6] = v2;
  if ( v1 != nullptr )
  {
    v3 = *v1;
    *a1 = v3;
    if ( v3 != 0 )
      return *a1 + 8;
    a1[5] = v2 + 1;
  }
  else
  {
    if ( v2 != -1 )
      goto LABEL_7;
    a1[5] = 0;
  }
  *a1 = sub_40A8BB(a1);
LABEL_7:
  if ( *a1 == 0 )
    return 0;
  return *a1 + 8;
}

