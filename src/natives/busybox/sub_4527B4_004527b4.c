// busybox.exe @ 0x4527b4 size=31

int __thiscall sub_4527B4(void *this)
{
  int result; // eax

  result = sub_4728CC(this);
  *(_DWORD *)result = off_473358;
  *(_DWORD *)(result + 8) = -1;
  off_473358 = (_UNKNOWN *)result;
  return result;
}

