// gettime.exe @ 0x411120 size=132

int __cdecl islower(int C)
{
  unsigned int v1; // edi
  int v3; // eax
  _DWORD *v4; // [esp+8h] [ebp-4h] BYREF

  v1 = C + 1;
  if ( dword_438A0C != 0 )
  {
    v3 = __acrt_getptd();
    v4 = *(_DWORD **)(v3 + 76);
    sub_417F5D(v3, &v4);
    if ( v1 <= 0x100 )
      return *(_WORD *)(*v4 + 2 * C) & 2;
    if ( (int)v4[1] > 1 )
      return _isctype_l(C, 2, nullptr);
  }
  else if ( v1 <= 0x100 )
  {
    return off_4371A8[C] & 2;
  }
  return 0;
}

