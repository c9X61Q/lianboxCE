// busybox.exe @ 0x4364bc size=66

int __usercall sub_4364BC@<eax>(int a1@<eax>)
{
  unsigned int v1; // ecx
  unsigned int v2; // eax
  int v3; // edx
  int result; // eax

  v1 = *(_DWORD *)(a1 + 16);
  v2 = v1 + 16 * (*(_DWORD *)(a1 + 20) + 0xFFFFFFF);
  v3 = *(_DWORD *)(v2 + 8);
  if ( *(_BYTE *)(dword_485FF0 + 78) != 0 )
  {
    while ( v3 == 0 )
    {
      v2 -= 16;
      if ( v1 > v2 )
        break;
      v3 = *(_DWORD *)(v2 + 8);
    }
  }
  result = (v3 & 0x7F) + 128;
  if ( (v3 & 0x7F) == 0 )
    return BYTE1(v3);
  return result;
}

