// busybox.exe @ 0x418a74 size=76

int sub_418A74()
{
  int v0; // ebx
  unsigned int v1; // edi
  int i; // esi
  int v3; // edx
  int result; // eax

  v0 = dword_486010;
  v1 = *(_DWORD *)(dword_486010 - 8);
  for ( i = *(_DWORD *)(dword_486010 - 4); i > 0; i -= 8 )
  {
    v3 = *(_DWORD *)(v0 - 80);
    result = *(_DWORD *)(v0 - 16);
    *(_DWORD *)(v0 - 16) = result + 1;
    *(_BYTE *)(v3 + result) = v1;
    if ( *(_DWORD *)(v0 - 16) == 0x4000 )
      result = sub_431150();
    v1 >>= 8;
  }
  *(_DWORD *)(v0 - 8) = 0;
  *(_DWORD *)(v0 - 4) = 0;
  return result;
}

