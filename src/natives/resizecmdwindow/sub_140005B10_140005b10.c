// resizecmdwindow.exe @ 0x140005b10 size=82

__int64 __fastcall sub_140005B10(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r8

  v2 = **(_QWORD **)(a1 + 56);
  if ( v2 == 0
    || v2 <= **(_QWORD **)(a1 + 24)
    || a2 != -1 && (_BYTE)a2 != *(_BYTE *)(v2 - 1) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  ++**(_DWORD **)(a1 + 80);
  --**(_QWORD **)(a1 + 56);
  if ( a2 == -1 )
    return 0;
  else
    ***(_BYTE ***)(a1 + 56) = a2;
  return a2;
}

