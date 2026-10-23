// gettime.exe @ 0x410d83 size=40

struct lconv *__cdecl localeconv()
{
  int v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v0 = ((int (__cdecl *)())__acrt_getptd)();
  v2 = *(_DWORD *)(v0 + 76);
  sub_417F5D(v0, &v2);
  return *(struct lconv **)(v2 + 136);
}

