// busybox.exe @ 0x43de44 size=49

BOOL __fastcall sub_43DE44(int a1, int a2)
{
  _DWORD *v2; // ebx
  __int64 v3; // rax

  if ( *(_DWORD *)(a2 + 4) == 0 )
    sub_415B40(a1, "expression expected");
  v2 = (_DWORD *)(a2 + 4);
  do
  {
    v3 = sub_4154C4();
    ++v2;
  }
  while ( *v2 != 0 );
  return v3 == 0;
}

