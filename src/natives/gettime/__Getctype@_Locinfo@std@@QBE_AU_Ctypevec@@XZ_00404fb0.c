// gettime.exe @ 0x404fb0 size=79

struct _Ctypevec *__thiscall std::_Locinfo::_Getctype(std::_Locinfo *this, struct _Ctypevec *__return_ptr retstr)
{
  _Ctypevec v3; // [esp+0h] [ebp-24h] BYREF
  _Ctypevec v4; // [esp+10h] [ebp-14h]
  std::_Locinfo *v5; // [esp+20h] [ebp-4h]

  v5 = this;
  v4 = *_Getctype(&v3);
  *retstr = v4;
  return retstr;
}

