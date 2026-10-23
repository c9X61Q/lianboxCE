// busybox.exe @ 0x44d0c4 size=123

// positive sp value has been detected, the output may be wrong!
int __thiscall sub_44D0C4(void *this)
{
  void *v1; // esp
  __time32_t i; // esi
  signed int v3; // ebx
  __time32_t v4; // ebp
  char v6; // [esp-1004h] [ebp-1014h]
  char v7[4096]; // [esp-1000h] [ebp-1010h] BYREF

  v1 = alloca(sub_4115D8(0x1004u, (int)this, v6));
  for ( i = time(nullptr); ; i = v4 )
  {
    v3 = sub_45C560(4096, v7);
    if ( v3 <= 0 )
      break;
    v4 = time(nullptr);
    if ( i != v4 )
      sub_41813C(46);
    sub_43269C(v3, v7);
  }
  sub_41813C(10);
  return 0;
}

