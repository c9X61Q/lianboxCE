// busybox.exe @ 0x41f7c0 size=70

int __usercall sub_41F7C0@<eax>(unsigned int a1@<eax>, unsigned int a2@<edx>)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // edi
  int v5; // ebp
  _BYTE *v6; // eax

  v2 = a1;
  if ( a2 < a1 )
    v2 = a2;
  v3 = sub_4298C0();
  v4 = dword_486010;
  v5 = 0;
  while ( v2 <= v3 && v2 <= *(_DWORD *)(v4 + 4) - 1 )
  {
    v6 = (_BYTE *)sub_4298C0();
    if ( *v6 == 10 )
      ++v5;
    v2 = (unsigned int)(v6 + 1);
  }
  return v5;
}

