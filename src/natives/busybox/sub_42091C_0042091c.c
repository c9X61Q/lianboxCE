// busybox.exe @ 0x42091c size=67

int sub_42091C()
{
  int Block; // ebx
  int v2; // [esp+4h] [ebp-8h]

  Block = sub_470DF0();
  v2 = sub_471780(0, 1);
  sub_45EA48();
  sub_470B6C(*(_DWORD *)Block, (struct sockaddr *)(Block + 4));
  free((void *)Block);
  return v2;
}

