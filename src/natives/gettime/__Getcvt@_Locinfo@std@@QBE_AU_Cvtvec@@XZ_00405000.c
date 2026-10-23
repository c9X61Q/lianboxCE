// gettime.exe @ 0x405000 size=79

struct _Cvtvec *__thiscall std::_Locinfo::_Getcvt(std::_Locinfo *this, struct _Cvtvec *__return_ptr retstr)
{
  _Cvtvec v3; // [esp+8h] [ebp-60h] BYREF
  std::_Locinfo *v4; // [esp+34h] [ebp-34h]

  v4 = this;
  *retstr = *_Getcvt(&v3);
  return retstr;
}

