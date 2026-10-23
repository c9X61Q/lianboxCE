// busybox.exe @ 0x42f118 size=13

int __fastcall sub_42F118(int a1, int a2)
{
  int result; // eax

  result = sub_44C410();
  *(_DWORD *)(a2 + 24) += result;
  return result;
}

