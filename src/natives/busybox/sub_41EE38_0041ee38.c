// busybox.exe @ 0x41ee38 size=73

__int64 __usercall sub_41EE38@<edx:eax>(int a1@<eax>)
{
  int v1; // ebx
  int v2; // edi
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 112);
  v2 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v1 + 24) = v2;
  sub_4481A4();
  sub_416EDC(*(_QWORD *)(v2 + 8));
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v1 + 48) += result;
  return result;
}

