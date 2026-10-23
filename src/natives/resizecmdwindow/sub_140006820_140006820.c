// resizecmdwindow.exe @ 0x140006820 size=57

__int64 __fastcall sub_140006820(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al

  LOBYTE(a2) = 10;
  v3 = std::ios::widen(a1 + *(int *)(*(_QWORD *)a1 + 4LL), a2);
  std::ostream::put(a1, v3);
  std::ostream::flush(a1);
  return a1;
}

