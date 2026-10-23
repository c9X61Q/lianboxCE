// gettime.exe @ 0x411280 size=37

int __cdecl ___mb_cur_max_func()
{
  int v0; // ecx
  int v1; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v0;
  v1 = __acrt_getptd();
  v3 = *(_DWORD *)(v1 + 76);
  sub_417F5D(v1, &v3);
  return *(_DWORD *)(v3 + 4);
}

