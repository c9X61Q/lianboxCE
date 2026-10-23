// busybox.exe @ 0x45e5ac size=76

int __fastcall sub_45E5AC(int a1, int a2)
{
  int v3; // ebx

  if ( *(_DWORD *)(a2 + 4) == 0 )
    return sub_4604E0(32, 0);
  ++*(_DWORD *)(dword_485FF0 + 56);
  v3 = sub_447C44(nullptr);
  if ( v3 == 0 )
  {
    sub_447F54();
    if ( *(_DWORD *)dword_47310C != 0 )
      sub_45E850();
  }
  sub_43B8DC();
  return v3;
}

