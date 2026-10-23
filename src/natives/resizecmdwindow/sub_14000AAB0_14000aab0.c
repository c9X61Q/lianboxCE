// resizecmdwindow.exe @ 0x14000aab0 size=41

void __fastcall sub_14000AAB0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    sub_140005EB0(*(_QWORD *)(a2 + 136));
  }
}

