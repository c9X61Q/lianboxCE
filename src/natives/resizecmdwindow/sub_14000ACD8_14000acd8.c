// resizecmdwindow.exe @ 0x14000acd8 size=59

__int64 __fastcall sub_14000ACD8(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::ios::setstate(*(_QWORD *)(a2 + 96) + *(int *)(**(_QWORD **)(a2 + 96) + 4LL), 4, a3);
  return 0;
}

