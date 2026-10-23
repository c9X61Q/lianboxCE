// gettime.exe @ 0x408550 size=62

char __thiscall sub_408550(_DWORD *this, char a2)
{
  std::locale *v2; // eax
  _DWORD *v4[3]; // [esp+0h] [ebp-10h] BYREF
  char v5; // [esp+Fh] [ebp-1h]

  v4[2] = this;
  v2 = (std::locale *)std::ios_base::getloc(this, v4);
  sub_402520(v2);
  v5 = sub_408590(a2);
  sub_4038D0(v4);
  return v5;
}

