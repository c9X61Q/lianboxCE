// gettime.exe @ 0x4085e0 size=51

__int64 __thiscall std::ios_base::width(std::ios_base *this, __int64 a2)
{
  __int64 v3; // [esp+0h] [ebp-Ch]

  v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = a2;
  return v3;
}

