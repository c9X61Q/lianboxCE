// lian86.exe @ 0x0040aae2  size=52  name=sub_40AAE2
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40AAE2(int *a1)
{
  int *v1; // eax
  int result; // eax

  v1 = (int *)a1[2];
  if ( v1 != nullptr )
  {
    result = *v1;
    if ( result != 0 )
    {
      ++a1[5];
      a1[2] = result;
LABEL_5:
      result += 8;
    }
  }
  else
  {
    result = *a1;
    a1[5] = 0;
    a1[2] = result;
    if ( result != 0 )
      goto LABEL_5;
  }
  *(_DWORD *)a1[3] = a1[2];
  return result;
}

