// busybox.exe @ 0x418d00 size=92

int __fastcall sub_418D00(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  if ( *(_DWORD *)(a2 + 4) != 0 )
  {
    v3 = sub_446FE4();
    if ( v3 <= 0 )
      sub_415B40(v4, "Illegal number: %s", *(const char **)(a2 + 4));
  }
  else
  {
    v3 = 1;
  }
  v5 = *(_DWORD *)(dword_485FF0 + 16);
  if ( v5 > v3 )
    v5 = v3;
  if ( v5 > 0 )
  {
    byte_473328 = (**(_BYTE **)a2 == 99) + 1;
    dword_47359C = v5;
  }
  return 0;
}

