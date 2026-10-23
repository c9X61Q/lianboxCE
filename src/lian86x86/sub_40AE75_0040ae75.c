// lian86.exe @ 0x0040ae75  size=69  name=sub_40AE75
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40AE75(int a1)
{
  WCHAR *v1; // ebx
  DWORD CurrentDirectoryW; // esi

  v1 = (WCHAR *)sub_40E900(260, a1);
  CurrentDirectoryW = GetCurrentDirectoryW(0x104u, v1);
  if ( CurrentDirectoryW != 0 && v1[CurrentDirectoryW - 1] != 92 )
    v1[CurrentDirectoryW++] = 92;
  sub_40EA90(260 - CurrentDirectoryW);
  v1[CurrentDirectoryW] = 0;
  return 0;
}

