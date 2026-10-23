// busybox.exe @ 0x4527d4 size=89

int __usercall sub_4527D4@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // esi
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // eax

  v2 = dword_485FEC;
  if ( a1 == 0 )
    return *(_DWORD *)(dword_485FEC + 20);
  v4 = 0;
  do
  {
    if ( *(_BYTE *)a1 == 17 )
      v4 += 2;
    else
      ++v4;
    a1 = *(_DWORD *)(a1 + 4);
  }
  while ( a1 != 0 );
  v5 = (_DWORD *)sub_4728CC(a2);
  v5[1] = v4;
  while ( --v4 != -1 )
  {
    v5[2 * v4 + 3] = -2;
    v5[2 * v4 + 2] = -2;
  }
  v3 = *(_DWORD *)(v2 + 20);
  *v5 = v3;
  *(_DWORD *)(v2 + 20) = v5;
  return v3;
}

