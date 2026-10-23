// busybox.exe @ 0x431edc size=99

int __usercall sub_431EDC@<eax>(int a1@<eax>, int a2)
{
  int v3; // edi
  int v4; // esi
  int i; // ebp
  int v6; // eax
  int *v7; // edx

  v3 = dword_485FF0;
  ++*(_DWORD *)(dword_485FF0 + 56);
  v4 = *(_DWORD *)(a1 + 20);
  for ( i = *(_DWORD *)(a1 + 16); --v4 >= 0; i += 16 )
  {
    if ( *(_DWORD *)(i + 12) != v3 + 62 )
      sub_4631A8();
  }
  if ( *(_DWORD *)(a1 + 16) != a1 )
    sub_4631A8();
  *(_BYTE *)(a1 + 25) &= ~2u;
  v6 = dword_4732C4;
  v7 = &dword_4732C4;
  while ( a1 != v6 )
  {
    v7 = (int *)(v6 + 28);
    v6 = *(_DWORD *)(v6 + 28);
  }
  *v7 = *(_DWORD *)(v6 + 28);
  return sub_43B8DC(a2);
}

