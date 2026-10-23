// busybox.exe @ 0x4371dc size=26

int sub_4371DC()
{
  int v0; // esi
  int v1; // ebx
  int v3; // [esp+0h] [ebp-8h]

  v0 = dword_485FF4;
  v1 = *(_DWORD *)(dword_485FF4 + 12);
  sub_437140(0, v3);
  return v1 + *(_DWORD *)(v0 + 4);
}

