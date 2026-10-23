// gettime.exe @ 0x408270 size=107

void *__thiscall sub_408270(_DWORD *this, void *a2)
{
  void *Src[3]; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD *v4; // [esp+Ch] [ebp-20h]
  _BYTE v5[24]; // [esp+10h] [ebp-1Ch] BYREF

  v4 = this;
  sub_402A70(v5, (int)(this + 16));
  sub_404D20(v4, (int *)Src);
  if ( Src[0] != nullptr )
    std::string::assign((int)v5, Src[0], (size_t)Src[1]);
  sub_4029C0(a2, (int)v5);
  sub_403600(v5);
  return a2;
}

