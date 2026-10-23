// busybox.exe @ 0x432908 size=44

int __fastcall sub_432908(int a1, int a2)
{
  char v2; // bl
  int v3; // edx
  int result; // eax

  v2 = *(_BYTE *)(a1 + 8);
  v3 = *(_DWORD *)(a2 + 20);
  result = *(_DWORD *)(a1 + 12);
  if ( v2 == 43 )
  {
    LOBYTE(result) = v3 > result;
  }
  else if ( v2 == 45 )
  {
    LOBYTE(result) = v3 < result;
  }
  else
  {
    LOBYTE(result) = v3 == result;
  }
  return (unsigned __int8)result;
}

