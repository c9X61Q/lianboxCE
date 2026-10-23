// resizecmdwindow.exe @ 0x14000ae6c size=38

void __fastcall sub_14000AE6C(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    sub_140005EB0(*(_QWORD *)(a2 + 64));
  }
}

