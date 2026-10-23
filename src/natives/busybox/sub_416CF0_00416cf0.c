// busybox.exe @ 0x416cf0 size=62

int __usercall sub_416CF0@<eax>(_BYTE *a1@<eax>)
{
  int v2; // [esp+8h] [ebp-4h]

  sub_4041C0(a1, 0xBF6u);
  v2 = dword_486010 + 64;
  sub_41846C("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=");
  return v2;
}

