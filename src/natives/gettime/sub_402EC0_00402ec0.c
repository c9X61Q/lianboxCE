// gettime.exe @ 0x402ec0 size=113

_DWORD *__thiscall sub_402EC0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // edx
  char v7; // [esp-18h] [ebp-38h] BYREF
  _DWORD *v8; // [esp+0h] [ebp-20h]
  _BYTE v9[24]; // [esp+4h] [ebp-1Ch] BYREF

  v8 = this;
  sub_402A10(&v7, a4);
  v4 = sub_405990(v9, a2, a3, v7);
  std::runtime_error::runtime_error(v4);
  sub_403600(v9);
  *v8 = &std::_System_error::`vftable';
  v5 = v8;
  v8[3] = a2;
  v5[4] = a3;
  return v8;
}

