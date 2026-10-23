// busybox.exe @ 0x41f768 size=87

int __usercall sub_41F768@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebx
  _BYTE *v6; // edi
  char v7; // bl

  if ( a1 == 0 )
    return 0;
  v3 = 0;
  result = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 4 * v3);
    if ( v5 == 0 )
      break;
    if ( (*(_WORD *)(v5 + 18) & 0xF000) == 0x4000 )
    {
      if ( a2 != 2 || (v6 = *(_BYTE **)v5, **(_BYTE **)v5 != 46) || (v7 = v6[1]) != 0 && (v7 != 46 || v6[2] != 0) )
        ++result;
    }
    ++v3;
  }
  if ( a2 == 0 )
    return v3 - result;
  return result;
}

