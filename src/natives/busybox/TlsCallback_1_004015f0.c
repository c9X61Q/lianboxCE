// busybox.exe @ 0x4015f0 size=67

int __stdcall TlsCallback_1(int a1, int a2, int a3)
{
  if ( a2 != 3 && a2 != 0 )
    return 1;
  sub_401F60(a1, a2);
  return 1;
}

