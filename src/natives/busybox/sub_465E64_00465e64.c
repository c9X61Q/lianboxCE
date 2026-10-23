// busybox.exe @ 0x465e64 size=113

int sub_465E64()
{
  unsigned int v0; // ebx
  unsigned __int8 *v1; // esi
  unsigned int v2; // ecx
  _DWORD v4[7]; // [esp+14h] [ebp-1Ch] BYREF

  v0 = sub_416EB0();
  sub_465E54(v4);
  v1 = (unsigned __int8 *)&unk_48433C;
  do
  {
    v2 = *(_DWORD *)((char *)v4 + v1[1]) / v0;
    sub_4480E8("%um%u.%03us%c", v2 / 0x3C, v2 % 0x3C, 1000 * (*(_DWORD *)((char *)v4 + v1[1]) % v0) / v0, *v1);
    v1 += 2;
  }
  while ( *v1 != 0 );
  return 0;
}

