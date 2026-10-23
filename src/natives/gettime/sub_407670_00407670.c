// gettime.exe @ 0x407670 size=45

_DWORD *__cdecl sub_407670(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  __int64 ticks; // [esp+8h] [ebp-8h] BYREF

  ticks = _Xtime_get_ticks();
  v1 = sub_4014A0(&v3, &ticks);
  sub_402D80(a1, v1);
  return a1;
}

