// busybox.exe @ 0x45d9d8 size=64

unsigned int __usercall sub_45D9D8@<eax>(unsigned int result@<eax>, int a2@<edx>)
{
  int v2; // ebp
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // ecx
  unsigned int v7; // edi

  v2 = dword_486010;
  v3 = *(_DWORD *)(dword_486010 - 4);
  v4 = *(_DWORD *)(dword_486010 - 8) | (result << v3);
  v5 = v3 + a2;
  if ( (unsigned int)(v3 + a2) > 0x1F )
  {
    v6 = 32 - v3;
    v7 = result >> v6;
    result = sub_452990(v4, v6);
    v5 -= 32;
    v4 = v7;
  }
  *(_DWORD *)(v2 - 8) = v4;
  *(_DWORD *)(v2 - 4) = v5;
  return result;
}

