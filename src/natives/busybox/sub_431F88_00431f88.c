// busybox.exe @ 0x431f88 size=94

int __usercall sub_431F88@<eax>(int result@<eax>, int a2@<ecx>)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int i; // edi
  int v6; // ecx
  int v7; // edx

  v2 = result;
  v3 = dword_486010;
  v4 = *(_DWORD *)(dword_486010 - 32);
  if ( v4 <= result )
  {
    *(_DWORD *)(dword_486010 - 32) = result + 16;
    result = sub_471600(a2, 24 * (result + 16));
    *(_DWORD *)(v3 - 28) = result;
    v6 = *(_DWORD *)(v3 - 32);
    while ( v6 > v4 )
    {
      v7 = 24 * v4;
      *(_DWORD *)(result + v7) = 1024;
      *(_DWORD *)(result + v7 + 16) = 0;
      ++v4;
    }
  }
  for ( i = v2; *(_DWORD *)(v3 - 36) > i; ++i )
    result = sub_41CBC4(*(_DWORD *)(v3 - 28) + 24 * i);
  *(_DWORD *)(v3 - 36) = v2;
  return result;
}

