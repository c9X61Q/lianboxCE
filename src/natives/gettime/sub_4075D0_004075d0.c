// gettime.exe @ 0x4075d0 size=55

int __thiscall sub_4075D0(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-8h]

  v4 = unknown_libname_24(this);
  v2 = unknown_libname_48(this);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 8))(v4, a2, v2);
  return a2;
}

