// gettime.exe @ 0x405a00 size=63

void *__thiscall sub_405A00(void *this, int a2)
{
  void *v3; // [esp+0h] [ebp-Ch]
  void *Src; // [esp+4h] [ebp-8h]

  v3 = (void *)unknown_libname_1((int)this);
  Src = (void *)unknown_libname_1(a2);
  return memmove(v3, Src, 0x18u);
}

