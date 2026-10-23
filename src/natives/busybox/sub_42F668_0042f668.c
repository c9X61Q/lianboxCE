// busybox.exe @ 0x42f668 size=79

BOOL __usercall sub_42F668@<eax>(char *a1@<eax>)
{
  _BYTE v3[16]; // [esp+8h] [ebp-64h] BYREF
  int v4; // [esp+18h] [ebp-54h]

  return sub_442D6C(a1, 1) == 0 && sub_444C28(a1, v3) == 0 && (v4 & 0xF000) == 0x8000;
}

