// gettime.exe @ 0x407160 size=49

bool __thiscall sub_407160(void *this, int a2, int a3)
{
  int v3; // eax
  _BYTE v5[8]; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+8h] [ebp-4h]

  v6 = this;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 12))(this);
  return std::operator==(v3, (int)v5);
}

