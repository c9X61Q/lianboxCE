// busybox.exe @ 0x453110 size=83

int __usercall sub_453110@<eax>(int a1@<eax>)
{
  int v2; // eax
  int v3; // edx
  unsigned __int8 *v4; // eax
  int result; // eax

  if ( *(_DWORD *)(a1 + 4) >= *(_DWORD *)(a1 + 8) )
  {
    v2 = sub_45C560(0x10000, (LPSTR)(a1 + 24));
    if ( v2 <= 0 )
      sub_418210("unexpected EOF");
    *(_DWORD *)(a1 + 8) = a1 + v2 + 24;
    *(_DWORD *)(a1 + 4) = a1 + 24;
  }
  *(_DWORD *)(a1 + 16) <<= 8;
  v3 = *(_DWORD *)(a1 + 12) << 8;
  v4 = *(unsigned __int8 **)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v4 + 1;
  result = v3 | *v4;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}

