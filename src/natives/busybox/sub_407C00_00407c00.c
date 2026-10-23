// busybox.exe @ 0x407c00 size=75

// positive sp value has been detected, the output may be wrong!
int __cdecl sub_407C00(int a1, char *a2, void **a3)
{
  void *v3; // esp
  _DWORD v5[1029]; // [esp-1014h] [ebp-101Ch] BYREF

  v3 = alloca(sub_4115D8());
  memset(v5, 0, 0x1010u);
  LOBYTE(v5[1025]) = 1;
  v5[0] = a1;
  return sub_404EA0(v5, a2, a3);
}

