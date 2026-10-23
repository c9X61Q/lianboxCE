// busybox.exe @ 0x431a90 size=156

int __usercall sub_431A90@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  unsigned int v4; // eax
  int v5; // esi
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // et2
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // et2

  v4 = a3 / 0x3C;
  v5 = a2 + 1;
  if ( a3 <= 0xE0F )
    return sub_461148(a1, v5, "%2u:%02u", a3 / 0x3C, a3 % 0x3C);
  v9 = v4 % 0x3C;
  v7 = v4 / 0x3C;
  v8 = v9;
  if ( a3 <= 0x1517F )
    return sub_461148(a1, v5, "%2uh%02u", v7, v8);
  v12 = v7 % 0x18;
  v10 = v7 / 0x18;
  v11 = v12;
  if ( a3 > 0x83D5FF )
    return sub_461148(a1, v5, "%4lud", v10);
  else
    return sub_461148(a1, v5, "%2ud%02u", v10, v11);
}

