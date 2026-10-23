// busybox.exe @ 0x40d590 size=32

int __cdecl sub_40D590(_DWORD *a1)
{
  int v1; // ecx

  v1 = *(a1 - 1);
  *a1 = v1;
  a1[1] = 1 << v1;
  return sub_4100A0(a1 - 1);
}

