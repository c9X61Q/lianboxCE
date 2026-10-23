// gettime.exe @ 0x404760 size=52

int __thiscall sub_404760(_DWORD *this, int a2)
{
  int v2; // eax
  char v4; // [esp+7h] [ebp-1h] BYREF

  v4 = 0;
  *(this + 4) = a2;
  v2 = unknown_libname_18(this);
  return unknown_libname_21(a2 + v2, &v4);
}

