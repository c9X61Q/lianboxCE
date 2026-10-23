// busybox.exe @ 0x432aa8 size=53

int __fastcall sub_432AA8(int a1, int a2)
{
  int result; // eax
  unsigned __int16 v3; // dx

  result = *(_DWORD *)(a2 + 16);
  v3 = *(_WORD *)(a1 + 10);
  if ( (*(_BYTE *)(a1 + 8) & 0xFB) == 0x2B )
  {
    LOBYTE(result) = ((unsigned __int16)result & v3) != 0;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 8) == 45 )
      LOWORD(result) = v3 & result;
    else
      LOWORD(result) = result & 0xFFF;
    LOBYTE(result) = (_WORD)result == v3;
  }
  return (unsigned __int8)result;
}

