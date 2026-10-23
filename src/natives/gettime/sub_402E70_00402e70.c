// gettime.exe @ 0x402e70 size=72

void *__thiscall sub_402E70(void *this, int a2)
{
  int v4; // [esp+8h] [ebp-4h]

  *(_DWORD *)this = a2;
  v4 = unknown_libname_40(*(_DWORD *)(**(_DWORD **)this + 4) + *(_DWORD *)this);
  if ( v4 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return this;
}

