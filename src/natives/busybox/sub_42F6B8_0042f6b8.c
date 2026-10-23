// busybox.exe @ 0x42f6b8 size=66

int __usercall sub_42F6B8@<eax>(CHAR *a1@<eax>, int a2@<edx>)
{
  int v3; // ebx
  int v4; // esi

  v3 = sub_45C560(a2, a1);
  if ( (unsigned int)(v3 - 1) <= 0xFFFFFFFD )
  {
    v4 = dword_486010;
    *(_DWORD *)(v4 - 48) = sub_420034(*(_DWORD *)(dword_486010 - 48), a1, v3, dword_486004);
    *(_DWORD *)(v4 - 20) += v3;
  }
  return v3;
}

