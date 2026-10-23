// busybox.exe @ 0x4380cc size=37

int sub_4380CC()
{
  int v0; // ebx

  v0 = sub_4728CC();
  *(_DWORD *)(v0 + 4) = 61;
  *(_DWORD *)(v0 + 16) = sub_4728CC();
  return v0;
}

