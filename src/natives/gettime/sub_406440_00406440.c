// gettime.exe @ 0x406440 size=60

void __thiscall sub_406440(std::ios_base *this, int a2, bool a3)
{
  int v3; // [esp+4h] [ebp-4h]

  if ( *((_DWORD *)this + 14) != 0 )
    v3 = 0;
  else
    v3 = 4;
  std::ios_base::clear(this, v3 | a2, a3);
}

