// busybox.exe @ 0x463530 size=34

int __thiscall sub_463530(void *this)
{
  int v1; // ebx

  v1 = sub_4728CC(this);
  *(_BYTE *)v1 = 1;
  *(_DWORD *)(v1 + 8) = sub_47188C();
  return v1;
}

