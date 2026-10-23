// busybox.exe @ 0x465928 size=57

int __usercall sub_465928@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int v6; // ecx

  v3 = a1;
  v4 = a2 - a1;
  if ( a2 - a1 < 0 )
  {
    v4 = a1 - a2;
    v3 = a2;
  }
  v5 = dword_486010 + 4 * a3;
  free(*(void **)(v5 + 124));
  *(_DWORD *)(v5 + 124) = sub_4718A8(v6, v4 + 1);
  return v3;
}

