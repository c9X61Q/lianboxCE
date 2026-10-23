// lian86.exe @ 0x0040b050  size=98  name=sub_40B050
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40B050(int a1)
{
  int result; // eax
  HANDLE *v2; // esi

  if ( a1 == -1 )
    return sub_40E075(dword_418784);
  result = sub_40DAD9(dword_418784, a1);
  v2 = (HANDLE *)result;
  if ( result != 0 )
  {
    if ( *(_DWORD *)(result + 4) != 0 )
    {
      sub_40B0C0(result);
      HeapFree(hHeap, 0, v2[1]);
    }
    CloseHandle(*v2);
    return sub_40DA8A(dword_418784, a1);
  }
  return result;
}

