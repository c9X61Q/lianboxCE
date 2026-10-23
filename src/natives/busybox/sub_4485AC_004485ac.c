// busybox.exe @ 0x4485ac size=106

BOOL __fastcall sub_4485AC(int a1, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx

  v3 = dword_486010;
  v4 = sub_45CE08();
  if ( *(_DWORD *)(v3 + 4 * v4 + 105560) == 0 )
    return false;
  if ( a2 == 1 )
  {
    v5 = sub_435514(v4, 3);
    return sub_45CD18() == v5;
  }
  if ( a2 == 3 )
  {
    v5 = sub_435514(v4, 1);
    return sub_45CD18() == v5;
  }
  return false;
}

