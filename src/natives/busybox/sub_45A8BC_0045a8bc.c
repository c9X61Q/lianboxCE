// busybox.exe @ 0x45a8bc size=52

int sub_45A8BC()
{
  int v0; // eax

  sub_4181F8("restart failed");
  v0 = dword_486010;
  *(_DWORD *)(dword_486010 + 8) = 0;
  *(_DWORD *)(v0 + 12) = 0;
  return sub_470E28(0);
}

